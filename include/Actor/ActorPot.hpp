#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "global.h"
#include "types.h"

enum ActorPotState_ {
    ActorPotState_0 = 0,
    ActorPotState_1 = 1,
    ActorPotState_2 = 2,
    ActorPotState_3 = 3,
    ActorPotState_4 = 4,
    ActorPotState_5 = 5,
    ActorPotState_6 = 6,
    ActorPotState_7 = 7,
    ActorPotState_Max,
};

class UnkStruct_ov000_020b2838 {
public:
    // data_ov000_020b2838
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual ~UnkStruct_ov000_020b2838();
    /* 08 */ virtual void vfunc_08(); // to link func_ov000_0207c000
    /* 0C */ virtual void vfunc_0C(); // to link func_ov000_0207c008
};

class UnkStruct_ov031_02113fb8 : public UnkStruct_ov000_020b2838 {
public:
    // data_ov031_02113fb8
    /* 00 */ virtual ~UnkStruct_ov031_02113fb8() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
};

class Actor_ov031_02113fd4 : public Actor {
public:
    /* 000 (base) */
    /* 094 */ UnkStruct_ov031_Items_01 mUnk_94;
    /* 0C0 */ STRUCT_PAD(0x0C0, 0x0EC);
    /* 0EC */ u16 mUnk_EC;
    /* 0EE */ STRUCT_PAD(0x0EE, 0xF0);
    /* 0F0 */ UnkStruct_ov031_02113fb8 mUnk_F0;
    /* 0F4 */ STRUCT_PAD(0xF4, 0x110);
    /* 110 */

    Actor_ov031_02113fd4();

    // data_ov031_02113fd4
    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 38 */ virtual bool Grab(ActorGrabParams grabParams) override;
    /* 3C */ virtual bool Drop(ActorGrabParams grabParams, const VecFx32 *pVel) override;
    /* 40 */ virtual void vfunc_40() override;
    /* 44 */ virtual void vfunc_44() override;
    /* 54 */ virtual void vfunc_54();
    /* 58 */ virtual void vfunc_58();
    /* 5C */ virtual void vfunc_5C(ActorState state) = 0;
    /* 60 */ virtual void vfunc_60();
    /* 64 */ virtual void vfunc_64();

    void func_ov031_020f0094();
    void func_ov031_020f0098();
    void func_ov031_020f009c();
    void func_ov031_020f00a0();
    void func_ov031_020f00c4();
    void func_ov031_020f00ac();
    void func_ov031_020f0198();
    void func_ov031_020f01ac();
    void func_ov031_020f0220();
    void func_ov031_020f0244();
    void func_ov031_020f0450(unk32 param1);
    void func_ov031_020f04a8();
    void func_ov031_020f04dc();
    void func_ov031_020f0514();
};

class ActorPot : public Actor_ov031_02113fd4 {
public:
    /* 00 (base) */
    /* 110 */ ModelRender_ov000_020b198c mUnk_110;
    /* 120 */

    ActorPot();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 5C */ virtual void vfunc_5C(ActorState state) override;

    void func_ov031_020f0cf0();
    void func_ov031_020f0de8();
    void func_ov031_020f0df4();
    void func_ov031_020f0e00();
    void func_ov031_020f0e0c();
    void func_ov031_020f0e18();
    void func_ov031_020f0e24();
    void func_ov031_020f0e30();
    void func_ov031_020f0e3c();
    void func_ov031_020f0e48();
    void func_ov031_020f0e5c();
    void func_ov031_020f0e70();
    void func_ov031_020f0f44();
};

class ActorProfilePot : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfilePot();

    /* 0C */ virtual Actor *Create();

    static ActorProfilePot *GetProfile();
};
