#pragma once

#include "Unknown/UnkStruct_02049b18.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_0204e64c_00 {
public:
    /* 00 (vtable) */
    /* 04 */ unk16 mUnk_04;
    /* 06 */ unk16 mUnk_06;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk8 mUnk_0A;
    /* 0B */ unk8 mUnk_0B;
    /* 0C */ unk8 mUnk_0C;
    /* 0D */ unk8 mUnk_0D;
    /* 0E */ unk8 mUnk_0E;
    /* 0F */ unk8 mUnk_0F;
    /* 10 */

    UnkStruct_0204e64c_00();
    ~UnkStruct_0204e64c_00();

    // data_020443d8 vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
};

class UnkStruct_0204e64c {
public:
    /* 00 */ UnkStruct_0204e64c_00 mUnk_00;
    /* 10 */ UnkStruct_02049b18_00 mUnk_10;
    /* 14 */ unk16 mUnk_14;
    /* 16 */ unk8 mUnk_16;

    UnkStruct_0204e64c();
    ~UnkStruct_0204e64c();
};

extern UnkStruct_0204e64c data_0204e64c;
