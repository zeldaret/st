//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorRef.hpp"
#include "Actor/ActorShotArrow.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "Unknown/UnkStruct_ov000_020b3268.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "global.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "types.h"

class UnkStruct_ov063_021631a0 : public UnkStruct_ov000_020b3268 {
public:
    /* 00 (base) */
    /* 60 */ STRUCT_PAD(0x60, 0x6C);
    /* 6C */ unk32 mUnk_6C;
    /* 70 */

    UnkStruct_ov063_021631a0(G3d_Model *pModel);
};

class UnkStruct_func_ov063_0215a678 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x04);
    /* 04 */ ModelRender *mUnk_04; //! INFO: Placeholder that matches
    /* 08 */ unk32 mUnk_08;
    /* 0C */ STRUCT_PAD(0x0C, 0x25);
    /* 25 */ u8 mUnk_25;
    /* 26 */ STRUCT_PAD(0x26, 0x92);
    /* 92 */ s8 mUnk_92;
    /* 93 */ STRUCT_PAD(0x93, 0xAE);
    /* AE */ u8 mUnk_AE;
};

class ActorUnkCASE_150 : public Actor_C4 {
public:
    /* 00 (base) */
    /* 24 */

    ActorUnkCASE_150(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 0C */ virtual void vfunc_0C(VecFx32 *param1) override;
};

class ActorUnkCASE_174 : public UnkStruct_ov031_Items_01 {
public:
    /* 00 (base) */
    /* 2C */ Actor *mUnk_2C;
    /* 30 */

    ActorUnkCASE_174(Actor *param1);

    /* 10 */ virtual void vfunc_10(Actor *actor) override;
};

class ActorUnkCASE : public Actor_Derived2 {
public:
    /* 000 (base) */
    /* 0AE */ unk16 mUnk_0AE;
    /* 0B0 */ UnkStruct_ov063_021631a0 mUnk_0B0;
    /* 120 */ unk16 mUnk_120;
    /* 122 */ STRUCT_PAD(0x122, 0x124);
    /* 124 */ ActorShotArrow_140 mUnk_124;
    /* 14C */ Actor *mUnk_14C;
    /* 150 */ ActorUnkCASE_150 mUnk_150;
    /* 174 */ ActorUnkCASE_174 mUnk_174;
    /* 1A4 */ Mat3p mUnk_1A4;
    /* 1C8 */ unk16 mUnk_1C8; // Angle related
    /* 1CA */ STRUCT_PAD(0x1CA, 0x1CC);
    /* 1CC */ VecFx32 mUnk_1CC;
    /* 1D8 */ unk32 mUnk_1D8;
    /* 1DC */ unk32 mUnk_1DC;
    /* 1E0 */ unk32 mUnk_1E0;
    /* 1E4 */ ActorRef mUnk_1E4;
    /* 1E8 */ Actor_Derived1_94 mUnk_1E8;
    /* 1F4 */ u8 mUnk_1F4;
    /* 1F5 */

    ActorUnkCASE();

    /* 10 */ virtual void vfunc_10(Cylinder *param1) override;
    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;

    void func_ov063_0215ab70(void);
    void func_ov063_0215aba4(void);
    void func_ov063_0215abd8(void);
    void func_ov063_0215ac4c(void);
    void func_ov063_0215ac68(void);
    void func_ov063_0215ac8c(void);
    void func_ov063_0215acc8(void);
    static void func_ov063_0215acec(ActorRef *ref1, ActorRef ref2); // copy ?
    void func_ov063_0215ae6c(void);
    void func_ov063_0215ae80(void);
    void func_ov063_0215aefc(ActorState param2);
    void func_ov063_0215af54(void);
    void func_ov063_0215af58(void);
    void func_ov063_0215af5c(void);
    void func_ov063_0215af60(void);
    void func_ov063_0215afa4(void);
    void func_ov063_0215afb8(void);
    void func_ov063_0215b054(void);
    void func_ov063_0215b090(void);
    void func_ov063_0215b1bc(void);
    void func_ov063_0215b244(void);
    void func_ov063_0215b2b0(void);
    void func_ov063_0215b2c4(void);
    void func_ov063_0215b6c8(VecFx32 *param1, UnkAngleStruct angle);
    void func_ov063_0215b724(void);
    void func_ov063_0215b814(ActorRef ref);
    void func_ov063_0215b854(void);
    void func_ov063_0215b8e8(VecFx32 *param1);
    static void func_ov063_0215b99c(ActorUnkCASE *param1, UnkStruct_func_ov063_0215a678 *param2);
    void func_ov063_0215ba64(void);
};

class ActorProfileUnkCASE : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCASE();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCASE *GetProfile();
};
