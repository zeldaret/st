#pragma once

#include "Unknown/Common.hpp"
#include "global.h"
#include "types.h"

struct UnkStruct_027e0cf8_00_18 {
    /* 00 */ UnkSubStruct19 mUnk_00;
    /* 78 */ unk32 mUnk_78;
    /* 7C */ unk32 mUnk_7C;
    /* 80 */ unk32 mUnk_80;
};

class UnkStruct_027e0cf8_00 {
public:
    /* 0000 */ STRUCT_PAD(0x00, 0x18);
    /* 0018 */ UnkStruct_027e0cf8_00_18 mUnk_0018[48];
    /* 18D8 */ STRUCT_PAD(0x18D8, 0x2258);
    /* 2258 */

    UnkStruct_027e0cf8_00();
    ~UnkStruct_027e0cf8_00();

    void func_ov024_020cfb7c(void *param1, Vec2s *param2, unk32 param3, u16 param4, unk32 param5, unk32 param6);
};

class UnkStruct_027e0cf8_04 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x1C);

    UnkStruct_027e0cf8_04();

    void func_ov026_020dc300();
};

class UnkStruct_027e0cf8_08 {
public:
    /* 000 */ STRUCT_PAD(0x00, 0x26C);

    UnkStruct_027e0cf8_08();
    ~UnkStruct_027e0cf8_08();

    void func_ov024_020d32d8();
    void func_ov024_020d32e8(Vec2s *param1);
    void func_ov024_020d3324(void *param1);
    void func_ov024_020d3348(void *param1, unk32 param2, u16 param3, unk32 param4, unk32 param5);
    void func_ov024_020d340c();
    void func_ov024_020d341c(unk32 param1);
};

class UnkStruct_027e0cf8_0C {
public:
    /* 000 */ STRUCT_PAD(0x00, 0x170);

    UnkStruct_027e0cf8_0C();
    ~UnkStruct_027e0cf8_0C();

    void func_ov024_020cff8c(void *param1, Vec2s *param2);
    void func_ov024_020d0004();
    void func_ov024_020d02e0();
    void func_ov024_020d0340();
    void func_ov024_020d03f8(Vec2s *param1);
    void func_ov024_020d041c(Vec2s *param1);
    void func_ov024_020d05d0(unk32 param1, unk32 param2);
};

class UnkStruct_027e0cf8 : AutoInstance<UnkStruct_027e0cf8> {
public:
    /* 00 */ UnkStruct_027e0cf8_00 *mUnk_00;
    /* 04 */ UnkStruct_027e0cf8_04 *mUnk_04;
    /* 08 */ UnkStruct_027e0cf8_08 *mUnk_08;
    /* 0C */ UnkStruct_027e0cf8_0C *mUnk_0C;
    /* 10 */ Vec2s mUnk_10;
    /* 14 */ Vec2s mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ bool mUnk_1C;
    /* 1D */ unk8 mUnk_1D;
    /* 1E */ unk8 mUnk_1E;
    /* 1F */ unk8 mUnk_1F;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ u16 mUnk_28;
    /* 2A */ u16 mUnk_2A;
    /* 2C */

    UnkStruct_027e0cf8();
    ~UnkStruct_027e0cf8();

    void func_ov017_020c390c();
    void func_ov017_020c397c();
    void func_ov017_020c39d4();

    void func_ov024_020c755c(void *param1);
    void func_ov024_020c75d0(void *param1, unk32 param2, u16 param3);
    void func_ov024_020c7724();
    void func_ov024_020c7750();
    void func_ov024_020c7780();
    void func_ov024_020c77b0(unk32 param1);
    void func_ov024_020c77c0();
    void func_ov024_020c77d0();
    void func_ov024_020c77e0(Vec2s *param1);
    void func_ov024_020c7804(Vec2s *param1);
    void func_ov024_020c7828(unk32 param1);
    void func_ov024_020c7878(unk32 param1, u16 param2);
    void func_ov024_020c7884();
    void func_ov024_020c7898();
    bool func_ov024_020c78ac(unk32 *param1, unk16 *param2);
    void func_ov024_020c78d0();
    void func_ov024_020c78e4(unk32 param1);
    void func_ov024_020c7900(unk32 param1);

    static UnkStruct_027e0cf8 *Create();
};

extern UnkStruct_027e0cf8 *data_027e0cf8;
