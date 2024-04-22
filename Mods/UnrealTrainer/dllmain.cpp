#include <stdio.h>
#include <Mod/CppUserModBase.hpp>
#include <UE4SSProgram.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObject.hpp>
#include <DynamicOutput/DynamicOutput.hpp>

#include <string>
#include <Unreal/ReflectedFunction.hpp>
#include <Unreal/GameplayStatics.hpp>
#include <Unreal/Hooks.hpp>
#include <Unreal/World.hpp>
#include <Input/Handler.hpp>

#include <Windows.h>

using namespace RC;
using namespace RC::Input;
using namespace RC::Unreal;

class UnrealTrainer : public CppUserModBase
{
private:
    int m_private_number{33};
    std::shared_ptr<GUI::GUITab> m_less_safe_tab{};
    bool show_demo_window = false;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

public:
    UnrealTrainer() : CppUserModBase()
    {
        ModName = STR("UnrealTrainer");
        ModVersion = STR("1.0");
        ModDescription = STR("Unreal Trainer");
        ModAuthors = STR("Xiaom");
    }

    ~UnrealTrainer() override
    {
    }

    auto on_update() -> void override
    {

        // 监听按键按下
        if (GetAsyncKeyState(Input::Key::HOME))
        {
            Output::send<LogLevel::Verbose>(STR("HOME key pressed\n"));
            // 延迟 100ms
            Sleep(100);
        }
    }

    auto on_unreal_init() -> void override
    {
        // auto Object = UObjectGlobals::StaticFindObject<UObject *>(nullptr, nullptr, STR("/Script/CoreUObject.Object"));
        // Output::send<LogLevel::Verbose>(STR("Object Name: {}\n"), Object->GetFullName());

        // Hook::RegisterBeginPlayPostCallback([&](AActor *Context)
        //                                     {
        //                                         if (Context)
        //                                         {
        //                                             // auto ContextName = Context->GetClassPrivate()->GetName();

        //                                             Output::send<LogLevel::Verbose>(STR("BeginPlayPostCallback: \n"));
        //                                         }

        //                                         // ...
        //                                     });

        createImGui();
    }

    void createImGui()
    {

        // 在创建选项卡之前启用 ImGui 至关重要。
        // 如果您不这样做，一旦 ImGui 尝试在选项卡中渲染任何内容，就会发生崩溃。
        UE4SS_ENABLE_IMGUI()

        // 字体加载无效
        // ImGuiIO &io = ImGui::GetIO();
        // io.Fonts->AddFontFromFileTTF("c:\\Windows\\Fonts\\simsun.ttc", 16.0f);

        Output::send<LogLevel::Verbose>(STR("UnrealTrainer says hello\n"));

        // 'register_tab' 函数将告诉 UE4SS 渲染一个选项卡。
        // 当这个 C++ mod 被卸载时，以这种方式注册的选项卡将被自动清理。
        // 第一个参数是选项卡的显示名称。
        // 第二个参数是 UE4SS 将用来渲染选项卡内容的回调。
        // 回调的参数是指向你的 mod 的指针。
        register_tab(STR("UnrealTrainer"), [](CppUserModBase *instance)
                     {
                         //  // 在此回调中，您可以开始使用 ImGui 渲染选项卡的内容。
                         ImGui::Text("This is the contents of the tab");

                         // 您可以使用 'instance' 参数访问 mod 类的成员。
                         auto mod = dynamic_cast<UnrealTrainer *>(instance);
                         if (!mod)
                         {
                             // 出现问题导致“实例”设置不正确。
                             // 让我们中止函数的其余部分，这样您就不会访问无效的指针。
                             return;
                         }

                         static float f = 0.0f;
                         static int counter = 0;
                         ImGuiIO &io = ImGui::GetIO();

                         //  ImGui::Begin("Hello, world!"); // Create a window called "Hello, world!" and append into it.

                         // 中文乱码
                         ImGui::Text("中文测试.");                               // Display some text (you can use a format strings too)
                         ImGui::Checkbox("Demo Window", &mod->show_demo_window); // Edit bools storing our window open/close state
                         ImGui::Checkbox("Another Window", &mod->show_another_window);

                         ImGui::SliderFloat("float", &f, 0.0f, 1.0f);                  // Edit 1 float using a slider from 0.0f to 1.0f
                         ImGui::ColorEdit3("clear color", (float *)&mod->clear_color); // Edit 3 floats representing a color

                         if (ImGui::Button("Button")) // Buttons return true when clicked (most widgets return true when edited/activated)
                             counter++;
                         ImGui::SameLine();
                         ImGui::Text("counter = %d", counter);

                         ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / io.Framerate, io.Framerate);
                         //  ImGui::End();

                         if (mod->show_another_window)
                         {
                             ImGui::Begin("Another Window", &mod->show_another_window); // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
                             ImGui::Text("Hello from another window!");
                             if (ImGui::Button("Close Me"))
                                 mod->show_another_window = false;
                             ImGui::End();
                         }

                         if (mod->show_demo_window)
                         {
                             ImGui::ShowDemoWindow(&mod->show_demo_window);
                         }

                         // ...
                     });
    }

    void SetImguiStyle()
    {
        ImGuiIO &io = ImGui::GetIO();
        (void)io;
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard; // Enable Keyboard Controls
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;  // Enable Gamepad Controls
        ImGui::StyleColorsDark();

        // Load Fonts
        // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them.
        // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple.
        // - If the file cannot be loaded, the function will return a nullptr. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
        // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
        // - Use '#define IMGUI_ENABLE_FREETYPE' in your imconfig file to use Freetype for higher quality font rendering.
        // - Read 'docs/FONTS.md' for more instructions and details.
        // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
        // io.Fonts->AddFontDefault();
        // io.Fonts->AddFontFromFileTTF("c:\\Windows\\Fonts\\simsun.ttf", 16.0f, nullptr, io.Fonts->GetGlyphRangesChineseSimplifiedCommon());
        // io.Fonts->AddFontFromFileTTF("../../misc/fonts/DroidSans.ttf", 16.0f);
        // io.Fonts->AddFontFromFileTTF("../../misc/fonts/Roboto-Medium.ttf", 16.0f);
        // io.Fonts->AddFontFromFileTTF("../../misc/fonts/Cousine-Regular.ttf", 15.0f);
        // ImFont* font = io.Fonts->AddFontFromFileTTF("c:\\Windows\\Fonts\\ArialUni.ttf", 18.0f, nullptr, io.Fonts->GetGlyphRangesJapanese());
        // IM_ASSERT(font != nullptr);
        // 引入宋体
        // io.Fonts->AddFontFromFileTTF("c:\\Windows\\Fonts\\simsun.ttc", 16.0f, nullptr, io.Fonts->GetGlyphRangesChineseSimplifiedCommon());
    }
};

#define MY_AWESOME_MOD_API __declspec(dllexport)
extern "C"
{
    MY_AWESOME_MOD_API RC::CppUserModBase *start_mod()
    {
        return new UnrealTrainer();
    }

    MY_AWESOME_MOD_API void uninstall_mod(RC::CppUserModBase *mod)
    {
        delete mod;
    }
}