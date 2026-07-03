#pragma once

#include "Actor/Actor.hpp"
#include "LinkList.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_ov000_0208f820.hpp"
#include "math.hpp"
#include "types.h"

#include <nns/g3d/g3d.h>

class UnkStruct_027e0ce0_40;
class PlayerActorBase_70;

typedef s32 PlayerCharacter;
enum PlayerCharacter_ {
    /* 0 */ PlayerCharacter_Link    = 0,
    /* 1 */ PlayerCharacter_Phantom = 1,
    /* 2 */ PlayerCharacter_Zelda   = 2,
    /* 3 */ PlayerCharacter_Max,
};

struct UnkStruct_ov000_020ab4dc {
    /* 00 */ const char *mpDirectory;
    /* 04 */ const char mUnk_04[16];
    /* 14 */ const char mUnk_14[16];
    /* 24 */ const char mUnk_24[16];
    /* 34 */ const char mUnk_34[16];
    /* 44 */ const char mUnk_44[16];
    /* 54 */ STRUCT_PAD(0x54, 0x9C);
    /* 9C */
};
extern UnkStruct_ov000_020ab4dc data_ov000_020ab4dc[PlayerCharacter_Max];

extern "C" G3d_Model *func_ov000_0208eadc(PlayerCharacter, unk32, bool);
extern "C" G3d_Model *func_ov000_0208eb44(PlayerCharacter, unk32, bool);

static inline bool PlayerCharacter_IsNotLink(PlayerCharacter character) {
    bool ret = false;

    if (character != PlayerCharacter_Link) {
        ret = true;
    }

    return ret;
}

static inline bool PlayerCharacter_IsNotLink2(PlayerCharacter character) {
    bool ret = true;

    if (character == PlayerCharacter_Link) {
        ret = false;
    }

    return ret;
}

class ModelRender_Derived3 : public ModelRender {
public:
    /* 00 (base) */
    /* 60 */

    ModelRender_Derived3(PlayerCharacter character, G3d_Model *pModel) :
        ModelRender(pModel) {}

    // data_ov000_020b2b44
    /* 00 */ virtual ~ModelRender_Derived3() override {}
};

class ModelRender_Derived4 : public ModelRender_Derived3 {
public:
    /* 00 (base) */
    /* 60 */ STRUCT_PAD(0x60, 0xC0);
    /* C0 */

    ModelRender_Derived4(PlayerCharacter character, unk32 param2, G3d_Model *pModel, G3d_BoneMtxStruct *cacheJntAnm);

    // data_ov000_020b2b70
    /* 00 */ virtual ~ModelRender_Derived4() override {}
    /* 1C */ virtual void vfunc_1C(UnkSystem4_vfunc_1C *param1) override;
};

class ModelRender_Derived5 : public ModelRender_Derived3 {
public:
    /* 00 (base) */
    /* 60 */ STRUCT_PAD(0x60, 0xA8);
    /* A8 */

    ModelRender_Derived5(PlayerCharacter character, G3d_Model *pModel, G3d_BoneMtxStruct *cacheJntAnm);

    // data_ov093_021787e8
    /* 00 */ virtual ~ModelRender_Derived5() override {}
    /* 1C */ virtual void vfunc_1C(UnkSystem4_vfunc_1C *param1) override;
};

class PlayerActorBase_5C {
private:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ void *mUnk_10;
    /* 14 */
};

class PlayerActorBase_70_0C {
private:
    /* 00 */ G3d_Model *mpModel1;
    /* 04 */ G3d_Model *mpModel2;
    /* 08 */ ModelRender_Derived3 *mUnk_08;
    /* 0C */ ModelRender_Derived3 *mUnk_0C;
    /* 10 */

public:
    // clang-format off
    G3d_Model* GetModel1() const { return this->mpModel1; }
    G3d_Model* GetModel2() const { return this->mpModel2; }
    ModelRender_Derived3* GetUnk08() const { return this->mUnk_08; }
    ModelRender_Derived3* GetUnk0C() const { return this->mUnk_0C; }
    // clang-format on

    PlayerActorBase_70_0C(PlayerCharacter character, unk32 param2) :
        mpModel1(func_ov000_0208eadc(character, param2, true)),
        mpModel2(func_ov000_0208eb44(character, param2, true)) {
        ModelRender_Derived3 *unk_08;
        ModelRender_Derived3 *unk_0C;
        G3d_Model *pModel;

        {
            pModel = mpModel1;

            if (!PlayerCharacter_IsNotLink2(character)) {
                unk_08 = new(HeapIndex_1) ModelRender_Derived4(character, param2, pModel, NULL);
            } else {
                unk_08 = new(HeapIndex_1) ModelRender_Derived5(character, pModel, NULL);
            }

            this->mUnk_08 = unk_08;
        }

        {
            pModel = mpModel2;

            if (!PlayerCharacter_IsNotLink(character)) {
                unk_0C = new(HeapIndex_1) ModelRender_Derived4(character, param2, pModel, unk_08->mRenderObj.cacheJntAnm);
            } else {
                unk_0C = new(HeapIndex_1) ModelRender_Derived5(character, pModel, unk_08->mRenderObj.cacheJntAnm);
            }

            this->mUnk_0C = unk_0C;
        }
    }
};

class PlayerActorBase_70_1C : public UnkStruct_PlayerGet_74_base {
private:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x2C);
    /* 2C */

public:
    PlayerActorBase_70_1C(PlayerActorBase_70 *pParent);

    // data_ov000_020b2b9c
    /* 00 */ virtual void vfunc_00(unk32 param1, unk32 param2, unk32 param3) override;
};

class PlayerActorBase_70_30 {
private:
    /* 00 */ STRUCT_PAD(0x00, 0x1C);
    /* 1C */

public:
    PlayerActorBase_70_30(PlayerCharacter character, ModelRender_UnkSystem1 *param2, ModelRender_UnkSystem1 *param3);
};

class PlayerActorBase_70_6C {
private:
    /* 00 */ UnkSystem5 mUnk_00;
    /* 20 */ STRUCT_PAD(0x20, 0x70);
    /* 70 */

public:
    PlayerActorBase_70_6C(PlayerCharacter character, void *pBTX, G3d_Model *pModel);
    ~PlayerActorBase_70_6C();
};

class PlayerActorBase_70_DC {
private:
    /* 00 */ UnkSystem5 mUnk_00;
    /* 20 */ STRUCT_PAD(0x20, 0x60);
    /* 60 */

public:
    PlayerActorBase_70_DC(PlayerCharacter character, G3d_Model *pModel);
    ~PlayerActorBase_70_DC();
};

class PlayerActorBase_70_E0 {
private:
    /* 00 */ unk32 mUnk_00;

public:
    PlayerActorBase_70_E0(ModelRender_Derived3 *pUnk_08, PlayerCharacter character) {
        unk32 value;

        if (pUnk_08->mpModel != NULL) {
            value = pUnk_08->func_ov000_02057f18(data_ov000_020ab4dc[character].mUnk_14);
        } else {
            value = -1;
        }

        this->mUnk_00 = value;
    }
};

class PlayerActorBase_70_E4 {
private:
    /* 00 */ STRUCT_PAD(0x00, 0x30);
    /* 30 */

public:
    PlayerActorBase_70_E4();
};

class PlayerActorBase_70_134 {
private:
    /* 00 */ STRUCT_PAD(0x00, 0x28);
    /* 28 */

public:
    PlayerActorBase_70_134();
};

struct UnkStruct_func_ov000_020830d4 {
    u16 mUnk_00;
    u16 mUnk_04;
    u8 mUnk_08;
    u32 mUnk_0C;
};

struct UnkStruct_func_ov001_020bbe18 {
    u16 mUnk_00;
};

class PlayerActorBase_70 {
private:
    /* 000 */ BOOL mIsNotLink;
    /* 004 */ PlayerCharacter mCharacter;
    /* 008 */ unk32 mUnk_008;
    /* 014 */ PlayerActorBase_70_0C mUnk_00C;
    /* 01C */ PlayerActorBase_70_1C *mUnk_01C;
    /* 020 */ ModelRender_UnkSystem1 *mUnk_020;
    /* 024 */ ModelRender_UnkSystem1 *mUnk_024;
    /* 028 */ ModelRender_UnkSystem1 *mUnk_028;
    /* 02C */ ModelRender_UnkSystem1 *mUnk_02C;
    /* 030 */ PlayerActorBase_70_30 mUnk_030;
    /* 04C */ PlayerActorBase_70_30 mUnk_04C;
    /* 068 */ unk16 mUnk_068;
    /* 06A */ unk16 mUnk_06A;
    /* 06C */ PlayerActorBase_70_6C mUnk_06C;
    /* 0DC */ PlayerActorBase_70_DC *mUnk_0DC;
    /* 0E0 */ PlayerActorBase_70_E0 mUnk_0E0;
    /* 0E4 */ PlayerActorBase_70_E4 mUnk_0E4;
    /* 114 */ Mat4x3p *mUnk_114;
    /* 118 */ unk32 mUnk_118;
    /* 11C */ unk32 mUnk_11C;
    /* 120 */ unk32 mUnk_120;
    /* 124 */ unk16 mUnk_124;
    /* 126 */ bool mUnk_126;
    /* 127 */ bool mUnk_127;
    /* 128 */ bool mUnk_128;
    /* 129 */ bool mUnk_129;
    /* 12A */ bool mUnk_12A;
    /* 12B */ bool mUnk_12B;
    /* 12C */ bool mUnk_12C;
    /* 12D */ bool mUnk_12D;
    /* 12E */ bool mUnk_12E;
    /* 12F */ bool mUnk_12F;
    /* 130 */ bool mUnk_130;
    /* 131 */ bool mUnk_131;
    /* 132 */ unk16 mUnk_132;
    /* 134 */ PlayerActorBase_70_134 mUnk_134;
    /* 15C */ unk32 mUnk_15C;
    /* 160 */

public:
    PlayerActorBase_70(PlayerCharacter character, unk32 param2);
    ~PlayerActorBase_70();

    // overlay 0
    void func_ov000_02082e78(unk32 param1, unk32 param2, unk32 param3, unk32 param4);
    void func_ov000_020830d4(UnkStruct_func_ov001_020bbe18 param1, u32 param2, u8 param3, unk32 param4);

    // overlay 1
    void func_ov001_020bbe18(unk32 param1, UnkStruct_func_ov001_020bbe18 param2, u32 param3, u8 param4);
};

class PlayerActorBase_74 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x34);
    /* 34 */

    PlayerActorBase_74();
};

class PlayerActorBase {
public:
    /* 00 */ VecFx32 mPos;
    /* 0C */ VecFx32 mPrevPos;
    /* 18 */ VecFx32 mVel;
    /* 24 */ VecFx32 mAccel;
    /* 30 */ u16 mAngle;
    /* 32 */ u8 mInvincibilityTimer;
    /* 33 */ u8 mInvincibilityIconTimer; // the blinking icon on top-screen
    /* 34 */ ActorRef mGrabActor;
    /* 38 */ UnkStruct_PlayerGet_64 mUnk_38;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ unk32 mUnk_48;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ ActorGrabParams mUnk_50;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ UnkStruct_027e0ce0_40 *mUnk_58;
    /* 5C */ PlayerActorBase_5C mUnk_5C;
    /* 70 */ PlayerActorBase_70 *mUnk_70;
    /* 74 */ PlayerActorBase_74 *mUnk_74;
    /* 78 */ STRUCT_PAD(0x78, 0x84);
    /* 84 */ UnkStruct_ov019_020d24c8_28_258 mUnk_84;
    /* 9C */

    PlayerActorBase();
};

class PlayerActor_9C {
public:
    /* 000 (vtable) */
    /* 004 */ STRUCT_PAD(0x04, 0x154);
    /* 154 */

    PlayerActor_9C();

    // data_ov000_020b2a8c
    /* 00 */ virtual ~PlayerActor_9C();
};

class PlayerActor_A0_38;

class PlayerActor_A0_38_04_Base : public LinkList<PlayerActor_A0_38_04_Base> {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ PlayerActor_A0_38 *mUnk_10;
    /* 14 */

    PlayerActor_A0_38_04_Base(PlayerActor_A0_38 *param1) {
        this->mUnk_0C = 0;
        this->mUnk_10 = param1;
    }

    /* 00 */ virtual void vfunc_00();
};

class PlayerActor_A0_38_04 : public PlayerActor_A0_38_04_Base {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */

    PlayerActor_A0_38_04(PlayerActor_A0_38 *param1) :
        PlayerActor_A0_38_04_Base(param1) {}

    // data_ov024_020d8250
    /* 00 */ virtual void vfunc_00() override;
};

class PlayerActor_A0_38_18 : public PlayerActor_A0_38_04_Base {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */

    PlayerActor_A0_38_18(PlayerActor_A0_38 *param1) :
        PlayerActor_A0_38_04_Base(param1) {}

    // data_ov024_020d8244
    /* 00 */ virtual void vfunc_00() override;
};

class PlayerActor_A0_38 {
public:
    /* 00 */ unk16 mUnk_00;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ PlayerActor_A0_38_04 mUnk_04;
    /* 18 */ PlayerActor_A0_38_18 mUnk_18;
    /* 2C */ Vec2s mUnk_2C;
    /* 30 */ u16 mUnk_30;
    /* 32 */ unk16 mUnk_32;
    /* 34 */ u16 mUnk_34;
    /* 36 */ bool mUnk_36;
    /* 37 */ bool mUnk_37;
    /* 38 */

    PlayerActor_A0_38();
    ~PlayerActor_A0_38();

    void func_ov024_020d19d8();
};

class PlayerActor_A0 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x38);
    /* 38 */ PlayerActor_A0_38 *mUnk_38;
    /* 3C */ STRUCT_PAD(0x3C, 0x94);
    /* 94 */

    PlayerActor_A0();
};

class PlayerActor_A4 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk8 mUnk_08;
    /* 09 */ unk8 mUnk_09;
    /* 0A */ unk8 mUnk_0A;
    /* 0B */ unk8 mUnk_0B;
    /* 0C */
};

class PlayerActor_134 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */

    PlayerActor_134() {
        this->mUnk_00 = 0;
        this->mUnk_04 = 0;
    }
};

class PlayerActor_1B0 : public UnkSystem7 {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    PlayerActor_1B0();
    ~PlayerActor_1B0();
};

class PlayerActor : public PlayerActorBase {
public:
    /* 000 (base) */
    /* 09C */ PlayerActor_9C *mUnk_9C;
    /* 0A0 */ PlayerActor_A0 *mUnk_A0;
    /* 0A4 */ PlayerActor_A4 mUnk_A4;
    /* 0B0 */ unk32 mUnk_B0;
    /* 0B4 */ unk8 mUnk_B4;
    /* 0B5 */ unk8 mUnk_B5;
    /* 0B6 */ unk8 mUnk_B6;
    /* 0B7 */ unk8 mUnk_B7;
    /* 0B8 */ unk8 mUnk_B8;
    /* 0B9 */ unk8 mUnk_B9;
    /* 0BA */ unk8 mUnk_BA;
    /* 0BB */ unk8 mUnk_BB;
    /* 0BC */ CellAnimObject mUnk_BC;
    /* 134 */ PlayerActor_134 *mUnk_134;
    /* 138 */ CellAnimObject mUnk_138; // sanctuary link icon animation
    /* 1B0 */ PlayerActor_1B0 mUnk_1B0[3];
    /* 1D4 */

    PlayerActor(); //! TODO: params
};
