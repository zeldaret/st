#pragma once

#include "Player/TouchControl.hpp"
#include "global.h"
#include "input.hpp"
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
    /* 28 */ u16 mUnk_28;
    /* 2A */ u16 mUnk_2A;
    /* 2C */ PAD(0x2C, 0x58);
    /* 58 */ unk16 mUnk_58;
    /* 5A */ unk16 mUnk_5A;

    UnkStruct_02049b18();
    ~UnkStruct_02049b18();
    void func_02013768();
    TouchState *func_020137c8(unk32 param1);
    void func_02013840(u16 param1, unk32 param2);
    void func_020138f4(unk32 param1);
};

extern UnkStruct_02049b18 data_02049b18;
