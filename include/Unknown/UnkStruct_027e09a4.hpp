#pragma once

#include "System/SysNew.hpp"
#include "types.h"

class UnkStruct_027e09a4 : public SysObject {
public:
    /* 00 */ unk32 mUnk_00; // overlay index?

    ~UnkStruct_027e09a4();

    unk8 func_ov000_02070bd0(unk32, unk32);
    void func_ov000_020707a8(void *param1);
    void func_ov000_02070834(void *param1);
    void func_ov000_0207087c(unk32 param1);
    void func_ov000_020708d8(unk32 param1);
    void func_ov000_02070938(unk32 param1);
    void func_ov000_02070a4c(unk32 param1);

    void func_ov017_020bb994(void *param1);
    void func_ov017_020bb994(unk32 param1);
    void func_ov017_020bb994(void *, void *);

    static void func_ov025_020c4a60();
};

extern UnkStruct_027e09a4 *data_027e09a4;
