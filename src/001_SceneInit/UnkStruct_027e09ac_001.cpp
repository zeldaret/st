#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09ac.hpp"
#include "Unknown/UnkStruct_027e09b0.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"

#include <nitro/g3.h>
#include <nitro/gx.h>
#include <nitro/mi.h>

extern "C" void func_ov000_02072344(u16 *, UnkStruct_027e09ac_14 *);
extern "C" void func_02024df0(u16 *);

UnkStruct_027e09ac *UnkStruct_027e09ac::Create() {
    return new(HeapIndex_1) UnkStruct_027e09ac();
}

UnkStruct_027e09ac::UnkStruct_027e09ac() {
    this->mUnk_14C = 0;
    this->mUnk_14E = 0;
    this->mUnk_150 = -1;
    this->mUnk_154 = 0;
    this->mUnk_156 = false;
    this->mUnk_014.func_ov000_02071f98();
    this->mUnk_0E4.func_ov000_02071f98();

    UnkStruct_027e09b0::Create();
    UnkStruct_027e09b4::Create();

    G3X_Unk1(1);

    u16 auStack_50[32];
    func_ov000_02072344(auStack_50, &this->mUnk_014);
    func_02024df0(auStack_50);

    if (data_027e09bc != NULL && data_027e09bc != NULL) {
        UnkStruct_027e09a8::Create();
    }

    MI_CpuFill16(0x190A, &this->mUnk_000.mUnk_04, sizeof(this->mUnk_000.mUnk_04));
}

UnkStruct_027e09ac::~UnkStruct_027e09ac() {
    UnkStruct_027e09a8::Destroy();
    UnkStruct_027e09b4::Destroy();
    UnkStruct_027e09b0::Destroy();
    G3X_Unk2(1);
}

void UnkStruct_027e09ac::func_ov001_020bebb8() {
    UnkStruct_StackTitleScreen auStack_28("Environment/tex.bin", 0x01);
    auStack_28.func_ov000_02059270(0x00, "shadow", 0x192F0000);
    auStack_28.func_ov000_02059270(0x01, "shadow2", 0x192F0000);
    auStack_28.func_ov000_02059270(0x02, "wipeA", 0x39BF0000);

    switch ((s32) data_027e09a4->CurrentSceneIndex()) {
        case SceneIndex_d_main:
        case SceneIndex_f_flame4:
        case SceneIndex_f_kakushi1:
        case SceneIndex_f_kakushi4:
            auStack_28.func_ov000_02059270(0x03, "light", 0x25BF0000);
            break;
        default:
            break;
    }

    if (data_027e09a4->IsLand()) {
        auStack_28.func_ov000_02059270(0x04, "srod_tex", 0x389F0000);
    }

    this->func_ov000_02072b08(0x00, 0x00);
    data_027e09a8->func_ov000_020713bc();
    data_027e09b4->func_ov001_020bea84();
}

void UnkStruct_027e09ac::func_ov001_020bec8c() {}

void UnkStruct_027e09a8::Destroy() {
    if (data_027e09a8 != NULL) {
        delete data_027e09a8;
    }
}

void UnkStruct_027e09b4::Destroy() {
    if (data_027e09b4 != NULL) {
        delete data_027e09b4;
    }
}

void UnkStruct_027e09b0::Destroy() {
    if (data_027e09b0 != NULL) {
        delete data_027e09b0;
    }
}

DECL_INSTANCE(UnkStruct_027e09ac, data_027e09ac);
DECL_INSTANCE_DTOR(UnkStruct_027e09a8, data_027e09a8);
