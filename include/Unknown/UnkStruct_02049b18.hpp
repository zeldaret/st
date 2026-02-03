#pragma once

#include "Player/TouchControl.hpp"
#include "global.h"
#include "nitro/button.h"
#include "types.h"

class UnkStruct_02049b18_06 {
public:
    /* 00 */ TouchControl mTouchControl;
    /* 22 */

    UnkStruct_02049b18_06();
};

class UnkStruct_02049b18 {
public:
    /* 00 */ Input mButtons;
    /* 06 */ UnkStruct_02049b18_06 mUnk_06;
    /* 28 */ unk16 mUnk_28;
    /* 2A */ STRUCT_PAD(0x2A, 0x58);
    /* 58 */ unk16 mUnk_58;
    /* 5A */ unk16 mUnk_5A;

    UnkStruct_02049b18();
    ~UnkStruct_02049b18();
};

extern UnkStruct_02049b18 data_02049b18;
