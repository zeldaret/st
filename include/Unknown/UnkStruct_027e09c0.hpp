#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_027e09c0 : public AutoInstance<UnkStruct_027e09c0> {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_027e09c0();
    ~UnkStruct_027e09c0();

    // overlay 1
    void func_ov001_020be3c4();
    void func_ov001_020be394();

    static UnkStruct_027e09c0 *Create();
    static void Destroy();
};

extern UnkStruct_027e09c0 *data_027e09c0;
