#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_ov000_020b5214_04 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ unk8 mUnk_06;
    /* 07 */ unk8 mUnk_07;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    UnkStruct_ov000_020b5214_04() {
        this->mUnk_00 = 0;
        this->mUnk_04 = 0;
        this->mUnk_06 = 0;
        this->mUnk_07 = 0;
    }
};

struct UnkStruct_ov000_020b5214_70 {
    /* 00 */ unk16 mUnk_00;
    /* 02 */ unk16 mUnk_02;
    /* 04 */
};

class UnkStruct_ov000_020b5214 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ UnkStruct_ov000_020b5214_04 mUnk_04[8];
    /* 64 */ unk16 mUnk_64;
    /* 66 */ unk8 mUnk_66;
    /* 67 */ unk8 mUnk_67;
    /* 68 */ unk32 mUnk_68;
    /* 6C */ unk32 mUnk_6C;
    /* 70 */ UnkStruct_ov000_020b5214_70 mUnk_70[8];
    /* 90 */ unk32 mUnk_90;
    /* 94 */ unk8 mUnk_94;
    /* 95 */ unk8 mUnk_95;
    /* 96 */ unk8 mUnk_96;
    /* 97 */ unk8 mUnk_97;
    /* 98 */ unk32 mUnk_98;

    UnkStruct_ov000_020b5214();

    void func_ov000_0206d6b4(unk32 param1, unk32 param2);
    void func_ov000_0206d83c(unk32 param1);
    void func_ov000_0206db44(unk32 param1);
};

extern UnkStruct_ov000_020b5214 data_ov000_020b5214;
