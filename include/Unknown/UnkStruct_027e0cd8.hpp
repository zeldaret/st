#pragma once

#include "files.h"
#include "nitro/math.h"
#include "types.h"

class UnkStruct_027e0cd8_0c {
public:
    /* 000 (vtable) */
    /* 004 */ unk32 *mUnk_04;
    /* 008 */ unk32 *mUnk_08;
    /* 00c */ unk32 mUnk_0c;
    /* 010 */ unk32 *mUnk_10;
    /* 014 */ unk32 *mUnk_14;
    /* 018 */ unk32 mUnk_18;
    /* 01c */ unk32 *mUnk_1c;
    /* 020 */ unk32 mUnk_20;
    /* 024 */ unk32 *mUnk_24;
    /* 028 */ unk32 mUnk_28;
    /* 02c */ unk32 *mUnk_2c;
    /* 030 */ unk32 mUnk_30;
    /* 034 */ unk32 *mUnk_34;
    /* 038 */ unk32 mUnk_38;
    /* 03c */ unk32 mUnk_3c;
    /* 040 */ unk32 mUnk_40;
    /* 044 */ unk32 mUnk_44;
    /* 048 */ unk32 mUnk_48;
    /* 04c */ unk32 mUnk_4c;
    /* 050 */ unk32 mUnk_50;
    /* 054 */ unk32 mUnk_54;
    /* 058 */ unk32 mUnk_58;
    /* 05c */ unk32 mUnk_5c;
    /* 060 */ unk32 mUnk_60;
    /* 064 */ unk32 mUnk_64;
    /* 068 */ unk32 mUnk_68;
    /* 06c */ unk32 mUnk_6c;
    /* 070 */ unk32 *mUnk_70;
    /* 074 */ unk32 *mUnk_74;
    /* 078 */ unk32 *mUnk_78;
    /* 07c */ unk32 mUnk_7c;
    /* 080 */ unk32 mUnk_80;
    /* 084 */ unk32 mUnk_84;
    /* 088 */ unk32 *mUnk_88;
    /* 08c */ unk32 *mUnk_8c;
    /* 090 */ unk32 mUnk_90;
    /* 094 */ unk32 mUnk_94;
    /* 098 */ unk32 mUnk_98;
    /* 09c */ unk32 mUnk_9c;
    /* 0a0 */ unk32 mUnk_a0;
    /* 0a4 */ unk32 mUnk_a4;
    /* 0a8 */ unk32 mUnk_a8;
    /* 0ac */ unk32 mUnk_ac;
    /* 0b0 */ unk32 mUnk_b0;
    /* 0b4 */ ZeldaObjectList *mUnk_b4;
    /* 0b8 */ ZeldaObjectList *mUnk_b8;
    /* 0bc */ ZeldaObjectList *mUnk_bc;
    /* 0c0 */ ZeldaObjectList *mUnk_c0;
    /* 0c4 */ ZeldaObjectList *mUnk_c4;
    /* 0c8 */ ZeldaObjectList *mUnk_c8;
    /* 0cc */ ZeldaObjectList *mUnk_cc;
    /* 0d0 */ ZeldaObjectList *mUnk_d0;
    /* 0d4 */ ZeldaObjectList *mUnk_d4;
    /* 0d8 */ ZeldaObjectList *mUnk_d8;
    /* 0dc */ ZeldaObjectList *mUnk_dc[8];
    /* 0fc */ STRUCT_PAD(0xFC, 0x128);
    /* 128 */ u16 mUnk_128;

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0c */ virtual void vfunc_0c();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1c */ virtual void vfunc_1c();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual q20 vfunc_28(Vec3p *param1, unk32 param2, unk32 param3);
    /* 2c */ virtual void vfunc_2c();

    unk32 func_ov000_02080a44();
};

class UnkStruct_027e0cd8 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ UnkStruct_027e0cd8_0c *mUnk_0c;
    /* 10 */

    unk32 func_ov000_02081e30(u16 param1, u8 param2);
    void func_ov000_02081ecc(unk16 param1, unk32 param2);
};

extern UnkStruct_027e0cd8 *data_027e0cd8;
