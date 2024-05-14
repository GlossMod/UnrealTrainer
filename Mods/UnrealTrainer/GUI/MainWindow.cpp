#include "MainWindow.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

Present oPresent;
HWND window = NULL;
WNDPROC oWndProc;
ID3D11Device *pDevice = NULL;
ID3D11DeviceContext *pContext = NULL;
ID3D11RenderTargetView *mainRenderTargetView;

void InitImGui()
{
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO();
    io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
    ImGui_ImplWin32_Init(window);
    ImGui_ImplDX11_Init(pDevice, pContext);

    // io.Fonts->AddFontDefault();
    // 处理 中文字体 问题
    io.Fonts->AddFontFromFileTTF("c:\\Windows\\Fonts\\msyh.ttc", 14.0f, nullptr, io.Fonts->GetGlyphRangesChineseFull());
}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

    if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
        return true;

    return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

void PlayerInfo()
{
    if (ImGui::TreeNode("玩家信息"))
    {

        // FCharactorInfo *CharactorInfomation = MyFNGameBase.CharactorInfomation;
        // CharactorInfomation->FirstName = (void *)((uintptr_t)MyFNGameBase.CharactorInfomation + 0x0);
        // CharactorInfomation->LastName = (void *)((uintptr_t)MyFNGameBase.CharactorInfomation + 0x8);
        // ImGui::Text("玩家名称 %s %s", (char *)CharactorInfomation->FirstName, (char *)CharactorInfomation->LastName);

        ImGui::InputInt("玩家灵石", (int *)MyFNGameBase.LingShi, 100);
        ImGui::InputInt("宗门贡献", (int *)MyFNGameBase.ZongMenFamePoint, 100);
        ImGui::InputInt("宗门薪资", (int *)MyFNGameBase.AvailableZongMenJobSalary, 100);
        ImGui::InputInt("天空金", (int *)MyFNGameBase.SkyGold, 100);
        ImGui::InputInt("视野大小", (int *)MyFNGameBase.BigWorldInsightSize, 10);

        ImGui::Text("玩家坐标: %p", MyFNGameBase.CoordinatePositon);

        ImGui::TreePop();
        ImGui::Spacing();
    }
}

void showImgui()
{
    static int counter = 0;
    static float f = 0.0f;
    ImGuiIO &io = ImGui::GetIO();

    if (MyFNGameBase.LingShi)
    {
        PlayerInfo();
    }
    else
    {
        ImGui::Text("等待进入存档");
    }

    ImGui::Text("延迟 %.3f ms/frame (%.2f FPS)", 1000.0f / io.Framerate, io.Framerate);
}

// Our state
bool init = false;
HRESULT __stdcall hkPresent(IDXGISwapChain *pSwapChain, UINT SyncInterval, UINT Flags)
{
    if (!init)
    {
        if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void **)&pDevice)))
        {
            pDevice->GetImmediateContext(&pContext);
            DXGI_SWAP_CHAIN_DESC sd;
            pSwapChain->GetDesc(&sd);
            window = sd.OutputWindow;
            ID3D11Texture2D *pBackBuffer;
            pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID *)&pBackBuffer);
            pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
            pBackBuffer->Release();
            oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
            InitImGui();
            init_hook();

            init = true;
        }

        else
            return oPresent(pSwapChain, SyncInterval, Flags);
    }

    ImGui_ImplDX11_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    ImGui::Begin("Gloss Trainer");
    showImgui();
    ImGui::End();

    ImGui::Render();

    pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    return oPresent(pSwapChain, SyncInterval, Flags);
}

void WindowInit()
{
    bool init_hook = false;
    do
    {
        // 等待游戏完全启动
        if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
        {
            kiero::bind(8, (void **)&oPresent, hkPresent);
            init_hook = true;
        }
    } while (!init_hook);
}