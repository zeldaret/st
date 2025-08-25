#pragma once

#include "files.h"
#include "nitro/math.h"
#include "types.h"

class UnkStruct_027e0cd8_0c {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 *mUnk_04;
    /* 08 */ unk32 *mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ unk32 *mUnk_10;
    /* 14 */ unk32 *mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1c */ unk32 *mUnk_1c;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 *mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2c */ unk32 *mUnk_2c;
    /* 30 */ unk32 mUnk_30;
    /* 34 */ unk32 *mUnk_34;
    /* 38 */ unk32 mUnk_38;
    /* 3c */ unk32 mUnk_3c;
    /* 40 */ unk32 mUnk_40;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ unk32 mUnk_48;
    /* 4c */ unk32 mUnk_4c;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ unk32 mUnk_58;
    /* 5c */ unk32 mUnk_5c;
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk32 mUnk_64;
    /* 68 */ unk32 mUnk_68;
    /* 6c */ unk32 mUnk_6c;
    /* 70 */ unk32 *mUnk_70;
    /* 74 */ unk32 *mUnk_74;
    /* 78 */ unk32 *mUnk_78;
    /* 7c */ unk32 mUnk_7c;
    /* 80 */ unk32 mUnk_80;
    /* 84 */ unk32 mUnk_84;
    /* 88 */ unk32 *mUnk_88;
    /* 8c */ unk32 *mUnk_8c;
    /* 90 */ unk32 mUnk_90;
    /* 94 */ unk32 mUnk_94;
    /* 98 */ unk32 mUnk_98;
    /* 9c */ unk32 mUnk_9c;
    /* a0 */ unk32 mUnk_a0;
    /* a4 */ unk32 mUnk_a4;
    /* a8 */ unk32 mUnk_a8;
    /* ac */ unk32 mUnk_ac;
    /* b0 */ unk32 mUnk_b0;
    /* b4 */ ZeldaObjectList *mUnk_b4;
    /* b8 */ ZeldaObjectList *mUnk_b8;
    /* bc */ ZeldaObjectList *mUnk_bc;
    /* c0 */ ZeldaObjectList *mUnk_c0;
    /* c4 */ ZeldaObjectList *mUnk_c4;
    /* c8 */ ZeldaObjectList *mUnk_c8;
    /* cc */ ZeldaObjectList *mUnk_cc;
    /* d0 */ ZeldaObjectList *mUnk_d0;
    /* d4 */ ZeldaObjectList *mUnk_d4;
    /* d8 */ ZeldaObjectList *mUnk_d8;
    /* dc */ ZeldaObjectList *mUnk_dc[8];

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
