#pragma once
#include <main.h>
#include "../hook/hook.h"
#include "styles.hpp"

typedef HRESULT(__stdcall *Present)(IDXGISwapChain *pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK *WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;

void WindowInit();
