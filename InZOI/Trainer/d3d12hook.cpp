#include "d3d12hook.h"

namespace d3d12hook
{
    ID3D12Device *d3d12Device = nullptr;
    ID3D12DescriptorHeap *d3d12DescriptorHeapBackBuffers = nullptr;
    ID3D12DescriptorHeap *d3d12DescriptorHeapImGuiRender = nullptr;
    ID3D12GraphicsCommandList *d3d12CommandList = nullptr;
    ID3D12Fence *d3d12Fence = nullptr;
    UINT64 d3d12FenceValue = 0;
    ID3D12CommandQueue *d3d12CommandQueue = nullptr;

    PresentD3D12 oPresentD3D12;
    DrawInstancedD3D12 oDrawInstancedD3D12;
    DrawIndexedInstancedD3D12 oDrawIndexedInstancedD3D12;

    // 添加一个用于存储渲染命令队列的变量
    ID3D12CommandQueue *d3d12RenderCommandQueue = nullptr;

    void (*oExecuteCommandListsD3D12)(ID3D12CommandQueue *, UINT, ID3D12CommandList *);
    HRESULT (*oSignalD3D12)(ID3D12CommandQueue *, ID3D12Fence *, UINT64);

    struct __declspec(uuid("189819f1-1db6-4b57-be54-1821339b85f7")) ID3D12Device;

    struct FrameContext
    {
        ID3D12CommandAllocator *commandAllocator = nullptr;
        ID3D12Resource *main_render_target_resource = nullptr;
        D3D12_CPU_DESCRIPTOR_HANDLE main_render_target_descriptor;
    };

    uintx_t buffersCounts = -1;
    FrameContext *frameContext;

    bool shutdown = false;

    // 新增函数实现
    ID3D12CommandQueue *GetCommandQueueFromSwapChain(IDXGISwapChain3 *pSwapChain)
    {
        // 获取已知CommandQueue的VTable地址，用于匹配查找
        ID3D12CommandQueue *knownCmdQueue = d3d12CommandQueue;
        if (!knownCmdQueue)
            return nullptr;

        void **knownVTable = *(void ***)knownCmdQueue;

        // 扫描SwapChain对象前1KB内存，查找指向CommandQueue VTable的指针
        const int scanRange = 1024; // 扫描范围1KB
        void **swapChainMemory = (void **)pSwapChain;

        for (int i = 0; i < scanRange / sizeof(void *); i++)
        {
            // 获取当前内存位置可能的对象指针
            void **possibleObj = (void **)swapChainMemory[i];

            // 检查指针是否有效
            if (IsBadReadPtr(possibleObj, sizeof(void *)))
                continue;

            // 获取可能的VTable
            void **possibleVTable = nullptr;
            __try
            {
                possibleVTable = (void **)possibleObj[0];
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                continue;
            }

            // 检查VTable指针是否有效
            if (IsBadReadPtr(possibleVTable, sizeof(void *)))
                continue;

            // 如果找到相似的VTable，可能是CommandQueue对象
            if (possibleVTable == knownVTable)
            {
                return (ID3D12CommandQueue *)possibleObj;
            }
        }

        return nullptr;
    }

    long __fastcall hookPresentD3D12(IDXGISwapChain3 *pSwapChain, UINT SyncInterval, UINT Flags)
    {
        static bool init = false;

        if (GetAsyncKeyState(globals::openMenuKey) & 0x1)
        {

            menu::isOpen ? menu::isOpen = false : menu::isOpen = true;

            Output::send<LogLevel::Verbose>(STR("openMenuKey is keyup \n"));
        }

        if (!init)
        {
            if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D12Device), (void **)&d3d12Device)))
            {
                ImGui::CreateContext();

                unsigned char *pixels;
                int width, height;
                ImGuiIO &io = ImGui::GetIO();
                (void)io;
                ImGui::StyleColorsDark();
                io.Fonts->AddFontDefault();
                io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);
                io.IniFilename = NULL;

                CreateEvent(nullptr, false, false, nullptr);

                DXGI_SWAP_CHAIN_DESC sdesc;
                pSwapChain->GetDesc(&sdesc);
                sdesc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
                sdesc.OutputWindow = globals::mainWindow;
                sdesc.Windowed = ((GetWindowLongPtr(globals::mainWindow, GWL_STYLE) & WS_POPUP) != 0) ? false : true;

                buffersCounts = sdesc.BufferCount;
                frameContext = new FrameContext[buffersCounts];

                D3D12_DESCRIPTOR_HEAP_DESC descriptorImGuiRender = {};
                descriptorImGuiRender.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
                descriptorImGuiRender.NumDescriptors = buffersCounts;
                descriptorImGuiRender.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;

                if (d3d12Device->CreateDescriptorHeap(&descriptorImGuiRender, IID_PPV_ARGS(&d3d12DescriptorHeapImGuiRender)) != S_OK)
                    return false;

                ID3D12CommandAllocator *allocator;
                if (d3d12Device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&allocator)) != S_OK)
                    return false;

                for (size_t i = 0; i < buffersCounts; i++)
                {
                    frameContext[i].commandAllocator = allocator;
                }

                if (d3d12Device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, allocator, NULL, IID_PPV_ARGS(&d3d12CommandList)) != S_OK ||
                    d3d12CommandList->Close() != S_OK)
                    return false;

                D3D12_DESCRIPTOR_HEAP_DESC descriptorBackBuffers;
                descriptorBackBuffers.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
                descriptorBackBuffers.NumDescriptors = buffersCounts;
                descriptorBackBuffers.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
                descriptorBackBuffers.NodeMask = 1;

                if (d3d12Device->CreateDescriptorHeap(&descriptorBackBuffers, IID_PPV_ARGS(&d3d12DescriptorHeapBackBuffers)) != S_OK)
                    return false;

                const auto rtvDescriptorSize = d3d12Device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
                D3D12_CPU_DESCRIPTOR_HANDLE rtvHandle = d3d12DescriptorHeapBackBuffers->GetCPUDescriptorHandleForHeapStart();

                for (size_t i = 0; i < buffersCounts; i++)
                {
                    ID3D12Resource *pBackBuffer = nullptr;

                    frameContext[i].main_render_target_descriptor = rtvHandle;
                    pSwapChain->GetBuffer(i, IID_PPV_ARGS(&pBackBuffer));
                    d3d12Device->CreateRenderTargetView(pBackBuffer, nullptr, rtvHandle);
                    frameContext[i].main_render_target_resource = pBackBuffer;
                    rtvHandle.ptr += rtvDescriptorSize;
                }

                ImGui_ImplWin32_Init(globals::mainWindow);
                ImGui_ImplDX12_Init(d3d12Device, buffersCounts,
                                    DXGI_FORMAT_R8G8B8A8_UNORM, d3d12DescriptorHeapImGuiRender,
                                    d3d12DescriptorHeapImGuiRender->GetCPUDescriptorHandleForHeapStart(),
                                    d3d12DescriptorHeapImGuiRender->GetGPUDescriptorHandleForHeapStart());

                ImGui_ImplDX12_CreateDeviceObjects();

                inputhook::Init(globals::mainWindow);
            }

            // 在初始化阶段，尝试获取正确的渲染命令队列
            if (d3d12CommandQueue)
            {
                d3d12RenderCommandQueue = GetCommandQueueFromSwapChain(pSwapChain);
                // 如果获取失败，退回到原来的命令队列
                if (!d3d12RenderCommandQueue)
                    d3d12RenderCommandQueue = d3d12CommandQueue;
            }

            init = true;
        }

        if (shutdown == false)
        {
            // 检查命令队列是否有效
            ID3D12CommandQueue *activeQueue = d3d12RenderCommandQueue ? d3d12RenderCommandQueue : d3d12CommandQueue;
            if (activeQueue == nullptr)
            {
                Output::send<LogLevel::Verbose>(STR("activeQueue is nulptr \n"));
                return oPresentD3D12(pSwapChain, SyncInterval, Flags);
            }

            // if (d3d12CommandQueue == nullptr)
            //     return oPresentD3D12(pSwapChain, SyncInterval, Flags);

            ImGui_ImplDX12_NewFrame();
            ImGui_ImplWin32_NewFrame();

            // menu::Init();
            InitImGui();

            FrameContext &currentFrameContext = frameContext[pSwapChain->GetCurrentBackBufferIndex()];
            currentFrameContext.commandAllocator->Reset();

            D3D12_RESOURCE_BARRIER barrier;
            barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
            barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
            barrier.Transition.pResource = currentFrameContext.main_render_target_resource;
            barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
            barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
            barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;

            d3d12CommandList->Reset(currentFrameContext.commandAllocator, nullptr);
            d3d12CommandList->ResourceBarrier(1, &barrier);
            d3d12CommandList->OMSetRenderTargets(1, &currentFrameContext.main_render_target_descriptor, FALSE, nullptr);
            d3d12CommandList->SetDescriptorHeaps(1, &d3d12DescriptorHeapImGuiRender);

            ImGui::Render();
            ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData(), d3d12CommandList);

            barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
            barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_PRESENT;

            d3d12CommandList->ResourceBarrier(1, &barrier);
            d3d12CommandList->Close();

            // 使用正确的命令队列执行命令列表
            activeQueue->ExecuteCommandLists(1, reinterpret_cast<ID3D12CommandList *const *>(&d3d12CommandList));

            // d3d12CommandQueue->ExecuteCommandLists(1, reinterpret_cast<ID3D12CommandList *const *>(&d3d12CommandList));
        }

        return oPresentD3D12(pSwapChain, SyncInterval, Flags);
    }

    void __fastcall hookkDrawInstancedD3D12(ID3D12GraphicsCommandList *dCommandList, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation)
    {
        return oDrawInstancedD3D12(dCommandList, VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
    }

    void __fastcall hookDrawIndexedInstancedD3D12(ID3D12GraphicsCommandList *dCommandList, UINT IndexCount, UINT InstanceCount, UINT StartIndex, INT BaseVertex)
    {
        return oDrawIndexedInstancedD3D12(dCommandList, IndexCount, InstanceCount, StartIndex, BaseVertex);
    }

    void hookExecuteCommandListsD3D12(ID3D12CommandQueue *queue, UINT NumCommandLists, ID3D12CommandList *ppCommandLists)
    {
        if (!d3d12CommandQueue)
            d3d12CommandQueue = queue;

        oExecuteCommandListsD3D12(queue, NumCommandLists, ppCommandLists);
    }

    HRESULT hookSignalD3D12(ID3D12CommandQueue *queue, ID3D12Fence *fence, UINT64 value)
    {
        if (d3d12CommandQueue != nullptr && queue == d3d12CommandQueue)
        {
            d3d12Fence = fence;
            d3d12FenceValue = value;
        }

        return oSignalD3D12(queue, fence, value);
    }

    void release()
    {
        shutdown = true;
        d3d12Device->Release();
        d3d12DescriptorHeapBackBuffers->Release();
        d3d12DescriptorHeapImGuiRender->Release();
        d3d12CommandList->Release();
        d3d12Fence->Release();
        d3d12CommandQueue->Release();

        kiero::shutdown();
        inputhook::Remove(globals::mainWindow);

        Beep(220, 100);
        FreeLibraryAndExitThread(globals::mainModule, 0);
    }
}