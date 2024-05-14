#include "hook.h"

/**
 *
 *  .text:0000000141E09180
    .text:0000000141E09180                                     ; =============== S U B R O U T I N E =======================================
    .text:0000000141E09180
    .text:0000000141E09180
    .text:0000000141E09180                                     ; void *__fastcall void::operator=(void *this, const void *__that)
    .text:0000000141E09180                                     ?4void@@QEAAAEAU0@AEBU0@@Z proc near
    .text:0000000141E09180                                                                             ; CODE XREF: UFNGameBase::execGetRPGAttributeBaseByID(UObject *,FFrame &,void * const)+BA↓p
    .text:0000000141E09180                                                                             ; UScriptStruct::TCppStructOps<void>::Copy(void *,void const *,int)+2E↓p ...
    .text:0000000141E09180
    .text:0000000141E09180                                     var_38          = TArray<FBagBase,TSizedDefaultAllocator<32> > ptr -38h
    .text:0000000141E09180                                     arg_0           = qword ptr  8
    .text:0000000141E09180                                     arg_8           = qword ptr  10h
    .text:0000000141E09180                                     arg_10          = qword ptr  18h
    .text:0000000141E09180                                     arg_18          = qword ptr  20h
    .text:0000000141E09180
    .text:0000000141E09180                                     this = rcx
    .text:0000000141E09180                                     __that = rdx
    .text:0000000141E09180 48 89 5C 24 08                                      mov     [rsp+arg_0], rbx
    .text:0000000141E09185 48 89 6C 24 10                                      mov     [rsp+arg_8], rbp
    .text:0000000141E0918A 48 89 74 24 18                                      mov     [rsp+arg_10], rsi
    .text:0000000141E0918F 48 89 7C 24 20                                      mov     [rsp+arg_18], rdi
    .text:0000000141E09194 41 54                                               push    r12
    .text:0000000141E09196 41 56                                               push    r14
    .text:0000000141E09198 41 57                                               push    r15
    .text:0000000141E0919A 48 83 EC 40                                         sub     rsp, 40h
    .text:0000000141E0919E 8B 42 08                                            mov     eax, [__that+8]
    .text:0000000141E091A1 48 8B DA                                            mov     rbx, __that
    .text:0000000141E091A4 89 41 08                                            mov     [this+8], eax
    .text:0000000141E091A7 48 8B E9                                            mov     rbp, this
*/

FRPGAttributeBase MyFNGameBase;

void *(*originalFunction)(void *, const void *);

void *hookFunction(void *this_, const void *that)
{
    MyFNGameBase = *(FRPGAttributeBase *)that;
    MyFNGameBase.BigWorldInsightSize = (int32 *)((uintptr_t)that + 0xC);
    MyFNGameBase.CoordinatePositon = (void *)((uintptr_t)that + 0x10);
    MyFNGameBase.PlayerBag = (void *)((uintptr_t)that + 0x728);
    MyFNGameBase.LingShi = (int64 *)((uintptr_t)that + 0x818);
    MyFNGameBase.SkyGold = (int64 *)((uintptr_t)that + 0x820);
    MyFNGameBase.ZongMenFamePoint = (int64 *)((uintptr_t)that + 0x828);
    MyFNGameBase.AvailableZongMenJobSalary = (int64 *)((uintptr_t)that + 0x830);

    return originalFunction(this_, that);
}

void *init_hook()
{
    auto pattern = hook::pattern("48 ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? 48 83 EC 40 8B 42 08");

    if (pattern.count_hint(1).empty())
    {
        printf("Failed to find pattern\n");
        return nullptr;
    }

    auto func_addr = pattern.get_first(0);

    if (MH_CreateHook(func_addr, &hookFunction, (LPVOID *)&originalFunction) != MH_OK)
    {
        printf("Failed to create hook\n");
        return nullptr;
    }
    if (MH_EnableHook(func_addr) != MH_OK)
    {
        printf("Failed to enable hook\n");
        return nullptr;
    }

    printf("[hook] hook in : %p\n", func_addr);

    return originalFunction;
}
