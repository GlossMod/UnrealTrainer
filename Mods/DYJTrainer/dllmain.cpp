#include <stdio.h>
#include <Mod/CppUserModBase.hpp>

#include "GUI/MainWindow.h"

using namespace RC;
using namespace RC::Unreal;

class DYJTrainer : public CppUserModBase
{
private:
public:
    DYJTrainer() : CppUserModBase()
    {
        ModName = STR("DYJTrainer");
        ModVersion = STR("1.0");
        ModDescription = STR("DYJTrainer");
        ModAuthors = STR("小莫");
    }

    ~DYJTrainer() override
    {
    }

    auto on_update() -> void override
    {
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
        return new DYJTrainer();
    }

    MY_AWESOME_MOD_API void uninstall_mod(RC::CppUserModBase *mod)
    {
        delete mod;
    }
}