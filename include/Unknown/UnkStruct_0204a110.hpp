#pragma once

#include "System/SysNew.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "global.h"
#include "types.h"

struct UnkStruct_0204a110_Sub2_000_158 {
    u32 mUnk_00[3];
    unk8 mUnk_0C;
    u8 pad[3];
};

struct UnkStruct_0204a110_Sub2_000 {
    unk32 mUnk_00[2];
    unk32 mUnk_08[2];
    unk32 mUnk_10[2];
    unk32 mUnk_18[2];
    unk32 mUnk_20;
    unk32 mUnk_24[2];
    unk32 mUnk_2C[2];
    unk32 mUnk_34[2];
    unk32 mUnk_3C[2];
    unk32 mUnk_44[2];
    STRUCT_PAD(0x4C, 0x150);
    unk32 mUnk_150;
    unk32 mUnk_154;
    UnkStruct_0204a110_Sub2_000_158 mUnk_158[16];
    STRUCT_PAD(0x258, 0x358);
    unk32 mUnk_358;
};

struct UnkStruct_0204a110_Sub2_158 {
    /* 00 */ unk32 mUnk_00[3];
    /* 0C */ u8 mUnk_0C;
    /* 0D */ u8 pad[3];
    /* 10 */
};

class UnkStruct_0204a110_Sub2 {
public:
    /* 000 */ unk32 mUnk_000[2];
    /* 008 */ unk32 mUnk_008[2];
    /* 010 */ unk32 mUnk_010[2];
    /* 018 */ unk32 mUnk_018[2];
    /* 020 */ unk32 mUnk_020;
    /* 024 */ unk32 mUnk_024[2];
    /* 02C */ unk32 mUnk_02C[2];
    /* 034 */ unk32 mUnk_034[2];
    /* 03C */ unk32 mUnk_03C[2];
    /* 044 */ unk32 mUnk_044[2];
    /* 04C */ STRUCT_PAD(0x4C, 0x150);
    /* 150 */ unk32 mUnk_150[2];
    /* 158 */ UnkStruct_0204a110_Sub2_158 mUnk_158[2][16];
    /* 358 */ unk32 mUnk_358[2];
    /* 360 */

    UnkStruct_0204a110_Sub2();
    void func_0201c890(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5);
};

class UnkStruct_0204a110_Sub3_00 {
public:
    /* 000 */ unk8 mUnk_000[0x200];
    /* 200 */

    UnkStruct_0204a110_Sub3_00() {
        Fill16(0, (u16 *) this->mUnk_000, sizeof(this->mUnk_000));
    }
};

struct UnkStruct_0204a110_Sub3_400 {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ UnkStruct_0204a110_Sub3_00 *mUnk_0C;
    /* 10 */
};

class UnkStruct_0204a110_Sub3 {
public:
    /* 000 */ UnkStruct_0204a110_Sub3_00 mUnk_00[2];
    /* 400 */ UnkStruct_0204a110_Sub3_400 mUnk_400[2];
    /* 420 */ unk8 mUnk_420[2];
    /* 422 */ unk16 mUnk_422;
    /* 424 */

    UnkStruct_0204a110_Sub3();
};

class UnkStruct_0204a110_Sub4 {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_0204a110_Sub4();
};

class UnkStruct_0204a110_Sub5 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;

    UnkStruct_0204a110_Sub5();
};

class UnkStruct_0204a110_Sub6 {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk16 mUnk_0C;
    /* 0E */ unk16 mUnk_0E;
    /* 10 */ unk16 mUnk_10;
    /* 12 */ unk8 mUnk_12;
    /* 13 */ unk8 mUnk_13;

    UnkStruct_0204a110_Sub6();

    // data_020442b4 vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
};

class UnkStruct_0204a110_Sub7_08 : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x30);
    /* 30 */

    UnkStruct_0204a110_Sub7_08();

    // data_0204431c vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
};

struct UnkStruct_027e0120 {
    /* 00 */ unk32 mUnk_00[4];
    /* 10 */
};

extern UnkStruct_027e0120 data_027e0120;

class UnkStruct_0204a110_Sub7 {
public:
    /* 00 */ unk8 mUnk_00;
    /* 01 */ unk8 mUnk_01;
    /* 02 */ unk8 mUnk_02;
    /* 03 */ unk8 mUnk_03;
    /* 04 */ UnkSystem2_UnkSubSystem9 *mUnk_04;
    /* 08 */ UnkStruct_0204a110_Sub7_08 *mUnk_08;
    /* 0C */ UnkStruct_027e0120 mUnk_0C;
    /* 1C */

    UnkStruct_0204a110_Sub7();
};

class UnkStruct_0204a110_Sub8 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk8 mUnk_08;
    /* 08 */ unk8 mUnk_09;
    /* 08 */ unk8 mUnk_0A;
    /* 08 */ unk8 mUnk_0B;
    /* 0C */ UnkSystem2_UnkSubSystem9 *mUnk_0C;

    UnkStruct_0204a110_Sub8();
};

class UnkStruct_0204a110 {
public:
    /* 000 */ unk32 mUnk_000;
    /* 004 */ unk32 mUnk_004;
    /* 008 */ unk32 mUnk_008;
    /* 00C */ unk32 mUnk_00C;
    /* 010 */ UnkStruct_0204a110_Sub2 mUnk_010;
    /* 370 */ UnkStruct_0204a110_Sub3 mUnk_370;
    /* 794 */ UnkStruct_0204a110_Sub4 mUnk_794;
    /* 798 */ STRUCT_PAD(0x798, 0xD9C);
    /* D9C */ UnkStruct_0204a110_Sub5 mUnk_D9C;
    /* DA4 */ unk8 mUnk_DA4;
    /* DA5 */ unk8 mUnk_DA5;
    /* DA6 */ unk8 mUnk_DA6;
    /* DA7 */ unk8 mUnk_DA7;
    /* DA8 */ UnkStruct_0204a110_Sub6 mUnk_DA8;
    /* DAC */ STRUCT_PAD(0xDBC, 0xDC0);
    /* DC0 */ UnkStruct_0204a110_Sub7 mUnk_DC0;
    /* DDC */ UnkStruct_0204a110_Sub8 mUnk_DDC;
    /* DEC */ unk32 mUnk_DEC;
    /* DF0 */ unk16 mUnk_DF0;
    /* DF2 */ unk8 mUnk_DF2;
    /* DF3 */ unk8 mUnk_DF3;
    /* DF4 */ unk32 mUnk_DF4;
    /* DF8 */ unk8 mUnk_DF8;
    /* DF9 */ unk8 mUnk_DF9;
    /* DFA */ unk8 mUnk_DFA;
    /* DFB */ unk8 mUnk_DFB;
    /* DFC */ unk8 mUnk_DFC;
    /* DFD */ unk8 mUnk_DFD;
    /* DFE */ unk8 mUnk_DFE;
    /* DFF */ unk8 mUnk_DFF;
    /* E00 */ unk8 mUnk_E00;
    /* E00 */ unk8 mUnk_E01;
    /* E02 */ unk16 mUnk_E02;
    /* E04 */ unk16 mUnk_E04;

    UnkStruct_0204a110();
    unk32 func_01ff9b50();
    void func_02018c90(unk32 param1);
    void func_020195a0(const char *param1, unk32 param2, unk32 param3, unk32 param4);
    void func_0201967c(unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);
    void func_02019538(unk32 param1, unk32 param2);
    void func_02018c78(unk32 param1);

    void func_ov001_020bd514(unk32 param1, void *param2, unk32 param3, unk32 param4);

    void func_ov018_020c5300(void);
};

extern UnkStruct_0204a110 data_0204a110;
