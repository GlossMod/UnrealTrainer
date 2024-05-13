#include <stdio.h>
#include <string>

#include <Mod/CppUserModBase.hpp>
#include <UE4SSProgram.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObject.hpp>
#include <DynamicOutput/DynamicOutput.hpp>

#include <Unreal/ReflectedFunction.hpp>
#include <Unreal/GameplayStatics.hpp>
#include <Unreal/Hooks.hpp>
#include <Unreal/World.hpp>
#include <Input/Handler.hpp>

#include <Windows.h>

#include "MainWindow.h"

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

    bool show_main_window = false;

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
            show_main_window = !show_main_window;
            Output::send<LogLevel::Verbose>(STR("HOME key pressed\n"));
            // 延迟 100ms
            Sleep(500);
        }
    }

    auto on_unreal_init() -> void override
    {
        WindowInit();
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