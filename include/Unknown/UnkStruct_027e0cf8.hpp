#pragma once

#include "MainGame/AdventureMode.hpp"
#include "Save/AdventureFlags.hpp"
#include "System/Random.hpp"
#include "Unknown/Common.hpp"
#include "global.h"
#include "types.h"

struct UnkStruct_027e0cf8_00_18_00 {
    /* 00 */ CellAnimObject mUnk_00;
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

    static s32 func_ov024_020cfd54(s32 param1, s32 stationSceneIdx, s32 param3, s32 param4);
    static bool func_ov024_020cfe24(s16 stationSceneIdx);
    static s32 func_ov024_020cfe6c(s32 param1, s32 param2, s32 param3, s32 param4);
    static s16 func_ov024_020cfe94(s32 param1);
    static bool func_ov024_020cfed0(s16 sceneIndex);
};

class UnkStruct_027e0cf8_04 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x1C);

    UnkStruct_027e0cf8_04();

    void func_ov026_020dc300();
};

typedef Vec2s UnkArrayDataType2[7];
// related to the rail positions (only on the minimap?)
class UnkStruct_027e0cf8_08_00 : public AdventureModeManager_1B8_Base {
public:
    /* 000 (base) */
    /* 024 */ UnkArrayDataType2 mUnk_024;
    /* 040 */ UnkArrayDataType2 mUnk_040;
    /* 05C */ UnkArrayDataType2 mUnk_05C;
    /* 078 */ UnkArrayDataType2 mUnk_078;
    /* 094 */ UnkArrayDataType2 mUnk_094;
    /* 0B0 */ UnkArrayDataType2 mUnk_0B0;
    /* 0CC */ UnkArrayDataType2 mUnk_0CC;
    /* 0E8 */ UnkArrayDataType2 mUnk_0E8;
    /* 104 */ UnkArrayDataType2 mUnk_104;
    /* 120 */ UnkArrayDataType2 mUnk_120;
    /* 13C */ UnkArrayDataType2 mUnk_13C;
    /* 158 */ UnkArrayDataType2 mUnk_158;
    /* 174 */ Vec2s mUnk_174;
    /* 178 */ Vec2s *mUnk_178[4][4];
    /* 1B8 */

    UnkStruct_027e0cf8_08_00(u8 bgType);
    ~UnkStruct_027e0cf8_08_00();

    // overlay 1
    void func_ov001_020bfb20();

    // overlay 24
    void func_ov024_020d3adc(Vec2s *param1, unk32 param2, unk32 param3, u8 param4, bool param5, u8 param6);
    unk32 func_ov024_020d3bfc(UnkArrayDataType2 param1, unk32 param2, unk32 param3, bool param4);

    static bool func_ov024_020d3900(Vec2s *param1, fx32 *param2, fx32 *param3, unk32 param4, unk32 param5);
    static bool func_ov024_020d3914(Vec2s *param1, Vec2s *param2, Vec2s *param3);
    static bool func_ov024_020d3970(Vec2s *param1, fx32 *param2, fx32 *param3, unk32 param4, unk32 param5);
    static bool func_ov024_020d39fc(Vec2s *param1, unk32 param2, unk32 param3);
    static bool func_ov024_020d3a34(Vec2s *param1, unk32 param2, unk32 param3);
    static void func_ov024_020d3a60(Vec2s *param1, Vec2s *param2, unk32 param3, unk32 param4);
    static bool func_ov024_020d3a8c(Vec2s *param1);
};

class UnkStruct_027e0cf8_08 {
public:
    /* 000 */ UnkStruct_027e0cf8_08_00 *mUnk_000;
    /* 004 */ unk32 mUnk_004;
    /* 008 */ unk32 mUnk_008;
    /* 00C */ unk32 mUnk_00C;
    /* 010 */ UnkArrayDataType1 mUnk_010;
    /* 13C */ UnkArrayDataType1 mUnk_13C;
    /* 268 */ u16 mUnk_268;
    /* 26A */ u8 mUnk_26A;
    /* 26B */ unk8 mUnk_26B;
    /* 26C */

    UnkStruct_027e0cf8_08();
    ~UnkStruct_027e0cf8_08();

    void func_ov024_020d32b4(unk8 *param1);
    void func_ov024_020d32d8();
    void func_ov024_020d32e8(Vec2s *param1);
    void func_ov024_020d3324(UnkDataStruct4 *param1);
    void func_ov024_020d3348(UnkDataStruct4 *param1, unk32 param2, u16 param3, unk32 param4, unk32 param5);
    void func_ov024_020d336c(UnkDataStruct4 *param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5);
    void func_ov024_020d340c();
    void func_ov024_020d341c(bool param1);
    void func_ov024_020d3428(const UnkDataStruct4 *param1, unk32 param2, u8 param3);
    void func_ov024_020d34a0(UnkArrayDataType1 param1, u8 param2);
    void func_ov024_020d351c(unk32 param1, unk32 param2, unk32 *param3, unk32 param4, u8 param5);

    static u8 func_ov024_020d3158(SceneIndex sceneIndex);
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

    UnkStruct_027e0cf8_0C_00() :
        mUnk_00(NULL, 0) {}

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

class UnkStruct_027e0cf8 : public AutoInstance<UnkStruct_027e0cf8> {
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
    void func_ov024_020c77b0(bool param1);
    bool func_ov024_020c77c0(fx32 *pX, fx32 *pZ, s32 param3);
    bool func_ov024_020c77d0(Vec2s *param1, unk32 param2);
    void func_ov024_020c77e0(Vec2s *param1);
    void func_ov024_020c7804(Vec2s *param1);
    void func_ov024_020c7828(ItemId itemId);
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
    /* 02 */ s16 mStationSceneIdx;
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
