#include "MainTrainer.h"
#include "d3d12hook.h"

// #include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObject.hpp>

using namespace RC::Unreal;

void hookToGame()
{
    bool init_hook = false;
    do
    {
        // 等待游戏完全启动
        if (kiero::init(kiero::RenderType::D3D12) == kiero::Status::Success)
        {

            kiero::bind(54, (void **)&d3d12hook::oExecuteCommandListsD3D12, d3d12hook::hookExecuteCommandListsD3D12);
            kiero::bind(58, (void **)&d3d12hook::oSignalD3D12, d3d12hook::hookSignalD3D12);
            kiero::bind(140, (void **)&d3d12hook::oPresentD3D12, d3d12hook::hookPresentD3D12);
            kiero::bind(84, (void **)&d3d12hook::oDrawInstancedD3D12, d3d12hook::hookkDrawInstancedD3D12);
            kiero::bind(85, (void **)&d3d12hook::oDrawIndexedInstancedD3D12, d3d12hook::hookDrawIndexedInstancedD3D12);

            init_hook = true;
        }
    } while (!init_hook);
}

void InitImGui()
{
    Output::send<LogLevel::Verbose>(STR("Init IMGUI \n"));

    ImGui::NewFrame();

    ImGui::Begin("Gloss Trainer");

    ImGuiIO &io = ImGui::GetIO();

    ImGui::Text("延迟 %.3f ms/frame (%.2f FPS)", 1000.0f / io.Framerate, io.Framerate);

    ImGui::End();
}
