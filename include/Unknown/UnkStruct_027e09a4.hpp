#pragma once

#include "System/SysNew.hpp"
#include "global.h"
#include "types.h"

struct UnkStruct_027e09a4_58_78 {
    unk32 mUnk_00;
    unk32 mUnk_04;
    unk8 mUnk_08;
    unk8 mUnk_09;
    u8 mUnk_0A;
};

struct UnkStruct_func_01ffd400 {
    /* 00 */ STRUCT_PAD(0x00, 0x10);
    /* 1B */ unk32 mUnk_10;
    /* 1B */ unk32 mUnk_14;
    /* 1B */ unk8 mUnk_18;
    /* 1B */ unk8 mUnk_19;
    /* 1B */ unk8 mUnk_1A;
    /* 1B */ u8 mUnk_1B;
};

class UnkStruct_027e09a4 : public SysObject {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ u8 mUnk_0C;
    /* 0D */ STRUCT_PAD(0x0D, 0x60);
    /* 60 */ unk32 mUnk_60;

    bool UnkCheck(unk32 value) {
        switch (value) {
            case 0x03:
            case 0x13:
            case 0x42:
            case 0x5A:
            case 0x5B:
            case 0x5D:
            case 0x63:
                return true;
            case 0x5C:
            case 0x5E:
            case 0x5F:
            case 0x60:
            case 0x61:
            case 0x62:
            default:
                break;
        }

        return false;
    }

    ~UnkStruct_027e09a4();

    UnkStruct_func_01ffd400 *func_01ffd400();

    unk8 func_ov000_02070bd0(unk32, unk32);
    UnkStruct_027e09a4_58_78 *func_ov000_02070560();
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
