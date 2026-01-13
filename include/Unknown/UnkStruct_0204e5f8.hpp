#pragma once

#include "Game/GameModeManager.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_0204e5f8_1C_Base {
public:
    /* 20 */ GameModeManagerBase_104_04 mUnk_20;
    /* 28 */ unk32 mUnk_28;

    UnkStruct_0204e5f8_1C_Base() :
        mUnk_28(0) {}
};

class UnkStruct_0204e5f8_1C : UnkStruct_0204e5f8_1C_Base {
public:
    /* 00 (vtable) */
    /* 04 */

    // data_020440e8 vtable
    /* 00 */ virtual ~UnkStruct_0204e5f8_1C();
};

class UnkStruct_0204e5f8 {
public:
    /* 00 */ UnkStruct_0204a060_Base3 mUnk_00;
    /* 14 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk8 mUnk_18;
    /* 19 */ unk8 mUnk_19;
    /* 1A */ unk8 mUnk_1A;
    /* 1B */ unk8 mUnk_1B;
    /* 1C */ UnkStruct_0204e5f8_1C mUnk_1C;
    /* 2C */ STRUCT_PAD(0x2C, 0x38);
    /* 38 */ unk8 mUnk_38;
    /* 39 */ unk8 mUnk_39;

    UnkStruct_0204e5f8();
    void func_0201b9a8(void *param1);
};

extern UnkStruct_0204e5f8 data_0204e5f8;
