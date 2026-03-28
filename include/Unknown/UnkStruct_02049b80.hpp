#pragma once

#include "types.h"

class UnkStruct_02049b80 {
public:
    /* 00*/ unk32 mUnk_00;
    /* 04*/ unk32 mUnk_04;
    /* 08*/ void *mUnk_08;
    /* 0C */ unk32 mUnk_0C[2];
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk16 mUnk_1C[2];

    UnkStruct_02049b80();
    void func_02013ecc(unk32 param1, UnkCallback param2, unk32 param3);
    void func_02013ee8(unk32 param1, unk32 param2);
};

extern UnkStruct_02049b80 data_02049b80;
