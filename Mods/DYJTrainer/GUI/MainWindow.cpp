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
    FFightAttribute *FightAttribute = &MyFNGameBase->FightAttribute;
    FBattleAttribute *BattleAttribute = &MyFNGameBase->BattleAttribute;

    if (ImGui::TreeNode("玩家信息"))
    {
        ImGui::InputInt("玩家灵石", (int *)&MyFNGameBase->LingShi, 100);
        ImGui::InputInt("宗门贡献", (int *)&MyFNGameBase->ZongMenFamePoint, 100);
        // ImGui::InputInt("宗门薪资", (int *)&MyFNGameBase->AvailableZongMenJobSalary, 100);
        // ImGui::InputInt("天空金", (int *)&MyFNGameBase->SkyGold, 100);
        ImGui::InputInt("视野大小", (int *)&MyFNGameBase->BigWorldInsightSize, 10);

        ImGui::InputFloat("当前灵力", (float *)&FightAttribute->LQ_Total, 1.0f, 10.0f);
        ImGui::InputFloat("最大灵力", (float *)&FightAttribute->LQ_MaxTotal, 1.0f, 10.0f);

        ImGui::TreePop();
        ImGui::Spacing();
    }

    if (ImGui::TreeNode("玩家属性"))
    {
        ImGui::InputInt("悟性", (int *)&FightAttribute->Perception, 1);

        // 血量
        ImGui::InputInt("HpBase", (int *)&BattleAttribute->HpBase, 1);
        ImGui::InputInt("HpAdd", (int *)&BattleAttribute->HpAdd, 1);
        ImGui::InputFloat("HpMul", (float *)&BattleAttribute->HpMul, 1.0f, 10.0f);
        ImGui::InputInt("HpCurrent", (int *)&BattleAttribute->HpCurrent, 1);

        // 蓝量
        ImGui::InputInt("MpBase", (int *)&BattleAttribute->MpBase, 1);
        ImGui::InputInt("MpAdd", (int *)&BattleAttribute->MpAdd, 1);
        ImGui::InputInt("MpMul", (int *)&BattleAttribute->MpMul, 1);
        ImGui::InputInt("MpCurrent", (int *)&BattleAttribute->MpCurrent, 1);

        // 灵气
        ImGui::InputInt("LQHeal", (int *)&BattleAttribute->LQHeal, 1);
        ImGui::InputFloat("LQHealRatio", (float *)&BattleAttribute->LQHealRatio, 1.0f, 10.0f);
        ImGui::InputInt("LQHealAdd", (int *)&BattleAttribute->LQHealAdd, 1);
        ImGui::InputInt("LQHealMul", (int *)&BattleAttribute->LQHealMul, 1);
        ImGui::InputInt("LQRegen", (int *)&BattleAttribute->LQRegen, 1);
        ImGui::InputFloat("LQRegenRatio", (float *)&BattleAttribute->LQRegenRatio, 1.0f, 10.0f);
        ImGui::InputInt("LQRegenAdd", (int *)&BattleAttribute->LQRegenAdd, 1);
        ImGui::InputInt("LQRegenMul", (int *)&BattleAttribute->LQRegenMul, 1);

        // 攻击力
        ImGui::InputInt("Att", (int *)&BattleAttribute->Att, 1);
        ImGui::InputInt("AttAdd", (int *)&BattleAttribute->AttAdd, 1);
        ImGui::InputInt("AttMul", (int *)&BattleAttribute->AttMul, 1);

        // 防御力
        ImGui::InputInt("Def", (int *)&BattleAttribute->Def, 1);
        ImGui::InputInt("DefAdd", (int *)&BattleAttribute->DefAdd, 1);
        ImGui::InputInt("DefMul", (int *)&BattleAttribute->DefMul, 1);

        // 暴击
        ImGui::InputFloat("CritChance", (float *)&BattleAttribute->CritChance, 1.0f, 10.0f);
        ImGui::InputFloat("CritChanceAdd", (float *)&BattleAttribute->CritChanceAdd, 1.0f, 10.0f);
        ImGui::InputFloat("CritChanceMul", (float *)&BattleAttribute->CritChanceMul, 1.0f, 10.0f);
        ImGui::InputFloat("CritDamageRate", (float *)&BattleAttribute->CritDamageRate, 1.0f, 10.0f);
        ImGui::InputFloat("CritDamageRateAdd", (float *)&BattleAttribute->CritDamageRateAdd, 1.0f, 10.0f);
        ImGui::InputFloat("CritDamageRateMul", (float *)&BattleAttribute->CritDamageRateMul, 1.0f, 10.0f);

        // 移动速度
        ImGui::InputInt("MoveSpeed", (int *)&BattleAttribute->MoveSpeed, 1);
        ImGui::InputInt("MoveSpeedMul", (int *)&BattleAttribute->MoveSpeedMul, 1);
        ImGui::InputInt("MoveSpeedAdd", (int *)&BattleAttribute->MoveSpeedAdd, 1);

        // 增减伤
        ImGui::InputInt("BasicDamage", (int *)&BattleAttribute->BasicDamage, 1);
        ImGui::InputInt("DamageFinalIncrease", (int *)&BattleAttribute->DamageFinalIncrease, 1);
        ImGui::InputInt("DamageFinalDecrease", (int *)&BattleAttribute->DamageFinalDecrease, 1);

        // 五行减伤
        ImGui::InputFloat("DamageJinDec", (float *)&BattleAttribute->DamageJinDec, 1.0f, 10.0f);
        ImGui::InputFloat("DamageShuiDec", (float *)&BattleAttribute->DamageShuiDec, 1.0f, 10.0f);
        ImGui::InputFloat("DamageMuDec", (float *)&BattleAttribute->DamageMuDec, 1.0f, 10.0f);
        ImGui::InputFloat("DamageHuoDec", (float *)&BattleAttribute->DamageHuoDec, 1.0f, 10.0f);
        ImGui::InputFloat("DamageTuDec", (float *)&BattleAttribute->DamageTuDec, 1.0f, 10.0f);
        ImGui::InputFloat("DamageJinMul", (float *)&BattleAttribute->DamageJinMul, 1.0f, 10.0f);
        ImGui::InputFloat("DamageShuiMul", (float *)&BattleAttribute->DamageShuiMul, 1.0f, 10.0f);
        ImGui::InputFloat("DamageMuMul", (float *)&BattleAttribute->DamageMuMul, 1.0f, 10.0f);
        ImGui::InputFloat("DamageHuoMul", (float *)&BattleAttribute->DamageHuoMul, 1.0f, 10.0f);
        ImGui::InputFloat("DamageTuMul", (float *)&BattleAttribute->DamageTuMul, 1.0f, 10.0f);

        // 攻速
        ImGui::InputFloat("BasicAtkSpeed", (float *)&BattleAttribute->BasicAtkSpeed, 1.0f, 10.0f);
        ImGui::InputFloat("BasicCDR", (float *)&BattleAttribute->BasicCDR, 1.0f, 10.0f);

        ImGui::TreePop();
        ImGui::Spacing();
    }

    if (ImGui::TreeNode("五行灵根"))
    {
        ImGui::InputInt("金", (int *)&FightAttribute->CapcityWuxing[0], 1);
        ImGui::InputInt("木", (int *)&FightAttribute->CapcityWuxing[1], 1);
        ImGui::InputInt("水", (int *)&FightAttribute->CapcityWuxing[2], 1);
        ImGui::InputInt("火", (int *)&FightAttribute->CapcityWuxing[3], 1);
        ImGui::InputInt("土", (int *)&FightAttribute->CapcityWuxing[4], 1);

        ImGui::TreePop();
        ImGui::Spacing();
    }
}

void showImgui()
{
    static int counter = 0;
    static float f = 0.0f;
    ImGuiIO &io = ImGui::GetIO();

    if (MyFNGameBase)
    {
        PlayerInfo();
    }
    else
    {
        ImGui::Text("等待进入存档");
    }

    if (ImGui::Button("测试按钮"))
    {
        constexpr int size = sizeof(TArray<int32>);

        constexpr int offset = offsetof(FRPGAttributeBase, LingShi);

        printf("offset: %d, size: %d, LingShi: %d \n, ", offset, size, (int)MyFNGameBase->LingShi);
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