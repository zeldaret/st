#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

enum ActorUnkFLENState_ {
    ActorUnkFLENState_0 = 0,
    ActorUnkFLENState_1 = 1,
    ActorUnkFLENState_2 = 2,
    ActorUnkFLENState_Max,
};

class ActorUnkFLEN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */

    ActorUnkFLEN();

    /* 4C */ virtual ~ActorUnkFLEN() override;

    /* 18 */ virtual bool vfunc_18(int param1) override;
    /* 20 */ virtual void vfunc_20() override;

    void SetState(ActorState state);
    unk32 func_ov031_020f81f8();
};

class ActorProfileUnkFLEN : public ActorProfile {
public:
    /* 00 (base) */
    /* 3C */

    ActorProfileUnkFLEN();
    ~ActorProfileUnkFLEN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFLEN *GetProfile();
};
