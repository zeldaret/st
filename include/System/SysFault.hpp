#pragma once

#include "types.h"

class SysFault {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ u8 mUnk_04;
    /* 05 */ u8 mUnk_05;

    void func_020125a4(char *file, u16 line, char *msg, ...);
    void func_020127f0(unk32 param1);

    void func_ov018_020c4840();
};

extern SysFault data_02049984;
