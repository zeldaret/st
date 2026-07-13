#pragma once

#include "global.h"
#include "math.hpp"
#include "types.h"

class UnkStruct_027e09b4 : public AutoInstance<UnkStruct_027e09b4> {
public:
    /* 000 */ unk32 mUnk_000;
    /* 004 */ STRUCT_PAD(0x04, 0x300);
    /* 300 */ void *mUnk_300;
    /* 304 */ unk32 mUnk_304;
    /* 308 */ unk16 mUnk_308;
    /* 30A */ unk16 mUnk_30A;
    /* 30C */

    UnkStruct_027e09b4();
    ~UnkStruct_027e09b4();

    // main
    void func_01fff60c(VecFx32 *param1, unk32 param2, unk32 param3, u8 param4, unk32 param5, unk32 param6);

    // overlay 1
    void func_ov001_020bea84();

    static UnkStruct_027e09b4 *Create();

    // overlay 17
    void func_ov017_020c08c4(VecFx32 *param1, unk32 param2, unk32 param3, s32 param4, s32 param5, s32 param6);
};

extern UnkStruct_027e09b4 *data_027e09b4;
