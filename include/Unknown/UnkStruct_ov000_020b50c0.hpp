#pragma once

#include "System/SysNew.hpp"
#include "types.h"

class UnkStruct_ov018_020c5ac0 : public SysObject {
public:
    /* 00 */ unk8 mUnk_00;
    /* 00 */ unk8 mUnk_01;
    /* 00 */ unk16 mUnk_02;
    /* 04 */

    UnkStruct_ov018_020c5ac0();
    void SetInstance();

    static UnkStruct_ov018_020c5ac0 *Create(void);
};

extern UnkStruct_ov018_020c5ac0 *data_027e099c;

class UnkStruct_ov000_020b50c0 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x94);
    /* 94 */ unk32 mUnk_94;
    /* 98 */ unk32 mUnk_98;
    /* 9C */ unk16 mUnk_9C;
    /* 9E */ unk8 mUnk_9E;
    /* 9F */ unk8 mUnk_9F;
    /* A0 */ unk8 mUnk_A0;
    /* A1 */ unk8 mUnk_A1;
    /* A2 */ unk8 mUnk_A2;
    /* A3 */ unk8 mUnk_A3;
    /* A4 */ unk16 mUnk_A4;
    /* A6 */ unk16 mUnk_A6;
    /* A8 */ unk32 mUnk_A8[9];
    /* CC */ unk32 mUnk_CC;
    /* D0 */ unk32 mUnk_D0;
    /* D4 */ unk32 mUnk_D4;
    /* D8 */ unk32 mUnk_D8;
    /* DC */ unk32 mUnk_DC;
    /* E0 */ unk32 mUnk_E0;
    /* E4 */ unk32 mUnk_E4;

    UnkStruct_ov000_020b50c0();

    void func_0200381c(const char *soundDataPath, unk32 param2, unk32 param3);

    void func_ov000_02069d3c(unk32 param1);
    void func_ov000_02069d7c(void);
    void func_ov000_02069f58(void);
    unk32 func_ov000_0206a5d8(unk32 param1);
    void func_ov000_0206a6a4(unk32 param1);
    void func_ov000_0206a758(void);
    void func_ov000_0206a77c(void);

    void func_ov001_020bd8ac(void);
    void func_ov001_020bd8dc(void);

    UnkStruct_ov018_020c5ac0 *func_ov018_020c5718(void);
};

extern UnkStruct_ov000_020b50c0 data_ov000_020b50c0;
