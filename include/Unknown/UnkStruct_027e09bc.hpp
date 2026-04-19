#pragma once

#include "types.h"

class UnkStruct_027e09bc_0c {
public:
    void func_ov000_02078230(unk32 param1);
    bool func_ov000_0207834c(Vec3p *param1, unk32 param2, unk32 param3);
    bool func_ov000_02078764(Vec3p *param1, void *param2, unk32 param3);
};

class UnkStruct_027e09bc {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ UnkStruct_027e09bc_0c *mUnk_0C;
};

extern UnkStruct_027e09bc *data_027e09bc;
