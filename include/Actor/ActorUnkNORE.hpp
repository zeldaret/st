#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNORE_C4 : public Actor_C4 {
public:
    ActorUnkNORE_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkNORE : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNORE();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 4C */ virtual ~ActorUnkNORE() override;
};

class ActorProfileUnkNORE : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNORE();
    ~ActorProfileUnkNORE();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNORE *GetProfile();
};
