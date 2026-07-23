#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

enum ActorUnkATTGState_ {
    ActorUnkATTGState_0 = 0,
    ActorUnkATTGState_1 = 1,
    ActorUnkATTGState_2 = 2,
    ActorUnkATTGState_MAX
};

class ActorUnkATTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */

    ActorUnkATTG();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    void func_ov031_020f3eec(ActorState state, unk32 param2);
    bool func_ov031_020f4014();
};

class ActorProfileUnkATTG : public ActorProfile {
public:
    /* 00 (base) */
    /* 3A */

    ActorProfileUnkATTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkATTG *GetProfile();
};
