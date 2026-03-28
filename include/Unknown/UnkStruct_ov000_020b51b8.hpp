#pragma once

#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "types.h"

class UnkStruct_ov000_020b51b8_00 : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0xA0);

    UnkStruct_ov000_020b51b8_00(void *param1);

    // data_ov000_020b215c vtable
    /* 00 */ virtual ~UnkStruct_ov000_020b51b8_00();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C(unk32 param1);
};

class UnkStruct_ov000_020b51b8_04 : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x98);

    UnkStruct_ov000_020b51b8_04(void *param1);

    // data_ov000_020b2174 vtable
    /* 00 */ virtual ~UnkStruct_ov000_020b51b8_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C(unk32 param1);
};

class UnkStruct_ov000_020b51b8 {
public:
    /* 00 */ UnkStruct_ov000_020b51b8_00 *mUnk_00;
    /* 04 */ UnkStruct_ov000_020b51b8_04 *mUnk_04;
    /* 08 */ UnkStruct_ov000_020b5214 *mUnk_08[3];
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk16 mUnk_1C;
    /* 1E */ unk8 mUnk_1E;
    /* 1F */ unk8 mUnk_1F;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */ unk32 mUnk_30;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ unk32 mUnk_38;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ unk8 mUnk_40;
    /* 41 */ unk8 mUnk_41;
    /* 41 */ unk8 mUnk_42;
    /* 41 */ unk8 mUnk_43;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ unk32 mUnk_48;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ unk16 mUnk_54;
    /* 56 */ unk16 mUnk_56;

    UnkStruct_ov000_020b51b8();
    ~UnkStruct_ov000_020b51b8();

    void func_ov000_0206d0bc(unk32 param1);
    void func_ov000_0206d274(unk32 param1);
    void func_ov000_0206c96c(unk32 param1);
    void func_ov000_0206c9a8(unk32 param1, unk32 param2, unk32 param3, unk32 param4);
    void func_ov000_0206c608(unk32 param1, unk32 param2, unk32 param3);

    void func_ov018_020c5940();
};

extern UnkStruct_ov000_020b51b8 data_ov000_020b51b8;
