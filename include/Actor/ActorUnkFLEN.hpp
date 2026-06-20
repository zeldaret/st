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

class ActorUnkFLEN_C4 : public Actor_C4 {
public:
    ActorUnkFLEN_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
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

    void func_ov031_020f81b4(ActorUnkFLENState_ state);
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
