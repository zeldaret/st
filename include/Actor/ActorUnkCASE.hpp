//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorRef.hpp"
#include "Actor/ActorShotArrow.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_ov000_020b19f0 : public ModelRender {
public:
    UnkStruct_ov000_020b19f0(G3d_Model *pModel);
};

class UnkStruct_ov000_020b3268 : public UnkStruct_ov000_020b19f0 {
public:
    UnkStruct_ov000_020b3268(G3d_Model *pModel);
};

class UnkStruct_ov063_021631a0 : public UnkStruct_ov000_020b3268 {
public:
    /* 00 (base) */
    /* 60 */ STRUCT_PAD(0x60, 0x6C);
    /* 6C */ unk32 mUnk_6C;
    /* 70 */

    UnkStruct_ov063_021631a0(G3d_Model *pModel);

    /* 00 */ virtual ~UnkStruct_ov063_021631a0();
};

class ActorUnkCASE_150 : public Actor_C4 {
public:
    /* 00 (base) */
    /* 24 */

    ActorUnkCASE_150(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkCASE_174 : public UnkStruct_ov031_Items_01 {
public:
    /* 00 (base) */
    /* 2C */ Actor *mUnk_2C;
    /* 30 */

    ActorUnkCASE_174(Actor *param1);

    /* 00 */ virtual ~ActorUnkCASE_174() override;
    /* 10 */ virtual void vfunc_10(Actor *actor) override;
};

class ActorUnkCASE : public Actor_Derived2 {
public:
    /* 000 (base) */
    /* 0AE */ STRUCT_PAD(0xAE, 0xB0);
    /* 0B0 */ UnkStruct_ov063_021631a0 mUnk_B0;
    /* 120 */ unk32 mUnk_120;
    /* 124 */ ActorShotArrow_140 mUnk_124;
    /* 14C */ unk32 mUnk_14C;
    /* 150 */ ActorUnkCASE_150 mUnk_150;
    /* 174 */ ActorUnkCASE_174 mUnk_174;
    /* 1A4 */ STRUCT_PAD(0x1A4, 0x1C8);
    /* 1C8 */ unk32 mUnk_1C8;
    /* 1CC */ unk32 mUnk_1CC;
    /* 1D0 */ unk32 mUnk_1D0;
    /* 1D4 */ unk32 mUnk_1D4;
    /* 1D8 */ unk32 mUnk_1D8;
    /* 1DC */ unk32 mUnk_1DC;
    /* 1E0 */ unk32 mUnk_1E0;
    /* 1E4 */ unk32 mUnk_1E4;

    ActorUnkCASE();

    /* 4C */ virtual ~ActorUnkCASE() override;

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
    void func_ov063_0215ae94(void);
    void func_ov063_0215aefc(void);
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
    void func_ov063_0215b2c8(void);
    void func_ov063_0215b2ec(void);
    void func_ov063_0215b624(void);
    void func_ov063_0215b6c8(VecFx32 *param1, UnkAngleStruct angle);
    void func_ov063_0215b724(void);
    void func_ov063_0215b7cc(void);
    void func_ov063_0215b814(void);
    void func_ov063_0215b854(void);
    void func_ov063_0215b8e8(void);
    void func_ov063_0215b99c(void);
    void func_ov063_0215ba64(void);
    void func_ov063_0215bab0(void);
};

class ActorProfileUnkCASE : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCASE();
    ~ActorProfileUnkCASE();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCASE *GetProfile();
};
