#pragma once

#include "global.h"
#include "types.h"

#include "Actor/ActorRef.hpp"
#include "Item/ItemManager.hpp"
#include "LinkList.hpp"
#include "Player/Player.hpp"
#include "Player/TouchControl.hpp"
#include "Save/SaveManager.hpp"
#include "System/SysNew.hpp"
#include "input.hpp"

#include <nitro/math.h>

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
    /* 44 */

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

class UnkStruct_027e0ce0_38_Base {
public:
    /* 00 (vtable) */
    /* 04 */ void *mUnk_04;
    /* 08 */ void *mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */

    UnkStruct_027e0ce0_38_Base() {
        this->mUnk_04 = NULL;
        this->mUnk_08 = NULL;
        this->mUnk_0C = 0;
    }

    // data_ov000_020b2838
    /* 00 */ virtual ~UnkStruct_027e0ce0_38_Base();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
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

    UnkStruct_027e0ce0_38();

    // data_ov026_0213562c
    /* 00 */ virtual ~UnkStruct_027e0ce0_38() override;
    /* 0C */ virtual void vfunc_0C() override;
};

class UnkStruct_027e0ce0_40_Base_14 {
public:
    /* 00 */ TouchControl mTouchControl;
    /* 22 */ STRUCT_PAD(0x22, 0x60);
    /* 60 */

    UnkStruct_027e0ce0_40_Base_14();
};

class UnkStruct_027e0ce0_40_Base_74 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x5C);
    /* 5C */

    UnkStruct_027e0ce0_40_Base_74();
};

class UnkStruct_027e0ce0_40_Base_78 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x04);
    /* 04 */

    UnkStruct_027e0ce0_40_Base_78();
};

class UnkStruct_027e0ce0_40_Base_7C {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x18);
    /* 18 */

    UnkStruct_027e0ce0_40_Base_7C();
};

class UnkStruct_027e0ce0_40_Base_94 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x14);
    /* 14 */ ActorRef mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ ActorRef mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ STRUCT_PAD(0x24, 0x48);
    /* 48 */ ActorRef mUnk_48;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ unk32 mUnk_58;
    /* 5C */ unk32 mUnk_5C; // seems to be the walking speed of link??
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk32 mUnk_64;
    /* 68 */ unk32 mUnk_68;
    /* 6C */ unk32 mUnk_6C;
    /* 70 */

    UnkStruct_027e0ce0_40_Base_94();
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
    /* 104 */ unk16 mUnk_104; // set to 0 on idle, set to 3 when pulling out an item
    /* 106 */ unk8 mUnk_106;
    /* 107 */ unk8 mUnk_107;
    /* 108 */

    UnkStruct_027e0ce0_40_Base(unk32 param1, void *param2, ItemManager *param3);
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
    /* 154 */ PlayerActor mPlayer;
    /* 328 */ UnkStruct_027e0ce0_40_328 *mUnk_328;
    /* 32C */ PlayerActor *mpPlayer;               // set to mPlayer
    /* 330 */ UnkStruct_027e0ce0_40_328 *mUnk_330; // set to mUnk_328
    /* 334 */ ItemFlag mEquippedItem;
    /* 338 */ bool mIsSceneTowerInteriorStairs;
    /* 339 */ bool mIsSceneTowerExteriorStairs;
    /* 33A */ bool mIsSceneBossByrne;
    /* 33B */ unk8 mUnk_33B;
    /* 33C */

    // param2 is UnkStruct_027e0ce0::mUnk_20
    // param3 is UnkStruct_027e0ce0::mUnk_04
    // param4 is UnkStruct_027e0ce0::mUnk_28
    UnkStruct_027e0ce0_40(unk32 param1, void *param2, void *param3, ItemManager *param4);
};

union UnkStruct_027e0478 {
    UnkStruct_027e0ce0_38 train;
    UnkStruct_027e0ce0_40 land;
};

extern UnkStruct_027e0478 data_027e0478;

class UnkStruct_027e0ce0_3C {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x98);
    /* 98 */

    UnkStruct_027e0ce0_3C();
};

// PlayerManager?
class UnkStruct_027e0ce0 {
public:
    /* 00 */ unk8 mHealth;
    /* 01 */ unk8 mHealthMax;
    /* 02 */ unk8 mUnk_02;
    /* 03 */ unk8 mUnk_03;
    /* 04 */ unk32 *mUnk_04;
    /* 08 */ unk32 *mUnk_08;
    /* 0C */ unk32 *mUnk_0C; // vtable
    /* 10 */ unk32 *mUnk_10;
    /* 14 */ unk32 *mUnk_14;
    /* 18 */ unk32 *mUnk_18;
    /* 1C */ unk32 *mUnk_1C;
    /* 20 */ unk32 *mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ ItemManager *mUnk_28;
    /* 2C */ ItemManager *mUnk_2C; // same as above
    /* 30 */ unk32 *mUnk_30;       // ?
    /* 34 */ UnkStruct_027e0ce0_34 *mUnk_34;
    /* 38 */ UnkStruct_027e0ce0_38 *mUnk_38; // pointer to data_027e0478 when on the train
    /* 3C */ UnkStruct_027e0ce0_3C *mUnk_3C; // cutscene related
    /* 40 */ UnkStruct_027e0ce0_40 *mUnk_40; // pointer to data_027e0478 when not on the train
    /* 44 */

    VecFx32 *func_01fff148(unk32 param1);
    bool func_01fff1a4();
    bool func_01fff1e0();

    // overlay 0
    void func_ov000_0208a318(unk32 param1, unk32 param2, unk32 param3);
    void func_ov000_0208bbd4(unk32 param1, VecFx32 *param2, u16 param3);

    void func_ov000_0208bbd4(unk32 param1, VecFx32 *param2, void *param3);
    void func_ov000_0208bc9c(unk32 param1, unk32 param2);

    static UnkStruct_027e0ce0_34 *func_ov000_0205c904();

    // overlay 17
    void func_ov017_020bd69c();
};

extern UnkStruct_027e0ce0 *data_027e0ce0;
