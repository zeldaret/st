#pragma once

#include "Item/Item.hpp"
#include "types.h"

class UnkStruct_ov000_02067bc4_Sub1 {
public:
    unk32 func_02022128(void);
};

class UnkStruct_ov000_02067bc4_Sub2 {
public:
    unk8 mUnk_00[0x10];
    unk32 mUnk_10;
    unk8 mUnk_14[0x40];
    unk32 mUnk_54;
};

class UnkStruct_ov000_02067bc4 {
public:
    class UnkStruct1 {
    public:
        unk16 mUnk_00;
        unk16 mUnk_02;
        unk32 mUnk_04;
        unk32 mUnk_08;
        unk8 mUnk_0C;
        unk8 mUnk_0D;
        unk8 mUnk_0E;
        unk8 mUnk_0F;

        UnkStruct1(unk32 param1) {
            mUnk_00 = 0;
            mUnk_08 = -1;
            mUnk_0C = 0;
            mUnk_0D = 0;
            mUnk_04 = 0;
        }

        UnkStruct1() {
            mUnk_00 = 0;
            mUnk_08 = -1;
            mUnk_0C = 0;
            mUnk_0D = 0;
            mUnk_04 = 0;
        }
    };

public:
    /* 000 (vtable) */
    /* 004 */ unk32 mUnk_004;
    /* 004 */ UnkStruct_ov000_02067bc4_Sub2 *mUnk_008;
    /* 004 */ unk8 mUnk_00C[0x30 - 0x00C];
    /* 030 */ unk32 mUnk_030;
    /* 034 */ unk8 mUnk_034[0x160 - 0x034];
    /* 160 */ UnkStruct_ov000_02067bc4_Sub1 mUnk_160;

    /* 00 */ virtual unk32 vfunc_00();
    /* 04 */ virtual unk32 vfunc_04();
    /* 08 */ virtual unk32 vfunc_08();

    void func_02021bec(unk16 param1);
    void func_02021c08();
    void func_02021c2c();

    UnkStruct_ov000_02067bc4 *func_ov000_02067bc4(unk32);
    unk8 func_ov000_02067cf8(unk32 param1, unk32 param2, UnkStruct1 *param3);
    void *func_ov000_02067bb4(unk32 param1);
    void func_ov000_02067e60(u8 param1, unk32 param2);
    void func_ov000_0206807c(unk32 param1, void *param2, unk32 param3, unk32 param4);
    void func_ov000_0206807c(unk32 param1, void *param2, unk32 param3);
    void func_ov000_0206807c(unk32 param1, void *param2);
    void func_ov000_0206807c(void *param1, void *param2);
    void func_ov000_0206807c(void *param1, unk32 param2);
    unk32 func_ov000_020682c0(unk32 param1);

    void func_ov001_020be668(void);
    void func_ov001_020be6f4(void);
};

extern UnkStruct_ov000_02067bc4 data_ov000_020b504c;
