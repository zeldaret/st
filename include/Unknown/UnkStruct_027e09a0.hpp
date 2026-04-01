#pragma once

#include "global.h"
#include "types.h"

struct UnkStruct_func_ov000_0207029c {
    /* 00 */ STRUCT_PAD(0x00, 0x1D);
    /* 20 */ u8 mUnk_1D;
};

struct UnkStruct_func_ov000_020702a8 {
    /* 00 */ STRUCT_PAD(0x00, 0x20);
    /* 20 */ unk16 mUnk_20;
};

class UnkStruct_027e09a0 {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_027e09a0();
    ~UnkStruct_027e09a0();

    UnkStruct_func_ov000_0207029c *func_ov000_0207029c(unk32 param1);
    UnkStruct_func_ov000_020702a8 *func_ov000_020702a8(unk32 param1);
};

extern UnkStruct_027e09a0 *data_027e09a0;
