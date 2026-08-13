#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorUnkTLKT.hpp"
#include "global.h"

enum ActorUnkCLLTState_ {
    ActorUnkCLLTState_0 = 0,
    ActorUnkCLLTState_1 = 1,
    ActorUnkCLLTState_2 = 2,
    ActorUnkCLLTState_3 = 3,
    ActorUnkCLLTState_4 = 4,
    ActorUnkCLLTState_5 = 5,
    ActorUnkCLLTState_Max,
};

class ActorUnkCLLT : public ActorUnkTLKTnCLLT_Base {
public:
    /* 00 (base) */
    /* 9C */ UnkSystem1_ov000_Derived2 mUnk_9C;
    /* D0 */

    ActorUnkCLLT();

    /* 58 */ virtual void vfunc_58() override;
    /* 5C */ virtual void vfunc_5C() override;
    /* 60 */ virtual void vfunc_60(ActorState state) override;
};

class ActorProfileUnkCLLT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkCLLT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCLLT *GetProfile();
};
