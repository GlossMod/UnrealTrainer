#include <stdio.h>
#include <Mod/CppUserModBase.hpp>
#include <UE4SSProgram.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObject.hpp>
#include <DynamicOutput/DynamicOutput.hpp>

using namespace RC;
using namespace RC::Unreal;

class UnrealTrainer : public RC::CppUserModBase
{
private:
    int m_private_number{33};
    std::shared_ptr<GUI::GUITab> m_less_safe_tab{};
    bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

public:
    UnrealTrainer() : CppUserModBase()
    {
        ModName = STR("UnrealTrainer");
        ModVersion = STR("1.0");
        ModDescription = STR("Unreal Trainer");
        ModAuthors = STR("小莫");

        // 在创建选项卡之前启用 ImGui 至关重要。
        // 如果您不这样做，一旦 ImGui 尝试在选项卡中渲染任何内容，就会发生崩溃。
        UE4SS_ENABLE_IMGUI()

        Output::send<LogLevel::Verbose>(STR("UnrealTrainer says hello\n"));

        // 'register_tab' 函数将告诉 UE4SS 渲染一个选项卡。
        // 当这个 C++ mod 被卸载时，以这种方式注册的选项卡将被自动清理。
        // 第一个参数是选项卡的显示名称。
        // 第二个参数是 UE4SS 将用来渲染选项卡内容的回调。
        // 回调的参数是指向你的 mod 的指针。
        register_tab(STR("My Test Tab"), [](CppUserModBase *instance)
                     {
                        //  // 在此回调中，您可以开始使用 ImGui 渲染选项卡的内容。
                        //  ImGui::Text("This is the contents of the tab");

                        // 您可以使用 'instance' 参数访问 mod 类的成员。
                        auto mod = dynamic_cast<UnrealTrainer *>(instance);
                        //  if (!mod)
                        //  {
                        //      // 出现问题导致“实例”设置不正确。
                        //      // 让我们中止函数的其余部分，这样您就不会访问无效的指针。
                        //      Output::send<LogLevel::Error>(STR("Failed to cast instance to UnrealTrainer\n"));
                        //      return;
                        //  }

                        //  // 您可以访问公共和私有成员。
                        //  mod->render_some_stuff(mod->m_private_number);

                        static float f = 0.0f;
                        static int counter = 0;

                        ImGui::Begin("Hello, world!"); // Create a window called "Hello, world!" and append into it.

                        ImGui::Text("This is some useful text.");               // Display some text (you can use a format strings too)
                        ImGui::Checkbox("Demo Window", &mod->show_demo_window); // Edit bools storing our window open/close state
                        ImGui::Checkbox("Another Window", &mod->show_another_window);

                        ImGui::SliderFloat("float", &f, 0.0f, 1.0f);                  // Edit 1 float using a slider from 0.0f to 1.0f
                        ImGui::ColorEdit3("clear color", (float *)&mod->clear_color); // Edit 3 floats representing a color

                        if (ImGui::Button("Button")) // Buttons return true when clicked (most widgets return true when edited/activated)
                            counter++;
                        ImGui::SameLine();
                        ImGui::Text("counter = %d", counter);

                        // ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / io.Framerate, io.Framerate);
                        ImGui::End();

                        Output::send<LogLevel::Verbose>(STR("UnrealTrainer: in ImGui Fun\n")); });
    }

    ~UnrealTrainer() override
    {
    }

    auto on_unreal_init() -> void override
    {
        auto Object = UObjectGlobals::StaticFindObject<UObject *>(nullptr, nullptr, STR("/Script/CoreUObject.Object"));
        Output::send<LogLevel::Verbose>(STR("Object Name: {}\n"), Object->GetFullName());
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
