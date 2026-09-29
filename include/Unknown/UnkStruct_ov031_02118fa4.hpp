#pragma once

#include "Player/TouchControl.hpp"
#include "global.h"
#include "types.h"

struct UnkStruct_ov031_02118fa4_00 {
    /* 000 (base) */ STRUCT_PAD(0x000, 0x16C);
    /* 16C */ TouchState mUnk_16C;
};

class UnkStruct_ov031_02118fa4 {
public:
    /* 00 */ UnkStruct_ov031_02118fa4_00 mUnk_00;

    UnkStruct_ov031_02118fa4();
    ~UnkStruct_ov031_02118fa4();

    unk32 func_ov009_020b670c(unk32 param1);
};

extern UnkStruct_ov031_02118fa4 *data_ov031_02118fa4;
