#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Render/ModelRender.hpp"
#include "global.h"
#include "types.h"

enum ActorItemBoomerangState_ {
    ActorItemBoomerangState_0,
    ActorItemBoomerangState_1,
    ActorItemBoomerangState_MAX
};

class ActorItemBoomerang;

class ActorItemBoomerang_11C : public ActorShotArrow_178_Base {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x08);
    /* 08 */ ActorItemBoomerang *mUnk_08;

    ActorItemBoomerang_11C(ActorItemBoomerang *param1); // func_ov031_020e544c

    /* 00 */ virtual ~ActorItemBoomerang_11C(); // func_ov031_020e5474 && func_ov031_020e5488
    /* 08 */ virtual void vfunc_08();           // func_ov031_020e54a4
    /* 0C */ virtual void vfunc_10();           // func_ov031_020e54d4
    /* 10 */ virtual void func_ov000_0207c010();
};

class ActorItemBoomerang_A0 : public ActorShotArrow_194_Base {
public:
    /* 00 (vtable) */
    /* 04 */

    /* 00 */ virtual ~ActorItemBoomerang_A0() override;    // func_ov031_020e4760 && func_ov031_020e5710
    /* 10 */ virtual void vfunc_10(Actor *actor) override; // func_ov031_020e53c8
};

class ActorItemBoomerang_CC {
public:
    /* 00 (vtable) */
    /* 2C */ unk32 mUnk_2C;

    /* 00 */ virtual ~ActorItemBoomerang_CC() override;                     // func_ov031_020e4774
    /* 0C */ virtual bool vfunc_0C(Actor *actor, VecFx32 *param2) override; // func_ov031_020e5400
    /* 10 */ virtual void vfunc_10(Actor *actor) override;                  // func_ov031_020e53e4
};

class ActorItemBoomerang : public Actor {
public:
    /* 000 (base) */
    /* 094 */ UnkSystem6_Derived2 mUnk_94;
    /* 0A0 */ ActorItemBoomerang_A0 mUnk_A0;
    /* 0A8 */ STRUCT_PAD(0xA4, 0xCC);
    /* 0CC */ ActorItemBoomerang_CC mUnk_CC;
    /* 0A8 */ STRUCT_PAD(0xD0, 0x11C);
    /* 11C */ ActorItemBoomerang_11C mUnk_11C;
    /* 124 */ STRUCT_PAD(0x124, 0x128);
    /* 128 */ unk32 mUnk_128;
    /* 12C */ STRUCT_PAD(0x12C, 0x13C);
    /* 13C */ unk32 mUnk_13C;
    /* 140 */ ActorShotArrow_1DC mUnk_140;

    ActorItemBoomerang();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 4C */ virtual ~ActorItemBoomerang() override; // func_ov031_020e4788

    void func_ov031_020e45fc();
    void SetState(ActorState state);
    void func_ov031_020e49b0(unk32 param1);
    void func_ov031_020e5034();
    void func_ov031_020e5220();
    void func_ov031_020e52a0();
    unk32 *func_ov031_020e5704();
};

class ActorProfileItemBoomerang : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileItemBoomerang();
    ~ActorProfileItemBoomerang();

    /* 0C */ virtual Actor *Create();

    static ActorProfileItemBoomerang *GetProfile();
};
