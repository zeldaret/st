#pragma once

#include "Actor/ActorRef.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/Common.hpp"
#include "global.h"
#include "math.hpp"

#include "nitro/fx.h"
#include "types.h"

#include <nns/g3d/g3d.h>

class Actor_C4;
class UnkStruct_027e0ce0_30_00;
class UnkStruct_ov001_020c40f4;
class PlayerActorBase;
class PlayerLinkActor_A0_28;
class ItemManager;

struct ActorGrabParams;
extern "C" void func_ov000_0205d500(ActorGrabParams *, unk32, unk32);
bool PlayerCharacter_IsNotLink(s32 character);

struct ActorGrabParams {
    /* 00 */ ActorRef mUnk_00;
    /* 04 */

    ActorGrabParams() {}

    ActorGrabParams(unk32 param2, unk32 param3) {
        ActorGrabParams local_1c;
        func_ov000_0205d500(&local_1c, param3, param2);
        *this = local_1c;
    }

    void operator=(ActorGrabParams &from) {
        *(u32 *) this = *(u32 *) &from;
    }
};

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
    /* 54 */ PAD(0x54, 0x66);
    /* 66 */ s16 mUnk_66;
    /* 66 */ unk16 mUnk_68;
    /* 66 */ unk16 mUnk_6A;
    /* 66 */ unk16 mUnk_6C;
    /* 66 */ unk16 mUnk_6E;
    /* 66 */ unk16 mUnk_70;
    /* 66 */ unk16 mUnk_72;
    /* 74 */ s16 mUnk_74;
    /* 78 */ PAD(0x76, 0x83);
    /* 83 */ u8 mUnk_83;
    /* 83 */ u8 mUnk_84;
    /* 83 */ u8 mUnk_85;
    /* 86 */ u8 mUnk_86[7];
    /* 8D */ PAD(0x8D, 0x98);
    /* 98 */ unk32 mUnk_98;
    /* 9C */
};
extern const UnkStruct_ov000_020ab4dc data_ov000_020ab4dc[PlayerCharacter_Max];

inline const UnkStruct_ov000_020ab4dc *Get_ov000_020ab4dc(PlayerCharacter index) {
    return &data_ov000_020ab4dc[index];
}

extern "C" G3d_Model *func_ov000_0208eadc(PlayerCharacter, unk32, bool);
extern "C" G3d_Model *func_ov000_0208eb44(PlayerCharacter, unk32, bool);

inline bool PlayerCharacter_IsNotLink(PlayerCharacter character) {
    bool ret = false;

    if (character != PlayerCharacter_Link) {
        ret = true;
    }

    return ret;
}

inline bool PlayerCharacter_IsNotLink2(PlayerCharacter character) {
    bool ret = true;

    if (character == PlayerCharacter_Link) {
        ret = false;
    }

    return ret;
}

class UnkStruct_PlayerGet_64 {
public:
    /* 00 */ ActorRef *mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ u16 mUnk_08; // makes link invisible when set
    /* 0A */ unk16 mUnk_0A;
    /* 0C */

    UnkStruct_PlayerGet_64(void *param1);
    ~UnkStruct_PlayerGet_64();

    void func_ov000_0208a100();
};

class ModelRender_Derived3 : public ModelRender {
public:
    /* 00 (base) */
    /* 60 */

    ModelRender_Derived3(PlayerCharacter character, G3d_Model *pModel);

    // data_ov000_020b2b44
    /* 00 */ virtual ~ModelRender_Derived3() override {}

    void func_ov000_0208c058(unk32 param1);
};

class ModelRender_Derived4 : public ModelRender_Derived3 {
public:
    /* 00 (base) */
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk32 mUnk_64;
    /* 68 */ VecFx32 mUnk_68;
    /* 74 */ unk32 mUnk_74;
    /* 78 */ unk32 mUnk_78;
    /* 7C */ unk32 mUnk_7C[9];
    /* A0 */ unk32 mUnk_A0[7];
    /* BC */ MtxFx43 *mUnk_BC;
    /* C0 */

    ModelRender_Derived4(PlayerCharacter character, unk32 param2, G3d_Model *pModel, G3d_BoneMtxStruct *pCacheJntAnm);

    // data_ov000_020b2b70
    /* 1C */ virtual void vfunc_1C(G3d_RenderState *param1) override;

    // overlay 0
    void func_ov000_02057fe8(UnkAngleStruct param1, UnkAngleStruct param2, VecFx32 *param3);

    // overlay 93
    void func_ov093_0216ca38(bool param1, bool param2, bool param3, bool param4);
};

class ModelRender_Derived5 : public ModelRender_Derived3 {
public:
    /* 00 (base) */
    /* 60 */ PAD(0x60, 0xA8);
    /* A8 */

    ModelRender_Derived5(PlayerCharacter character, G3d_Model *pModel, G3d_BoneMtxStruct *pCacheJntAnm);

    // data_ov093_021787e8
    /* 00 */ virtual ~ModelRender_Derived5() override {}
    /* 1C */ virtual void vfunc_1C(G3d_RenderState *param1) override;
};

class PlayerActorBase_38 {
public:
    /* 00 */ UnkStruct_PlayerGet_64 mUnk_00;

    PlayerActorBase_38(void *param1) :
        mUnk_00(param1) {
        this->mUnk_00.mUnk_08 = 0;
    }

    void Reset() {
        this->mUnk_00.~UnkStruct_PlayerGet_64();
        this->mUnk_00.mUnk_08 = 0;
    }
};

class PlayerActorBase_5C {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ void *mUnk_10;
    /* 14 */

    void func_ov000_02089dc4();
    void func_ov000_02089f0c(bool param1);
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

    ModelRender_Derived4 *GetUnk08OrUnk0C(bool cond) const {
        if (cond) {
            return (ModelRender_Derived4 *) this->GetUnk0C();
        }

        return (ModelRender_Derived4 *) this->GetUnk08();
    }

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
    /* 04 */ PAD(0x04, 0x2C);
    /* 2C */

public:
    PlayerActorBase_70_1C(PlayerActorBase_70 *pParent);

    // data_ov000_020b2b9c
    /* 00 */ virtual void vfunc_00(unk32 param1, unk32 param2, unk32 param3) override;

    // overlay 0
    void func_ov000_0208c7f0();
    void func_ov000_0208c7b0(VecFx32 *param1, UnkAngleStruct param2);
};

class PlayerActorBase_70_30 {
private:
    /* 00 */ PAD(0x00, 0x1C);
    /* 1C */

public:
    PlayerActorBase_70_30(PlayerCharacter character, ModelRender_UnkSystem1 *param2, ModelRender_UnkSystem1 *param3);
};

class PlayerActorBase_70_6C {
private:
    /* 00 */ UnkSystem5 mUnk_00;
    /* 20 */ PAD(0x20, 0x70);
    /* 70 */

public:
    PlayerActorBase_70_6C(PlayerCharacter character, void *pBTX, G3d_Model *pModel);
    ~PlayerActorBase_70_6C();
};

class PlayerActorBase_70_DC {
private:
    /* 00 */ UnkSystem5 mUnk_00;
    /* 20 */ PAD(0x20, 0x60);
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
public:
    /* 00 */ VecFx32 mUnk_00;
    /* 0C */ VecFx32 mUnk_0C[PlayerCharacter_Max];
    /* 30 */

    PlayerActorBase_70_E4();
};

class PlayerActorBase_70_134 {
private:
    /* 00 */ PAD(0x00, 0x28);
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

class PlayerActorBase_70 {
public:
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
    /* 114 */ MtxFx43 *mUnk_114; // allocated array, size = PlayerCharacter_Max
    /* 118 */ VecFx32Cpp mUnk_118;
    /* 124 */ UnkAngleStruct mUnk_124;
    /* 126 */ s8 mUnk_126;
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
    /* 132 */ s16 mUnk_132;
    /* 134 */ PlayerActorBase_70_134 mUnk_134;
    /* 15C */ unk32 mUnk_15C;
    /* 160 */

    PlayerActorBase_70(PlayerCharacter character, unk32 param2);
    ~PlayerActorBase_70();

    // overlay 0
    void func_ov000_02082e54();
    void func_ov000_02082e78(unk32 param1, unk32 param2, unk32 param3, unk32 param4);
    void func_ov000_020830d4(UnkAngleStruct param1, u32 param2, u8 param3, PlayerLinkActor_A0_28 *param4);
    void func_ov000_020830a4(unk32 param1, PlayerCharacter character, unk32 param3, unk32 param4);
    void func_ov000_020830a4(unk32 param1, PlayerCharacter character, unk32 param3, unk32 param4, unk32);

    // overlay 1
    void func_ov001_020bbe18(unk32 param1, UnkAngleStruct param2, u32 param3, u8 param4);

    // overlay 17
    void func_ov017_020bbaa8(VecFx32 *param1, UnkAngleStruct param2);
    void func_ov017_020bbcd8(VecFx32 *param1, UnkAngleStruct param2);
    void func_ov017_020bbef4(VecFx32 *param1, UnkAngleStruct param2);
    void func_ov017_020bbf6c();
};

class PlayerActorBase_74 {
private:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ VecFx32 mUnk_04[2];
    /* 1C */ VecFx32 mUnk_1C[2];
    /* 34 */

public:
    PlayerActorBase_74() {
        this->func_ov001_020db190();
    }

    inline bool UnknownInline1(u32 index, VecFx32 *pVec);

    // overlay 1
    void func_ov001_020db190();

    // overlay 102
    void func_ov102_02182c20(unk32 param1, MtxFx43 *param2);
    void func_ov102_02182c84(bool param1, unk32 param2, UnkAngleStruct param3, MtxFx43 *param4, MtxFx43 *param5);
};

struct PlayerActorBase_78_04 {
    PAD(0x00, 0x0C);

    void func_ov000_0205c584(unk32 param1, unk32 param2);
};

class PlayerActorBase_78 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 00 */ unk32 mUnk_04;
    /* 00 */ u8 mUnk_08[2]; // bool?
    /* 0C */

    void func_ov000_0205c584(volatile unk32 param1, volatile unk32 param2);
    void func_ov000_0205c5d0(unk32 param1, PlayerActorBase *pPlayer);
};

class PlayerLinkActor_9C_34 {
private:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ VecFx32 mUnk_04;
    /* 10 */ VecFx32 mUnk_10;
    /* 1C */

public:
    void func_ov000_0208efd0(VecFx32 *pVec);
};

class PlayerLinkActor_9C {
public:
    /* 000 (vtable) */
    /* 004 */ PAD(0x04, 0x08);
    /* 008 */ ActorRef mUnk_008; //! TODO: confirm type
    /* 00C */ PAD(0x0C, 0x34);
    /* 034 */ PlayerLinkActor_9C_34 mUnk_034;
    /* 004 */ PAD(0x50, 0x5A);
    /* 05A */ UnkAngleStruct mUnk_5A;
    /* 05C */ PAD(0x5C, 0x6C);
    /* 06C */ VecFx32 mUnk_06C;
    /* 078 */ PAD(0x78, 0x90);
    /* 090 */ s16 mUnk_090;
    /* 090 */ unk16 mUnk_092;
    /* 094 */ unk32 mUnk_094;
    /* 098 */ unk16 mUnk_098;
    /* 094 */ PAD(0x9A, 0xDC);
    /* 0DC */ u16 mUnk_0DC;
    /* 0DE */ unk16 mUnk_0DE;
    /* 0E0 */ unk32 mUnk_0E0;
    /* 0E4 */ unk32 mUnk_0E4;
    /* 0E8 */ unk32 mUnk_0E8;
    /* 0EC */ unk32 mUnk_0EC;
    /* 0F0 */ unk32 mUnk_0F0;
    /* 0F4 */ PlayerActorBase *pZelda;
    /* 0F8 */ unk32 mUnk_0F8;
    /* 0FC */ bool mUnk_0FC;
    /* 100 */ unk32 mUnk_100;
    /* 104 */ VecFx32 mUnk_104;
    /* 110 */ PAD(0x110, 0x138);
    /* 138 */ s16 mUnk_138;
    /* 13A */ u16 mUnk_13A;
    /* 13C */ unk16 mUnk_13C;
    /* 13E */ PAD(0x13E, 0x154);
    /* 154 */

    PlayerLinkActor_9C(UnkStruct_027e0ce0_40 *param1, u32 rawGrabParams, PlayerCharacter character);

    // data_ov000_020b2a8c
    /* 00 */ virtual ~PlayerLinkActor_9C();

    // overlay 0
    unk32 func_ov000_02084944();
    unk32 func_ov000_020849d0(VecFx32 *pAccel, VecFx32 *pVel);
    unk32 func_ov000_02084ac8(unk32 param1, VecFx32 *pPos, VecFx32 *pAccel, VecFx32 *pVel);
    void func_ov000_02084c3c(unk32 param1, unk32 param2, VecFx32 *param3, VecFx32 *param4);
    unk32 func_ov000_02084e58(unk32 param1, u8 param2, VecFx32 *param3, VecFx32 *pPos, VecFx32 *pAccel, VecFx32 *pVel,
                              unk32 param7);
    void func_ov000_02085274(unk32 param1, unk32 param2, unk32 param3, VecFx32 *param4, VecFx32 *param5, VecFx32 *param6);
    void func_ov000_02085578(unk32 param1, unk32 param2, unk32 param3, unk32 param4, VecFx32 *param5);
    void func_ov000_02085718(VecFx32 *param1);
    void func_ov000_02085840(VecFx32 *param1, VecFx32 *param2, VecFx32 *param3);
    void func_ov000_02086758();
    void func_ov000_020867f4();

    // overlay 17
    bool func_ov017_020bc640(u32 param1, bool param2, bool param3, u8 param4, u8 param5, VecFx32 *pAccel, VecFx32 *pPos,
                             VecFx32 *pVel);
};

class PlayerActorBase {
public:
    /* 00 */ VecFx32Cpp mPos;
    /* 0C */ VecFx32Cpp mPrevPos;
    /* 18 */ VecFx32Cpp mVel;
    /* 24 */ VecFx32Cpp mAccel;
    /* 30 */ UnkAngleStruct mAngle;
    /* 32 */ u8 mInvincibilityTimer;
    /* 33 */ u8 mInvincibilityIconTimer; // the blinking icon on top-screen
    /* 34 */ ActorRef mGrabActor;
    /* 38 */ PlayerActorBase_38 mUnk_38;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ PlayerCharacter mCharacter;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ ActorGrabParams mUnk_50;
    /* 54 */ ItemManager *mUnk_54;
    /* 58 */ UnkStruct_027e0ce0_40 *mUnk_58;
    /* 5C */ PlayerActorBase_5C mUnk_5C;
    /* 70 */ PlayerActorBase_70 *mUnk_70;
    /* 74 */ PlayerActorBase_74 *mUnk_74;
    /* 78 */ PlayerActorBase_78 mUnk_78;
    /* 84 */ UnkStruct_ov019_020d24c8_28_258_00 mUnk_84;
    /* 8C */ unk32 mUnk_8C;
    /* 90 */ PlayerLinkActor_9C *mUnk_90;
    /* 94 */

    PlayerActorBase(PlayerCharacter character, unk32 param2, ItemManager *pItemMgr, UnkStruct_027e0ce0_40 *param4);
    ~PlayerActorBase();

    // overlay 0
    void func_ov000_0208c8f8(VecFx32 *pVec);
    void func_ov000_0208c914();
    void func_ov000_0208cbf0();
    void func_ov000_0208cc20(VecFx32 *param1);
    bool func_ov000_0208cc90();
    unk32 func_ov000_0208d3a8();
    void func_ov000_0208d3d0(Vec2s *param1, unk32 param2, void *param3);
    void func_ov000_0208d3fc();
    void func_ov000_0208d60c();
    bool func_ov000_0208d754();
    void func_ov000_0208d7f0(bool param1);
    bool func_ov000_0208db08();
    unk32 func_ov000_0208dc98();
    unk32 func_ov000_0208dd60(UnkStruct_027e0ce0_30_00 *param1);

    // overlay 1
    void func_ov001_020bc96c(); // ResetState? or just Reset? idk

    // overlay 93
    //! TODO: move to PlayerZeldaActor?
    unk32 func_ov093_0216e8e4(UnkStruct_027e0ce0_30_00 *param1);
    void func_ov093_0216d0d4();
    void func_ov093_0216d160();
    void func_ov093_0216d1cc(unk32 param1, const UnkStruct_ov001_020c40f4 *param2, bool param3, bool param4);
    void func_ov093_0216d5b8(bool param1);
    void func_ov093_0216f71c(unk32 *param1);
    void func_ov093_0216de30(unk32 param1, unk32 param2);
    void func_ov093_0216dec8(void *param1);
    void func_ov093_0216e1a4(void *param1);
};
