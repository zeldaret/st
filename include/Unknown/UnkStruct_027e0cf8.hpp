#pragma once

#include "Save/AdventureFlags.hpp"
#include "System/Random.hpp"
#include "Unknown/Common.hpp"
#include "global.h"
#include "types.h"

struct UnkStruct_027e0cf8_00_18_00 {
    /* 00 */ UnkSubStruct19 mUnk_00;
    /* 78 */ unk32 mUnk_78;
    /* 7C */ unk32 mUnk_7C;
    /* 80 */ unk32 mUnk_80;
    /* 84 */
};

struct UnkStruct_027e0cf8_00_18 {
    /* 0000 */ UnkStruct_027e0cf8_00_18_00 mUnk_00[48];
    /* 18C0 */ Vec2p mUnk_18C0;
    /* 18C8 */ STRUCT_PAD(0x18C8, 0x2220);
    /* 2220 */
};

class UnkStruct_027e0cf8_00 {
public:
    /* 0000 */ Random mRandom;
    /* 0018 */ UnkStruct_027e0cf8_00_18 mUnk_0018;
    /* 2238 */ Vec2p *mUnk_2238;
    /* 223C */ unk32 mUnk_223C;
    /* 2240 */ Vec2s mUnk_2240;
    /* 2244 */ unk32 mUnk_2244;
    /* 2248 */ unk32 mUnk_2248;
    /* 224C */ unk32 mUnk_224C;
    /* 2250 */ unk32 mUnk_2250;
    /* 2254 */ unk32 mUnk_2254;
    /* 2258 */

    UnkStruct_027e0cf8_00();
    ~UnkStruct_027e0cf8_00();

    void func_ov024_020cf9d4(UnkStruct_027e0cf8_00_18_00 *param1);
    void func_ov024_020cfb7c(UnkDataStruct4 *param1, Vec2s *param2, unk32 param3, u16 param4, unk32 param5, unk32 param6);

    static s32 func_ov024_020cfd54(s32 param1, s32 param2, s32 param3, s32 param4);
    static bool func_ov024_020cfe24(s16 param1);
    static s32 func_ov024_020cfe6c(s32 param1, s32 param2, s32 param3, s32 param4);
    static s16 func_ov024_020cfe94(s32 param1);
    static bool func_ov024_020cfed0(s16 param1);
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

class UnkStruct_027e0cf8_0C_00 {
public:
    /* 00 */ UnkStruct_ov019_020d24c8_28_258_00 mUnk_00;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ Vec2p mUnk_0C;
    /* 14 */ unk16 mUnk_14;
    /* 16 */ unk16 mUnk_16;
    /* 18 */ bool mUnk_18;
    /* 19 */ bool mUnk_19;
    /* 1A */ bool mUnk_1A;
    /* 1B */ bool mUnk_1B;
    /* 1C */

    UnkStruct_027e0cf8_0C_00() {}

    void func_ov024_020cff1c();
};

class UnkStruct_027e0cf8_0C {
public:
    /* 000 */ UnkStruct_027e0cf8_0C_00 mUnk_000[12];
    /* 150 */ UnkStruct_ov019_020d24c8_28_258_00 mUnk_150;
    /* 158 */ unk32 mUnk_158;
    /* 15C */ UnkStruct_ov019_020d24c8_28_258_00 mUnk_15C;
    /* 164 */ unk32 mUnk_164;
    /* 168 */ Vec2s mUnk_168;
    /* 16C */ unk32 mUnk_16C;
    /* 170 */

    UnkStruct_027e0cf8_0C();
    ~UnkStruct_027e0cf8_0C();

    void func_ov024_020cff8c(UnkDataStruct4 *param1, Vec2s *param2);
    void func_ov024_020d0004();
    void func_ov024_020d002c(const UnkDataStruct4 *param1);
    void func_ov024_020d01c0(const UnkDataStruct4 *param1);
    bool func_ov024_020d02e0(fx32 *pX, fx32 *pZ, s32 param3);
    bool func_ov024_020d0340(Vec2s *param1, unk32 param2);
    void func_ov024_020d03f8(Vec2s *param1);
    s32 func_ov024_020d041c(Vec2s *param1);
    void func_ov024_020d05d0(unk32 param1, bool param2);

    static bool func_ov024_020d0510(s16 param1);
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

    void func_ov024_020c755c(UnkDataStruct4 *param1);
    void func_ov024_020c75d0(UnkDataStruct4 *param1, unk32 param2, u16 param3);
    void func_ov024_020c7724();
    void func_ov024_020c7750();
    void func_ov024_020c7780();
    void func_ov024_020c77b0(unk32 param1);
    bool func_ov024_020c77c0(fx32 *pX, fx32 *pZ, s32 param3);
    bool func_ov024_020c77d0(Vec2s *param1, unk32 param2);
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

struct UnkStruct_ov024_020d8098 {
    /* 00 */ s16 mUnk_00;
    /* 02 */ s16 mUnk_02;
    /* 04 */ Vec2sb mUnk_04;
    /* 06 */ s16 mUnk_06;
    /* 08 */ u16 mUnk_08;
    /* 0A */ bool mUnk_0A;
    /* 0B */ bool mUnk_0B;
    /* 0C */
};

struct UnkStruct_ov024_020d7454 {
    /* 00 */ s16 mSceneIndex;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ u16 mUnk_04;
    /* 06 */ AdventureFlag_Half mAdvFlag;
    /* 08 */ bool mUnk_08;
    /* 09 */ bool mUnk_09;
    /* 0A */ bool mUnk_0A;
    /* 0B */ unk8 mUnk_0B;
    /* 0C */ unk16 mUnk_0C;
    /* 0E */
};

extern UnkStruct_027e0cf8 *data_027e0cf8;
