#pragma once

#include "files.h"
#include "types.h"
#include <nitro/math.h>

#include "Unknown/UnkStruct_027e09a4.hpp"

class UnkStruct_027e0cd8_0c {
public:
    /* 000 (vtable) */
    /* 004 */ unk32 *mUnk_04;
    /* 008 */ unk32 *mUnk_08;
    /* 00C */ unk32 mUnk_0C;
    /* 010 */ unk32 *mUnk_10;
    /* 014 */ unk32 *mUnk_14;
    /* 018 */ unk32 mUnk_18;
    /* 01C */ unk32 *mUnk_1C;
    /* 020 */ unk32 mUnk_20;
    /* 024 */ unk32 *mUnk_24;
    /* 028 */ unk32 mUnk_28;
    /* 02C */ unk32 *mUnk_2C;
    /* 030 */ unk32 mUnk_30;
    /* 034 */ unk32 *mUnk_34;
    /* 038 */ unk32 mUnk_38;
    /* 03C */ unk32 mUnk_3C;
    /* 040 */ unk32 mUnk_40;
    /* 044 */ unk32 mUnk_44;
    /* 048 */ unk32 mUnk_48;
    /* 04C */ unk32 mUnk_4C;
    /* 050 */ unk32 mUnk_50;
    /* 054 */ unk32 mUnk_54;
    /* 058 */ unk32 mUnk_58;
    /* 05C */ unk32 mUnk_5C;
    /* 060 */ unk32 mUnk_60;
    /* 064 */ unk32 mUnk_64;
    /* 068 */ unk32 mUnk_68;
    /* 06C */ unk32 mUnk_6C;
    /* 070 */ unk32 *mUnk_70;
    /* 074 */ unk32 *mUnk_74;
    /* 078 */ unk32 *mUnk_78;
    /* 07C */ unk32 mUnk_7C;
    /* 080 */ unk32 mUnk_80;
    /* 084 */ unk32 mUnk_84;
    /* 088 */ unk32 *mUnk_88;
    /* 08C */ unk32 *mUnk_8C;
    /* 090 */ unk32 mUnk_90;
    /* 094 */ unk32 mUnk_94;
    /* 098 */ unk32 mUnk_98;
    /* 09C */ unk32 mUnk_9C;
    /* 0A0 */ unk32 mUnk_A0;
    /* 0A4 */ unk32 mUnk_A4;
    /* 0A8 */ unk32 mUnk_A8;
    /* 0AC */ unk32 mUnk_AC;
    /* 0B0 */ unk32 mUnk_B0;
    /* 0B4 */ ZeldaObjectList *mUnk_B4;
    /* 0B8 */ ZeldaObjectList *mUnk_B8;
    /* 0BC */ ZeldaObjectList *mUnk_BC;
    /* 0C0 */ ZeldaObjectList *mUnk_C0;
    /* 0C4 */ ZeldaObjectList *mUnk_C4;
    /* 0C8 */ ZeldaObjectList *mUnk_C8;
    /* 0CC */ ZeldaObjectList *mUnk_CC;
    /* 0D0 */ ZeldaObjectList *mUnk_D0;
    /* 0D4 */ ZeldaObjectList *mUnk_D4;
    /* 0D8 */ ZeldaObjectList *mUnk_D8;
    /* 0DC */ ZeldaObjectList *mUnk_DC[8];
    /* 0FC */ STRUCT_PAD(0xFC, 0x128);
    /* 128 */ u16 mUnk_128;

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0c();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1c();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual q20 vfunc_28(Vec3p *param1, unk32 param2, unk32 param3);
    /* 2C */ virtual void vfunc_2c();

    q20 func_01ffedf4(Vec2b *pPos);
    unk32 func_ov000_02080180(void *param1);
    bool func_ov000_02080658(unk32 param1, UnkStruct_SceneChange1 *param2);
    void func_ov000_020808f4(void *param1, void *param2, unk32 param3);
    unk32 func_ov000_02080a44();
    void func_ov000_020801b0(Vec2b *param1, unk32 param2, unk32 param3);
};

class UnkStruct_027e0cd8_10 {
public:
    /* 00 */ unk32 mUnk_00;

    void func_01fff6d0(Vec3p *param1, s32 *param2, s32 *param3);
};

class UnkStruct_027e0cd8 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ UnkStruct_027e0cd8_0c *mUnk_0C;
    /* 10 */ UnkStruct_027e0cd8_10 *mUnk_10;
    /* 14 */ STRUCT_PAD(0x14, 0x4C);
    /* 4C */

    unk32 func_ov000_02081e30(unk32 param1, unk32 param2);
    void func_ov000_02081d7c(unk32 param1, unk32 param2, unk32 param3);
    void func_ov000_02081ecc(unk16 param1, unk32 param2);
    void func_ov000_02081eec(unk16 param1, unk32 param2, unk32 param3);
    bool func_ov000_02081f3c(unk16 param1, unk32 param2);
};

extern UnkStruct_027e0cd8 *data_027e0cd8;
