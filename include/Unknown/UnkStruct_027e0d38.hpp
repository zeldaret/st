#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_027e0d38 : public AutoInstance<UnkStruct_027e0d38> {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_027e0d38();

    // overlay 31
    bool func_ov031_020d9bec();
    bool func_ov031_020d9c04(unk32 param1, unk32 param2, unk32 param3);
    void func_ov031_020d9c44(unk32 param1);

    // overlay 101
    static void Destroy();
};

extern UnkStruct_027e0d38 *data_027e0d38;
