#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0d08.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"

#include <nitro/mi.h>

extern "C" void func_0200174c();

UnkStruct_027e0d08::UnkStruct_027e0d08() {
    this->mUnk_00 = NULL;
    this->mUnk_04 = NULL;
    this->mUnk_08 = NULL;
    this->mUnk_0C = NULL;
    this->mUnk_10 = NULL;
    this->mUnk_14 = 0;
    this->mUnk_18 = 0;
    this->mUnk_1C = 0;
    this->mUnk_20 = 0;
    this->mUnk_24 = 0;
    this->mUnk_28 = 0;
}

UnkStruct_027e0d08::~UnkStruct_027e0d08() {
    this->func_ov024_020d5fac();
}

UnkStruct_027e0d08 *UnkStruct_027e0d08::Create() {
    return new(HeapIndex_1) UnkStruct_027e0d08();
}

void UnkStruct_027e0d08::func_ov024_020d5d10(unk32 param1) {
    this->mUnk_18 = param1;
}

void UnkStruct_027e0d08::func_ov024_020d5d18(unk32 param1) {
    this->mUnk_1C = param1;
    this->mUnk_24 = this->mUnk_20 / param1;
}

void UnkStruct_027e0d08::func_ov024_020d5d34(unk32 param1) {
    this->mUnk_20 = param1;
    this->mUnk_24 = param1 / this->mUnk_1C;
}

void UnkStruct_027e0d08::func_ov024_020d5d54() {
    if (data_ov000_020b50c0.func_ov000_0206a5cc(4)) {
        MI_CpuClearFast(this->mUnk_00, 0x800);
        MI_CpuClearFast(this->mUnk_04, 0x2000);
        MI_CpuClearFast(this->mUnk_08, 0x2000);
        MI_CpuClearFast(this->mUnk_0C, 0x10);
        MI_CpuClearFast(this->mUnk_10, 0x10);
    }
}

void UnkStruct_027e0d08::func_ov024_020d5dd4(unk32 param1) {
    data_ov000_020b50c0.func_ov000_0206a5fc();
    this->mUnk_00 = data_ov000_020b50c0.mUnk_CC;
    this->mUnk_04 = data_ov000_020b50c0.mUnk_D4;
    this->mUnk_08 = data_ov000_020b50c0.mUnk_D8;
    this->mUnk_0C = data_ov000_020b50c0.mUnk_DC;
    this->mUnk_10 = data_ov000_020b50c0.mUnk_E0;
    this->mUnk_28 = param1;
}

void UnkStruct_027e0d08::func_ov024_020d5e20() {}

void UnkStruct_027e0d08::func_ov024_020d5fac() {
    func_0200174c();
}

void UnkStruct_027e0d08::func_ov024_020d5fb8(void *param1, void *param2, unk32 param3) {
    data_027e0d08->func_ov024_020d5fe4(param1, param2, param3);
}

void UnkStruct_027e0d08::func_ov024_020d5fe4(void *param1, void *param2, unk32 param3) {}

DECL_INSTANCE(UnkStruct_027e0d08, data_027e0d08);
