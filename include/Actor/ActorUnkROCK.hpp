#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorUnkSCCN.hpp"
#include "MapObject/MapObject_ov031.hpp"
#include "global.h"
#include "types.h"

enum ActorUnkROCKState_ {
    ActorUnkROCKState_0 = 0,
    ActorUnkROCKState_1 = 1,
    ActorUnkROCKState_2 = 2,
    ActorUnkROCKState_3 = 3,
    ActorUnkROCKState_4 = 4,
    ActorUnkROCKState_Max,
};

class ActorUnkROCK : public Actor {
public:
    /* 00 (base) */
    /* 94 */ UnkSystem6_Derived2 mUnk_94;
    /* 9C */ bool mUnk_9C;
    /* A0 */ ActorUnkSCCN_B8 mUnk_A0;
    /* B0 */

    ActorUnkROCK();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 38 */ virtual bool Grab(ActorGrabParams param1) override;
    /* 38 */ virtual bool Drop(ActorGrabParams param1, const VecFx32 *param2) override;

    void func_ov031_020e8a48(ActorState state);
    void func_ov031_020e8acc();
};

class ActorProfileUnkROCK_Base : public ActorProfile_Derived1 {
public:
    /* 00 (base) */
    /* D8 */ MapObject_10_Pot mUnk_D8;
    /* FC */

    ActorProfileUnkROCK_Base(ActorId actorId) :
        ActorProfile_Derived1(actorId) {}

    // data_ov031_021133cc
};

class ActorProfileUnkROCK : public ActorProfileUnkROCK_Base {
public:
    /* 00 (base) */
    /* FC */

    ActorProfileUnkROCK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkROCK *GetProfile();
};
