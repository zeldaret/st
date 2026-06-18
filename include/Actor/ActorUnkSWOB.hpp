#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorRef.hpp"
#include "global.h"
#include "types.h"

enum ActorUnkSWOBState_ {
    ActorUnkSWOBState_0 = 0,
    ActorUnkSWOBState_1 = 1,
    ActorUnkSWOBState_2 = 2,
    ActorUnkSWOBState_Max,
};

class ActorUnkSWOB : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */ unk32 mUnk_98;
    /* 9C */ unk16 mUnk_9C;
    /* 9C */ unk16 mUnk_9E;
    /* A0 */ unk16 mUnk_A0;
    /* A0 */ unk16 mUnk_A2;
    /* A4 */ ActorRefElem mUnk_A4[5];
    /* B8 */

    ActorUnkSWOB();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;

    bool func_ov000_0209a948(void);
    void SetState(ActorState state);
    void func_ov000_0209aa30(void);
};

class ActorProfileUnkSWOB : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWOB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWOB *GetProfile();
};
