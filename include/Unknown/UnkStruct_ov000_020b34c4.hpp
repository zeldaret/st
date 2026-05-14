#pragma once

#include "types.h"

//! TODO: this is probably all fake to match func_01fff520

typedef bool (**UnkStruct_ov000_020b34c4_Callback)(void *, void *);

class UnkStruct_ov000_020b34c4 {
public:
    /* 08 */ unk32 mUnk_08;
    /* 08 */ unk32 mUnk_0C;
    /* 00 */ UnkStruct_ov000_020b34c4_Callback *mUnk_00;
    /* 04 */ unk32 mUnk_04;
};

extern UnkStruct_ov000_020b34c4 data_ov000_020b34c4;
