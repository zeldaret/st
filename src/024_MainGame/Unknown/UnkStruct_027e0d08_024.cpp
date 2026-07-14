#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0d08.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"

#include <nitro/dc.h>
#include <nitro/snd.h>

extern "C" BOOL func_0200169c(void *, int, int, int, int, void *, int);
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
        this->ResetBuffers();
    }
}

void UnkStruct_027e0d08::func_ov024_020d5dd4(unk32 param1) {
    data_ov000_020b50c0.func_ov000_0206a5fc();
    this->mUnk_00 = data_ov000_020b50c0.mUnk_CC;
    this->mUnk_04 = (s16 *) data_ov000_020b50c0.mUnk_D4;
    this->mUnk_08 = (s16 *) data_ov000_020b50c0.mUnk_D8;
    this->mUnk_0C = (s16 *) data_ov000_020b50c0.mUnk_DC;
    this->mUnk_10 = (s16 *) data_ov000_020b50c0.mUnk_E0;
    this->mUnk_28 = param1;
}

void UnkStruct_027e0d08::func_ov024_020d5e20() {
    if (!data_ov000_020b50c0.func_ov000_0206a5cc(0x04)) {
        return;
    }

    data_ov000_020b50c0.func_ov000_0206a740();
    this->mUnk_14 = 0;

    switch (this->mUnk_28) {
        case 0:
            this->func_ov024_020d5d10(0xC4E);
            this->func_ov024_020d5d18(0x06);
            this->func_ov024_020d5d34(0x1C0);
            break;
        case 4:
        default:
            this->func_ov024_020d5d10(0xF6E);
            this->func_ov024_020d5d18(0x04);
            this->func_ov024_020d5d34(0x1F4);
            break;
    }

    this->ResetBuffers();

    if (func_0200169c(this->mUnk_00, 0x800, 0, 0x3FEC, 0x04, UnkStruct_027e0d08::func_ov024_020d5fb8, 0)) {
        SND_func_0013(0, 0, 0, 0);
        MI_CpuClearFast(this->mUnk_04, 0x2000);
        MI_CpuClearFast(this->mUnk_08, 0x2000);
        MI_CpuFill32(0, this->mUnk_0C, 0x10);
        MI_CpuFill32(0, this->mUnk_10, 0x10);
    }
}

void UnkStruct_027e0d08::func_ov024_020d5fac() {
    func_0200174c();
}

void UnkStruct_027e0d08::func_ov024_020d5fb8(s16 *param1, s16 *param2, u32 param3) {
    data_027e0d08->func_ov024_020d5fe4(param1, param2, param3);
}

void UnkStruct_027e0d08::func_ov024_020d5fe4(s16 *param1, s16 *param2, u32 param3) {
    s32 var_ip;
    s32 var_r3;
    u32 spC;
    u32 temp_r1;
    s16 *var_r5_2;
    s16 *var_r7;
    s32 temp_r5;
    u32 temp_r6_2;
    u32 temp_r7_3;
    s32 var_r8_2;

    spC     = param3 / 2;
    temp_r1 = this->mUnk_14;
    var_ip  = 0;
    var_r3  = 0;

    s16 *var_r2 = &this->mUnk_0C[8] - this->mUnk_1C;
    s16 *var_r5 = &this->mUnk_10[8] - this->mUnk_1C;
    for (int var_r6 = 0; var_r6 < this->mUnk_1C; var_r2++, var_r5++, var_r6++) {
        var_ip += *var_r2;
        var_r3 += *var_r5;
    }

    s16 *new_var;
    s16 *var_r9_2;
    s16 *var_r10;
    s16 *var_r6_2 = &this->mUnk_04[temp_r1];
    s16 *var_r8   = &this->mUnk_08[temp_r1];
    s16 *temp_lr  = &this->mUnk_04[0x1000];
    var_r5_2      = param1;
    var_r7        = param2;

    var_r9_2 = &this->mUnk_0C[8] - this->mUnk_1C;
    var_r10  = &this->mUnk_10[8] - this->mUnk_1C;
    for (int var_r1 = 0; var_r1 < this->mUnk_1C; var_r1++) {
        var_ip  = var_ip + *var_r5_2++ - *var_r9_2++;
        new_var = var_r6_2++;
        var_r3  = var_r3 + *var_r7++ - *var_r10++;

        *new_var  = (var_ip * this->mUnk_24) / 1024;
        *var_r8++ = (var_r3 * this->mUnk_24) / 1024;

        if (var_r6_2 >= temp_lr) {
            var_r6_2 -= 0x1000;
            var_r8 -= 0x1000;
        }
    }

    var_r9_2 = param1;
    var_r10  = param2;
    for (int var_r0 = this->mUnk_1C; var_r0 < spC; var_r0++) {
        var_ip  = var_ip + *var_r5_2++ - *var_r9_2++;
        new_var = var_r6_2++;
        var_r3  = var_r3 + *var_r7++ - *var_r10++;

        *new_var  = (var_ip * this->mUnk_24) / 1024;
        *var_r8++ = (var_r3 * this->mUnk_24) / 1024;

        if (var_r6_2 >= temp_lr) {
            var_r6_2 -= 0x1000;
            var_r8 -= 0x1000;
        }
    }

    MI_CpuCopy32(&param1[spC - 8], this->mUnk_0C, 0x10);
    MI_CpuCopy32(&param2[spC - 8], this->mUnk_10, 0x10);

    var_r8_2 = this->mUnk_14 - this->mUnk_18;
    if (var_r8_2 < 0) {
        var_r8_2 += 0x1000;
    }

    if ((var_r8_2 + spC) < 0x1000) {
        MI_CpuCopyFast(&this->mUnk_04[var_r8_2], param1, param3);
        MI_CpuCopyFast(&this->mUnk_08[var_r8_2], param2, param3);
    } else {
        temp_r5   = 0x1000 - var_r8_2;
        temp_r7_3 = temp_r5 * sizeof(u16);
        temp_r6_2 = (var_r8_2 + spC - 0x1000) * sizeof(u16);

        MI_CpuCopyFast(&this->mUnk_04[var_r8_2], param1, temp_r7_3);
        MI_CpuCopyFast(&this->mUnk_08[var_r8_2], param2, temp_r7_3);
        MI_CpuCopyFast(this->mUnk_04, &param1[temp_r5], temp_r6_2);
        MI_CpuCopyFast(this->mUnk_08, &param2[temp_r5], temp_r6_2);
    }

    this->mUnk_14 += spC;
    if (this->mUnk_14 >= 0x1000) {
        this->mUnk_14 -= 0x1000;
    }

    DC_func_0004(param1, param3);
    DC_func_0004(param2, param3);
}

DECL_INSTANCE(UnkStruct_027e0d08, data_027e0d08);
