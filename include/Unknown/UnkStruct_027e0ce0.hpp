#pragma once

#include "global.h"
#include "types.h"

#include "Actor/ActorRef.hpp"
#include "Item/ItemManager.hpp"
#include "LinkList.hpp"
#include "Player/PlayerLink.hpp"
#include "Player/TouchControl.hpp"
#include "Save/SaveManager.hpp"
#include "input.hpp"

#include <nitro/math.h>

class UnkStruct_027e0ce0;
class UnkStruct_027e0ce0_30;
class UnkStruct_027e0ce0_38;
class UnkStruct_027e0ce0_3C;
class UnkStruct_ov001_020c40f4;

class UnkStruct_027e0ce0_0C : public LinkList<UnkStruct_027e0ce0_0C> {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */ UnkStruct_027e0ce0 *mUnk_0C;
    /* 10 */

    UnkStruct_027e0ce0_0C(UnkStruct_027e0ce0 *param1) :
        mUnk_0C(param1) {}

    // data_ov000_020b2b38
    /* 00 */ virtual void vfunc_00(unk32 param1);
};

class UnkStruct_027e0ce0_1C {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x0C);
    /* 0C */ MapObjectProfile_Derived2_20_Base *mUnk_0C;
    /* 10 */ STRUCT_PAD(0x10, 0xDC);
    /* DC */

    UnkStruct_027e0ce0_1C();
    ~UnkStruct_027e0ce0_1C();

    // overlay 1
    void func_ov001_020bccec();
    void func_ov001_020bcfec();
    void func_ov001_020bd0a4(bool param1);
    void func_ov001_020bd1ec();
};

class UnkStruct_027e0ce0_20 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x0C);
    /* 0C */

    UnkStruct_027e0ce0_20();
    ~UnkStruct_027e0ce0_20();
};

class UnkStruct_027e0ce0_24 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x88);
    /* 88 */

    UnkStruct_027e0ce0_24();
    ~UnkStruct_027e0ce0_24();

    // overlay 21
    void func_ov021_020eaa08(UnkStruct_027e0ce0_20 *param1);
    void func_ov021_020eaac4();
    void func_ov021_020eab14(unk32 param1, const UnkStruct_ov001_020c40f4 *param2, UnkStruct_027e0ce0_30 *param3);
};

class UnkStruct_027e0ce0_30_00 {
private:
    /* 00 */ VecFx32 mUnk_00;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ bool mUnk_28;
    /* 2C */ UnkStruct_027e0ce0_38 *mUnk_2C;
    /* 30 */ UnkStruct_027e0ce0_3C *mUnk_30;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ unk32 *mUnk_38;
    /* 38 */ unk32 mUnk_3C;
    /* 40 */

public:
    UnkStruct_027e0ce0_30_00(UnkStruct_027e0ce0_38 *param1, UnkStruct_027e0ce0_3C *param2, unk32 param3, unk32 *param4,
                             unk32 param5);
    ~UnkStruct_027e0ce0_30_00();
};

class UnkStruct_027e0ce0_30_04 {
private:
    /* 00 */ STRUCT_PAD(0x00, 0x0C);
    /* 0C */

public:
    UnkStruct_027e0ce0_30_04();
    ~UnkStruct_027e0ce0_30_04();
};

class UnkStruct_027e0ce0_30_08 {
private:
    /* 00 */ STRUCT_PAD(0x00, 0x24);
    /* 24 */

public:
    UnkStruct_027e0ce0_30_08(unk32 param1);
    ~UnkStruct_027e0ce0_30_08();
};

class UnkStruct_027e0ce0_30 {
private:
    /* 00 */ UnkStruct_027e0ce0_30_00 *mUnk_00;    // only used for adventure mode?
    /* 04 */ UnkStruct_027e0ce0_30_04 *mUnk_04;    // only used for adventure mode?
    /* 08 */ UnkStruct_027e0ce0_30_08 *mUnk_08[4]; // only used for battle mode?
    /* 18 */

public:
    UnkStruct_027e0ce0_30();
    ~UnkStruct_027e0ce0_30();

    // overlay 1
    void func_ov001_020bbf00(int index, unk32 param2);
    void func_ov001_020bbf24(UnkStruct_027e0ce0_38 *param1);
    void func_ov001_020bbf50(UnkStruct_027e0ce0_3C *param1);
    void func_ov001_020bbf7c(unk32 param1, unk32 *param2, unk32 param3);
    void func_ov001_020bbfcc();
    void func_ov001_020bbff4(UnkStruct_027e0ce0_38 *param1);
};

class UnkStruct_027e0ce0_34 {
public:
    /* 00 */ unk32 mUnk_00[4];
    /* 10 */ unk32 mUnk_10[4];
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ s32 mUnk_2C;
    /* 30 */ u32 mSpiritTrackFlags;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ u32 mTrackFlags[3];
    /* 44 */ STRUCT_PAD(0x44, 0xF4);
    /* F4 */

    UnkStruct_027e0ce0_34();
    ~UnkStruct_027e0ce0_34();

    // overlay 1
    void func_ov001_020bf22c(unk32 param1, unk32 param2);
    void func_ov001_020bf2b8(bool param1);
    void func_ov001_020bf378();
    void func_ov001_020bf3bc();
    void func_ov001_020bf3cc();

    // overlay 8
    void func_ov008_020b6a50();

    // overlay 24
    void func_ov024_020d3c60(SaveFile_00000_0000_Data_D8 *param1);
    unk32 func_ov024_020d3cf4(unk32 param1);
    unk32 func_ov024_020d3d20();
    void func_ov024_020d3d80(unk32 param1);
    void func_ov024_020d3d98(unk32 param1, unk32 param2);
    bool func_ov024_020d3da8(unk32 param1, unk32 param2);
    u32 func_ov024_020d3dc0(unk32 param1, unk32 param2);
    bool func_ov024_020d3dcc();
    unk32 func_ov024_020d3dec(unk32 param1);
    unk32 func_ov024_020d3e0c(unk32 param1);
    void func_ov024_020d3e30(unk32 param1, unk32 param2);
    void *func_ov024_020d3e68(unk32 param1);
    void SetTrackFlag(s32 flagPos, u16 flagValue, bool doSet);
    bool func_ov024_020d3f4c(s8 param1, u16 param2);
    void func_ov024_020d3f8c();
    void func_ov024_020d3fc8();
    void func_ov024_020d4008(unk32 param1);
    void func_ov024_020d404c();
    void func_ov024_020d4098(s32 *param1, s32 *param2);

    static s8 func_ov024_020d3c54(unk32 param1);

    // overlay 110
    void func_ov110_02185d3c(ItemId itemId);
};

class UnkStruct_027e0ce0_3C {
public:
    /* 00 */ VecFx32 mUnk_00;
    /* 0C */ STRUCT_PAD(0x0C, 0x98);
    /* 98 */

    UnkStruct_027e0ce0_3C();
    ~UnkStruct_027e0ce0_3C();

    // overlay 88
    void func_ov088_0216fbc4(unk32 param1, const UnkStruct_ov001_020c40f4 *param2);
};

class UnkStruct_ov031_020f3310_00 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x06);
    /* 06 */ u16 mUnk_06;
    /* 0A */
};

class UnkStruct_ov031_020f3310_04 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x24);
    /* 24 */ unk32 mUnk_24[4];
    /* 34 */
};

class UnkStruct_ov031_020f3310 {
public:
    /* 00 */ UnkStruct_ov031_020f3310_00 *mUnk_00;
    /* 04 */ UnkStruct_ov031_020f3310_04 *mUnk_04;
    /* 08 */ VecFx16 mUnk_08;
    /* 20 */
};

class UnkStruct_ov031_020e54d4 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x08);
    /* 08 */ u32 mUnk_08;
};

class UnkStruct_027e0ce0_38_Base {
public:
    /* 00 (vtable) */
    /* 04 */

    // data_ov000_020b2838
    /* 00 */ virtual ~UnkStruct_027e0ce0_38_Base();
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1);
    /* 0C */ virtual bool vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 param2);
    /* 10 */ virtual void vfunc_10();
    /* 14 */
};

class UnkStruct_027e0ce0_38_10 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ unk16 mUnk_06;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk16 mUnk_0A;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ TouchControl mUnk_14;
    /* 38 */ unk32 mUnk_38;
    /* 3C */ unk8 mUnk_3C;
    /* 3D */ unk8 mUnk_3D;
    /* 3E */ unk16 mUnk_3E;
    /* 40 */ unk16 mUnk_40;
    /* 42 */ Input mUnk_42;
    /* 48 */ TouchControl mUnk_48;
    /* 6A */ Input mUnk_6A;
    /* 70 */

    UnkStruct_027e0ce0_38_10();

    void func_ov026_020f4870();
};

class UnkStruct_027e0ce0_38_58 {
public:
    /* 000 */ STRUCT_PAD(0x00, 0x338);
    /* 338 */ unk32 mUnk_338; // rope pulled timer
    /* 33C */ unk32 mUnk_33C; // rope pull strength, 0 to 8
    /* 340 */ STRUCT_PAD(0x340, 0x3D4);
    /* 3D4 */

    UnkStruct_027e0ce0_38_58();
};

class UnkStruct_027e0ce0_38_5C {
public:
    /* 000 */ STRUCT_PAD(0x00, 0x1A4);
    /* 1A4 */

    UnkStruct_027e0ce0_38_5C();
};

class UnkStruct_027e0ce0_38_60 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0xD8);
    /* D8 */

    UnkStruct_027e0ce0_38_60();
};

class UnkStruct_027e0ce0_38_158 {
public:
    /* 000 */ STRUCT_PAD(0x00, 0x45C);
    /* 45C */

    UnkStruct_027e0ce0_38_158();

    void func_ov026_020dc2d0();
};

class UnkStruct_027e0ce0_38_174 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x28);
    /* 28 */

    UnkStruct_027e0ce0_38_174();
};

class UnkStruct_027e0ce0_38_19C {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x2C);
    /* 2C */

    UnkStruct_027e0ce0_38_19C();
};

class UnkStruct_027e0ce0_38_1C8 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x34);
    /* 34 */

    UnkStruct_027e0ce0_38_1C8();
};

// train player stuff
class UnkStruct_027e0ce0_38 : public UnkStruct_027e0ce0_38_Base {
public:
    /* 000 (base) */
    /* 04 */ void *mUnk_04;
    /* 08 */ void *mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 010 */ UnkStruct_027e0ce0_38_10 *mUnk_010;
    /* 014 */ Input mUnk_014;
    /* 01C */ VecFx32 mPos;
    /* 028 */ VecFx32 mPrevPos;
    /* 034 */ VecFx32 mVel;
    /* 040 */ VecFx32 mAccel;
    /* 04C */ unk32 mUnk_04C;
    /* 050 */ unk32 mUnk_050;
    /* 054 */ unk16 mUnk_054;
    /* 056 */ unk16 mUnk_056;
    /* 058 */ UnkStruct_027e0ce0_38_58 *mUnk_058; // related to train invicibility state in the dark realm (+0x35C/+0x360)
    /* 05C */ UnkStruct_027e0ce0_38_5C *mUnk_05C;
    /* 060 */ UnkStruct_027e0ce0_38_60 mUnk_060;
    /* 138 */ unk32 mUnk_138;
    /* 13C */ unk32 mUnk_13C;
    /* 140 */ unk32 mUnk_140;
    /* 144 */ unk16 mUnk_144;
    /* 146 */ unk8 mUnk_146;
    /* 147 */ unk8 mUnk_147;
    /* 148 */ unk8 mUnk_148;
    /* 149 */ unk8 mUnk_149;
    /* 14A */ unk8 mUnk_14A;
    /* 14B */ unk8 mUnk_14B;
    /* 14C */ unk8 mUnk_14C;
    /* 150 */ unk32 mUnk_150;
    /* 154 */ unk32 mUnk_154;
    /* 158 */ UnkStruct_027e0ce0_38_158 *mUnk_158;
    /* 15C */ STRUCT_PAD(0x15C, 0x170);
    /* 170 */ unk32 mUnk_170;
    /* 174 */ UnkStruct_027e0ce0_38_174 mUnk_174;
    /* 19C */ UnkStruct_027e0ce0_38_19C mUnk_19C;
    /* 1C8 */ UnkStruct_027e0ce0_38_1C8 mUnk_1C8;
    /* 1FC */ CellAnimObject mUnk_1FC;
    /* 274 */ UnkStruct_ov019_020d24c8_28_258_00 mUnk_274;
    /* 280 */

    UnkStruct_027e0ce0_38(unk32 param1);

    // data_ov026_0213562c
    /* 00 */ virtual ~UnkStruct_027e0ce0_38() override;
    /* 0C */ virtual bool vfunc_0C() override;

    // overlay 26
    void func_ov026_020dc8f0();
    void func_ov026_020de908(UnkStruct_027e0ce0_30_00 *param1);
    void func_ov026_020dc918();
    void func_ov026_020dc9b0();
    void func_ov026_020dc9bc(const UnkStruct_ov001_020c40f4 *param1);
};

class UnkStruct_027e0ce0_40_Base_14 {
public:
    /* 00 */ TouchControl mTouchControl;
    /* 22 */ STRUCT_PAD(0x22, 0x60);
    /* 60 */

    UnkStruct_027e0ce0_40_Base_14() :
        mTouchControl(false) {
        UnkStruct_027e0ce0_40_Base_14 *ptr = this;
        ptr->mTouchControl.Init();
        ptr->func_ov000_02096a9c();
    }

    void func_ov000_02096a9c();
};

class UnkStruct_027e0ce0_40_Base_74 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x5C);
    /* 5C */

    UnkStruct_027e0ce0_40_Base_74() {
        this->func_ov031_020e0c34();
    }

    void func_ov031_020e0c34();
};

class UnkStruct_027e0ce0_40_Base_78 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */

    UnkStruct_027e0ce0_40_Base_78();
    ~UnkStruct_027e0ce0_40_Base_78();
};

class UnkStruct_027e0ce0_40_Base_7C {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x18);
    /* 18 */

    UnkStruct_027e0ce0_40_Base_7C(unk32 param1);
    ~UnkStruct_027e0ce0_40_Base_7C();

    // overlay 0
    void func_ov000_020968e0();
};

class UnkStruct_027e0ce0_40_Base_94_50_Base {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */

    UnkStruct_027e0ce0_40_Base_94_50_Base(unk32 param1, unk32 param2, ActorRefElem *param3, unk32 param4);
};

class UnkStruct_027e0ce0_40_Base_94_50 : public UnkStruct_027e0ce0_40_Base_94_50_Base {
public:
    /* 00 (base) */
    /* 14 */ ActorRefElem mUnk_14[4];
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 *mUnk_2C;

    UnkStruct_027e0ce0_40_Base_94_50(unk32 param1) :
        UnkStruct_027e0ce0_40_Base_94_50_Base(0x01, param1, this->mUnk_14, 0x04),
        mUnk_2C(&this->mUnk_24) {}

    ~UnkStruct_027e0ce0_40_Base_94_50() {}
};

class UnkStruct_027e0ce0_40_Base_94_Base : public UnkStruct_027e0ce0_40_Base_94_50_Base {
public:
    /* 00 (base) */
    /* 14 */ ActorRef mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ ActorRef mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ STRUCT_PAD(0x24, 0x48);
    /* 48 */ ActorRef mUnk_48;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */

    UnkStruct_027e0ce0_40_Base_94_Base(unk32 param1);
};

class UnkStruct_027e0ce0_40_Base_94 : public UnkStruct_027e0ce0_40_Base_94_Base {
public:
    /* 00 (base) */
    /* 50 */ UnkStruct_027e0ce0_40_Base_94_50 *mUnk_50;
    /* 54 */ UnkStruct_027e0ce0_40_Base_94 *mUnk_54;
    /* 58 */ UnkStruct_027e0ce0_40_Base_94_50 *mUnk_58;
    /* 5C */ unk32 mUnk_5C; // seems to be the walking speed of link??
    /* 60 */ unk16 mUnk_60;
    /* 62 */ unk16 mUnk_62;
    /* 64 */ unk8 mUnk_64;
    /* 65 */ unk8 mUnk_65;
    /* 66 */ unk8 mUnk_66;
    /* 67 */ unk8 mUnk_67;
    /* 68 */ unk8 mUnk_68;
    /* 69 */ unk8 mUnk_69;
    /* 6A */ unk8 mUnk_6A;
    /* 6C */ unk32 mUnk_6C;
    /* 70 */

    UnkStruct_027e0ce0_40_Base_94(unk32 param1);
    ~UnkStruct_027e0ce0_40_Base_94();

    // overlay 0
    void func_ov000_0208aee4();
};

typedef u16 UnkFlags3;
enum UnkFlags3_ {
    UnkFlags3_None = 0,
    UnkFlags3_0    = 0,
    UnkFlags3_1    = 1,
    UnkFlags3_2    = 2,
    UnkFlags3_3    = 3,
    UnkFlags3_4    = 4,
    UnkFlags3_5    = 5,
    UnkFlags3_6    = 6,
    UnkFlags3_7    = 7,
    UnkFlags3_8    = 8,
    UnkFlags3_9    = 9,
    UnkFlags3_10   = 10,
    UnkFlags3_11   = 11,
    UnkFlags3_Max  = 12,
};

class UnkStruct_027e0ce0_40_Base {
public:
    /* 000 */ unk32 mUnk_000;
    /* 004 */ void *mUnk_004;
    /* 008 */ ItemManager *mpItemManager;
    /* 00C */ Input mButtons;
    /* 012 */ unk16 mUnk_012;
    /* 014 */ UnkStruct_027e0ce0_40_Base_14 mUnk_014;
    /* 074 */ UnkStruct_027e0ce0_40_Base_74 *mUnk_074;
    /* 078 */ UnkStruct_027e0ce0_40_Base_78 *mUnk_078;
    /* 07C */ UnkStruct_027e0ce0_40_Base_7C mUnk_07C;
    /* 094 */ UnkStruct_027e0ce0_40_Base_94 mUnk_094;
    /* 104 */ UnkFlags3 mUnk_104; // set to 0 on idle, set to 3 when pulling out an item
    /* 106 */ unk8 mUnk_106;
    /* 107 */ unk8 mUnk_107;
    /* 108 */

    UnkStruct_027e0ce0_40_Base(unk32 param1, void *param2, ItemManager *pItemMgr);
    ~UnkStruct_027e0ce0_40_Base();

    void func_ov001_020bc0e0(bool param1);
};

class UnkStruct_027e0ce0_40_108_Base : public LinkList<UnkStruct_027e0ce0_40_108_Base> {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */

    UnkStruct_027e0ce0_40_108_Base() {
        this->SetPrev(NULL);
    }

    // data_ov101_02183908
    /* 00 */ virtual void vfunc_00() = 0;
};

class UnkStruct_027e0ce0_40_108 : public UnkStruct_027e0ce0_40_108_Base {
public:
    /* 00 (base) */
    /* 0C */ STRUCT_PAD(0x0C, 0x40);
    /* 40 */

    UnkStruct_027e0ce0_40_108() {}

    // data_ov031_02112b60
    /* 00 */ virtual void vfunc_00() override;
};

class UnkStruct_027e0ce0_40_14C {
    /* 00 */ STRUCT_PAD(0x00, 0x94);
    /* 94 */

    UnkStruct_027e0ce0_40_14C();
};

class UnkStruct_027e0ce0_40_150 {
    /* 00 */ STRUCT_PAD(0x00, 0x0C);
    /* 0C */

    UnkStruct_027e0ce0_40_150();
};

class UnkStruct_027e0ce0_40_328 {
    /* 000 */ STRUCT_PAD(0x00, 0x154);
    /* 154 */

    UnkStruct_027e0ce0_40_328();
};

// land player stuff
class UnkStruct_027e0ce0_40 : public UnkStruct_027e0ce0_40_Base {
public:
    /* 000 (base) */
    /* 108 */ UnkStruct_027e0ce0_40_108 mUnk_108;
    /* 148 */ void *mUnk_148;
    /* 14C */ UnkStruct_027e0ce0_40_14C *mUnk_14C;
    /* 150 */ UnkStruct_027e0ce0_40_150 *mUnk_150;
    /* 154 */ PlayerLinkActor mPlayer;
    /* 328 */ UnkStruct_027e0ce0_40_328 *mUnk_328;
    /* 32C */ PlayerLinkActor *mpPlayer;           // set to mPlayer
    /* 330 */ UnkStruct_027e0ce0_40_328 *mUnk_330; // set to mUnk_328
    /* 334 */ ItemFlag mEquippedItem;
    /* 338 */ bool mIsSceneTowerInteriorStairs;
    /* 339 */ bool mIsSceneTowerExteriorStairs;
    /* 33A */ bool mIsSceneBossByrne;
    /* 33B */ unk8 mUnk_33B;
    /* 33C */

    UnkStruct_027e0ce0_40(bool param1, UnkStruct_027e0ce0_20 *param2, unk32 **param3, ItemManager *pItemMgr);
    ~UnkStruct_027e0ce0_40();

    // overlay 101
    bool func_ov101_02182fb4(bool param1);
    void func_ov101_02183004();
    void func_ov101_02183024(const UnkStruct_ov001_020c40f4 *param1, const UnkStruct_ov001_020c40f4 *param2, unk32 param3,
                             unk32 param4, ItemManager *pItemMgr, UnkStruct_027e0ce0_30 *param6, bool param7, bool param8);
};

union UnkStruct_027e0478 {
    UnkStruct_027e0ce0_38 train;
    UnkStruct_027e0ce0_40 land;
};

extern UnkStruct_027e0478 data_027e0478;

class UnkStruct_027e0ce0_Base {
public:
    /* 00 */ u8 mHealth;
    /* 01 */ u8 mHealthMax;
    /* 02 */

    UnkStruct_027e0ce0_Base();
};

// PlayerManager?
class UnkStruct_027e0ce0 : public AutoInstance<UnkStruct_027e0ce0>, public UnkStruct_027e0ce0_Base {
public:
    /* 02 */ bool mUnk_02;
    /* 03 */ bool mUnk_03;
    /* 04 */ unk32 *mUnk_04;
    /* 08 */ bool mUnk_08;
    /* 0C */ UnkStruct_027e0ce0_0C mUnk_0C;
    /* 1C */ UnkStruct_027e0ce0_1C *mUnk_1C;
    /* 20 */ UnkStruct_027e0ce0_20 *mUnk_20;
    /* 24 */ UnkStruct_027e0ce0_24 *mUnk_24; // only for battle mode
    /* 28 */ ItemManager *mUnk_28;           // only for title screen or adventure mode
    /* 2C */ ItemManager *mUnk_2C;           // same as above
    /* 30 */ UnkStruct_027e0ce0_30 *mUnk_30;
    /* 34 */ UnkStruct_027e0ce0_34 *mUnk_34; // only for adventure mode
    /* 38 */ UnkStruct_027e0ce0_38 *mUnk_38; // pointer to data_027e0478 when on train
    /* 3C */ UnkStruct_027e0ce0_3C *mUnk_3C; // cutscene related
    /* 40 */ UnkStruct_027e0ce0_40 *mUnk_40; // pointer to data_027e0478 when on land
    /* 44 */

    UnkStruct_027e0ce0();
    ~UnkStruct_027e0ce0();

    // itcm
    VecFx32 *func_01fff148(unk32 param1);
    bool func_01fff1a4();
    bool func_01fff1e0();

    // overlay 0
    void func_ov000_0208a218(InvImportData *pInvData);
    void func_ov000_0208a2c4(unk32 param1, unk32 param2);
    void func_ov000_0208a318(unk32 param1, unk32 param2, unk32 param3);
    void func_ov000_0208bbd4(unk32 param1, VecFx32 *param2, u16 param3);
    bool func_ov000_0208bc1c(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);
    void func_ov000_0208bc9c(unk32 param1, unk32 param2);
    void func_ov000_0208bd30(bool param1, unk32 param2, unk32 param3, unk32 param4);
    bool func_ov000_0208be70(VecFx32 param1);
    G3d_Model *func_ov000_0208ed30(unk32 param1, unk32 param2, char *param3);

    static UnkStruct_027e0ce0_34 *func_ov000_0205c904();

    // overlay 1
    void func_ov001_020bc4d8(InvImportData *pInvData, unk32 param2, unk32 param3);
    void func_ov001_020bc524(bool param1);
    void func_ov001_020bc5f8();
    void func_ov001_020bc65c();
    void func_ov001_020bc69c();
    void func_ov001_020bc6d8(unk32 param1, const UnkStruct_ov001_020c40f4 *param2);
    void func_ov001_020bc6e8(const UnkStruct_ov001_020c40f4 *param1);
    void func_ov001_020bc6fc(const UnkStruct_ov001_020c40f4 *param1, const UnkStruct_ov001_020c40f4 *param2, unk32 param3,
                             unk32 param4);

    static UnkStruct_027e0ce0 *Create();
    static void Destroy();

    // overlay 17
    void func_ov017_020bd69c();
};

extern UnkStruct_027e0ce0 *data_027e0ce0;
