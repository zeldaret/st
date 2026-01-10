#pragma once

#include "types.h"

class UnkStruct_0204a110_Sub1 {
public:
    /* 00 */ unk8 mUnk_00[0x0A];
    /* 0A */ u8 mUnk_0A; // bools?
    /* 0B */ u8 mUnk_0B; // bools?

    bool UnkCheck1() {
        bool value = true;

        if (mUnk_0A == 0 && mUnk_0B == 0) {
            value = false;
        }

        return value;
    }
};

class UnkStruct_0204a110 {
public:
    /* 000 */ unk32 mUnk_000;
    /* 004 */ STRUCT_PAD(0x04, 0xDA4);
    /* DA4 */ unk8 mUnk_DA4;
    /* DA5 */ unk8 mUnk_DA5;
    /* DA6 */ unk8 mUnk_DA6;
    /* DA7 */ unk8 mUnk_DA7;
    /* DA8 */ unk8 mUnk_DA8[0xDE8 - 0xDA8];
    /* DE8 */ UnkStruct_0204a110_Sub1 *mUnk_DE8;

    unk32 func_01ff9b50();
    void func_ov001_020bd514(unk32 param1, void *param2, unk32 param3, unk32 param4);
    void func_020195a0(const char *param1, unk32 param2, unk32 param3, unk32 param4);
    void func_0201967c(unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);
    void func_02019538(unk32 param1, unk32 param2);
};

extern UnkStruct_0204a110 data_0204a110;
