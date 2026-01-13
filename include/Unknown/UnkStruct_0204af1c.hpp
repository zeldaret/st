#pragma once

#include "types.h"

class UnkStruct_0204af1c_00 {
public:
    /* 0000 */ unk8 mUnk_0000[0x1490];
    /* 1490 */

    UnkStruct_0204af1c_00();
    void func_0201af10(unk32 param1);
};

class UnkStruct_0204af1c {
public:
    /* 0000 */ UnkStruct_0204af1c_00 mUnk_0000[2];
    /* 2920 */ unk8 mUnk_2920[0x194];
    /* 2AB4 */

    UnkStruct_0204af1c();
    void func_0201a800();
    void func_0201aa44(void *param1, void *param2, unk32 param3, void *param4);
    void func_0201aad0(void *param1, void *param2, unk32 param3, void *param4);
};

extern UnkStruct_0204af1c data_0204af1c;
