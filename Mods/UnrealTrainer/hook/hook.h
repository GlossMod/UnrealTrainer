#pragma once
#include "MinHook.h"
#include <d3d11.h>
#include "Hooking.Patterns.h"
#include "../struct/FNGameX.hpp"

void *init_hook();

void *FNGameBase = nullptr;