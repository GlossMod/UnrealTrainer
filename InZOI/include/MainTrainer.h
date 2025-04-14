#pragma once
#include "main.h"
#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx12.h"

#include "MinHook.h"
#include <d3d12.h>
#include <WinUser.h>
#include <dxgi1_4.h>

#include "kiero.h"

#include "globals.h"
#include "menu.h"
#include "inputhooks.h"
#include "d3d12hook.h"

void InitImGui();
void hookToGame();
