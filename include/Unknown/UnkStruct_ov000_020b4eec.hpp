#pragma once

#include "Save/SaveFile.hpp"
#include "types.h"

class UnkStruct_ov000_020b4eec {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk8 mUnk_04[0x80];
    /* 84 */

    UnkStruct_ov000_020b4eec();

    GameSaveSlot *func_ov001_020be12c();
};

extern UnkStruct_ov000_020b4eec data_ov000_020b4eec;
