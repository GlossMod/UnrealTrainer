
#include "main.h"
#include <UE4SSProgram.hpp>

class InZOI : public RC::CppUserModBase
{
private:
    int m_private_number{33};
    std::shared_ptr<GUI::GUITab> m_less_safe_tab{};
    bool show_demo_window = false;

public:
    InZOI() : CppUserModBase()
    {
        ModName = STR("InZOI");
        ModVersion = STR("1.0");
        ModDescription = STR("This is my awesome mod");
        ModAuthors = STR("UE4SS Team");
        // Do not change this unless you want to target a UE4SS version
        // other than the one you're currently building with somehow.
        // ModIntendedSDKVersion = STR("2.6");

        printf("InZOI says hello\n");
    }

    ~InZOI() override
    {
        // printf("InZOI says goodbye\n");
        d3d12hook::release();
    }

    auto on_update() -> void override
    {
    }
    auto on_unreal_init() -> void override
    {
        // Output::send<LogLevel::Verbose>(STR("InZOI says hello\n"));

        hookToGame();
    }
};

#define MY_AWESOME_MOD_API __declspec(dllexport)
extern "C"
{
    MY_AWESOME_MOD_API RC::CppUserModBase *start_mod()
    {
        return new InZOI();
    }

    MY_AWESOME_MOD_API void uninstall_mod(RC::CppUserModBase *mod)
    {
        delete mod;
    }
}
