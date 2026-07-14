#pragma once

#include "global.h"
#include "types.h"

#include <nitro/mi.h>

class UnkStruct_027e0d08 : public AutoInstance<UnkStruct_027e0d08> {
public:
    /* 00 */ void *mUnk_00;
    /* 04 */ s16 *mUnk_04;
    /* 08 */ s16 *mUnk_08;
    /* 0C */ s16 *mUnk_0C;
    /* 10 */ s16 *mUnk_10;
    /* 14 */ u32 mUnk_14;
    /* 18 */ u32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */

    void ResetBuffers() {
        MI_CpuClearFast(this->mUnk_00, 0x800);
        MI_CpuClearFast(this->mUnk_04, 0x2000);
        MI_CpuClearFast(this->mUnk_08, 0x2000);
        MI_CpuClearFast(this->mUnk_0C, 0x10);
        MI_CpuClearFast(this->mUnk_10, 0x10);
    }

    UnkStruct_027e0d08();
    ~UnkStruct_027e0d08();

    // overlay 1
    static void Destroy();

    // overlay 24
    void func_ov024_020d5d10(unk32 param1);
    void func_ov024_020d5d18(unk32 param1);
    void func_ov024_020d5d34(unk32 param1);
    void func_ov024_020d5d54();
    void func_ov024_020d5dd4(unk32 param1);
    void func_ov024_020d5e20();
    void func_ov024_020d5fac();
    void func_ov024_020d5fe4(s16 *param1, s16 *param2, u32 param3);

    static UnkStruct_027e0d08 *Create();
    static void func_ov024_020d5fb8(s16 *param1, s16 *param2, u32 param3);
};

extern UnkStruct_027e0d08 *data_027e0d08;
