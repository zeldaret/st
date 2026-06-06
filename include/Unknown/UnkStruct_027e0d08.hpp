#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_027e0d08 : public AutoInstance<UnkStruct_027e0d08> {
public:
    /* 00 */ void *mUnk_00;
    /* 04 */ void *mUnk_04;
    /* 08 */ void *mUnk_08;
    /* 0C */ void *mUnk_0C;
    /* 10 */ void *mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */

    UnkStruct_027e0d08();
    ~UnkStruct_027e0d08();

    void func_ov024_020d5d10(unk32 param1);
    void func_ov024_020d5d18(unk32 param1);
    void func_ov024_020d5d34(unk32 param1);
    void func_ov024_020d5d54();
    void func_ov024_020d5dd4(unk32 param1);
    void func_ov024_020d5e20();
    void func_ov024_020d5fac();
    void func_ov024_020d5fe4(void *param1, void *param2, unk32 param3);

    static UnkStruct_027e0d08 *Create();
    static void func_ov024_020d5fb8(void *param1, void *param2, unk32 param3);
};

extern UnkStruct_027e0d08 *data_027e0d08;
