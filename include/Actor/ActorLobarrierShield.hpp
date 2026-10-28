#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorShotArrow.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "RefStruct.hpp"
#include "Unknown/UnkStruct_ov000_020b3268.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "global.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "types.h"

class UnkStruct_ov063_021631a0 : public UnkStruct_ov000_020b3268 {
public:
    /* 00 (base) */
    /* 60 */ PAD(0x60, 0x6C);
    /* 6C */ unk32 mUnk_6C;
    /* 70 */

    UnkStruct_ov063_021631a0(G3d_Model *pModel);
};

class UnkStruct_func_ov063_0215a678 {
public:
    /* 00 */ PAD(0x00, 0x04);
    /* 04 */ ModelRender *mUnk_04; //! INFO: Placeholder that matches
    /* 08 */ unk32 mUnk_08;
    /* 0C */ PAD(0x0C, 0x25);
    /* 25 */ u8 mUnk_25;
    /* 26 */ PAD(0x26, 0x92);
    /* 92 */ s8 mUnk_92;
    /* 93 */ PAD(0x93, 0xAE);
    /* AE */ u8 mUnk_AE;
};

class ActorLobarrierShield_150 : public Actor_C4 {
public:
    /* 00 (base) */
    /* 24 */

    ActorLobarrierShield_150(Actor *param1);

    /* 00 */ virtual bool vfunc_00(RefStruct ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 0C */ virtual void vfunc_0C(VecFx32 *param1) override;
};

class ActorLobarrierShield_174 : public UnkStruct_ov031_Items_01 {
public:
    /* 00 (base) */
    /* 2C */ Actor *mUnk_2C;
    /* 30 */

    ActorLobarrierShield_174(Actor *param1);

    /* 10 */ virtual void vfunc_10(const Actor *actor) override;
};

enum ActorLobarrierShieldState_ {
    ActorLobarrierShieldState_Held          = 0, // by a Lobarrier
    ActorLobarrierShieldState_Grabbing      = 1, // with whip
    ActorLobarrierShieldState_Grabbed       = 2, // with whip
    ActorLobarrierShieldState_Thrown        = 3,
    ActorLobarrierShieldState_Releasing     = 4,
    ActorLobarrierShieldState_LyingOnGround = 5,
    ActorLobarrierShieldState_Max
};

class ActorLobarrier;

class ActorLobarrierShield : public Actor_Derived2 {
public:
    /* 000 (base) */
    /* 0AE */ unk16 mUnk_0AE;
    /* 0B0 */ UnkStruct_ov063_021631a0 mUnk_0B0;
    /* 120 */ unk16 mUnk_120;
    /* 122 */ PAD(0x122, 0x124);
    /* 124 */ ActorShotArrow_140 mUnk_124;
    /* 14C */ ActorLobarrier *lobarrier;
    /* 150 */ ActorLobarrierShield_150 mUnk_150;
    /* 174 */ ActorLobarrierShield_174 mUnk_174;
    /* 1A4 */ MtxFx33 mUnk_1A4;
    /* 1C8 */ unk16 mUnk_1C8; // Angle related
    /* 1CA */ PAD(0x1CA, 0x1CC);
    /* 1CC */ VecFx32Cpp mUnk_1CC;
    /* 1D8 */ unk32 mUnk_1D8;
    /* 1DC */ unk32 mUnk_1DC;
    /* 1E0 */ unk32 mUnk_1E0;
    /* 1E4 */ RefStruct mUnk_1E4;
    /* 1E8 */ Actor_Derived1_94 mUnk_1E8;
    /* 1F4 */ u8 mUnk_1F4;
    /* 1F5 */

    ActorLobarrierShield();

    /* 10 */ virtual void vfunc_10(Cylinder *param1) override;
    /* 18 */ virtual bool Init(unk32 param1) override;
    /* 20 */ virtual void Update() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;

    void func_ov063_0215ab70();
    void func_ov063_0215aba4();
    void func_ov063_0215abd8();
    void func_ov063_0215ac4c();
    void func_ov063_0215ac68();
    void func_ov063_0215ac8c();
    void func_ov063_0215acc8();
    static void func_ov063_0215acec(RefStruct *ref1, RefStruct ref2); // copy ?
    void func_ov063_0215ae6c();
    void func_ov063_0215ae80();
    void SetState(ActorState state);
    void func_ov063_0215af54();
    void func_ov063_0215af58();
    void func_ov063_0215af5c();
    void func_ov063_0215af60();
    void func_ov063_0215afa4();
    void func_ov063_0215afb8();
    void func_ov063_0215b054();
    void func_ov063_0215b090();
    void func_ov063_0215b1bc();
    void func_ov063_0215b244();
    void func_ov063_0215b2b0();
    void func_ov063_0215b2c4();
    void func_ov063_0215b6c8(VecFx32 *param1, UnkAngleStruct angle);
    void func_ov063_0215b724();
    void func_ov063_0215b814(RefStruct ref);
    void func_ov063_0215b854();
    void func_ov063_0215b8e8(VecFx32 *param1);
    static void func_ov063_0215b99c(ActorLobarrierShield *param1, UnkStruct_func_ov063_0215a678 *param2);
    void func_ov063_0215ba64();
};

class ActorProfileLobarrierShield : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileLobarrierShield();

    /* 0C */ virtual Actor *Create();

    static ActorProfileLobarrierShield *GetProfile();
};
