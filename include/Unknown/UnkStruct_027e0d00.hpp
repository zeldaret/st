#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_027e0d00 : public AutoInstance<UnkStruct_027e0d00> {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_027e0d00();
    ~UnkStruct_027e0d00();

    void func_ov024_020d4cc0(unk32 type);
    void func_ov024_020d4d10();

    static UnkStruct_027e0d00 *func_ov000_0205c944();
};

extern UnkStruct_027e0d00 *data_027e0d00;
