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

    /* 00 */ virtual void vfunc_00();             // func_ov000_0207bfe4
    /* 04 */ virtual ~UnkStruct_ov000_020b2838(); // func_ov000_0207bfe8
    /* 08 */ virtual void vfunc_08();             // func_ov000_0207c000
    /* 0C */ virtual void vfunc_0C();             // func_ov000_0207c008
};

class UnkStruct_ov031_02113fb8 : UnkStruct_ov000_020b2838 {
public:
    // data_ov031_02113fb8

    /* 00 */ virtual ~UnkStruct_ov031_02113fb8() override; // func_ov031_020f09f8 & func_ov031_020f0a14
    /* 08 */ virtual void vfunc_08() override;             // func_ov031_020f0aa8
    /* 0C */ virtual void vfunc_0C() override;             // func_ov031_020f0a38
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
    /* 110 */ ModelRender_ov000_020b198c mUnk_110;
    /* 120 */

    Actor_ov031_02113fd4();

    // data_ov031_02113fd4

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;                                // func_ov031_020efd6c
    /* 20 */ virtual void vfunc_20() override;                                            // func_ov031_020f005c
    /* 24 */ virtual void vfunc_24() override;                                            // func_ov031_020f0060
    /* 38 */ virtual bool Grab(ActorGrabParams grabParams) override;                      // func_ov031_020efdcc
    /* 3C */ virtual bool Drop(ActorGrabParams grabParams, const VecFx32 *pVel) override; // func_ov031_020efe08
    /* 40 */ virtual void vfunc_40() override;                                            // func_ov031_020f02a8
    /* 44 */ virtual void vfunc_44() override;                                            // func_ov031_020f02c8
    // /* 4C */ virtual ~Actor_ov031_02113fd4() override; // func_ov031_020f0ba8 & func_ov031_020f0bd0
    /* 54 */ virtual void vfunc_54(); // func_ov031_020f064c
    /* 58 */ virtual void vfunc_58(); // func_ov031_020f0654
    /* 5C */ virtual void vfunc_5C(ActorState param1) = 0;
    /* 60 */ virtual void vfunc_60(); // func_ov031_020f0090
    /* 64 */ virtual void vfunc_64(); // func_ov031_020f065c

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
    /* 120 */

    ActorPot();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override; // func_ov031_020f0d04
    /* 20 */ virtual void vfunc_20() override;             // func_ov031_020f0d80
    /* 2C */ virtual void vfunc_2C(unk32 param1) override; // func_ov031_020f0db8
    /* 4C */ virtual ~ActorPot() override;
    /* 5C */ virtual void vfunc_5C(ActorState param1) override; // func_ov031_020f0d2c

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
    ~ActorProfilePot();

    /* 0C */ virtual Actor *Create();

    static ActorProfilePot *GetProfile();
};
