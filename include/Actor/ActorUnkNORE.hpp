#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNORE : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNORE();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
};

class ActorProfileUnkNORE : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNORE();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNORE *GetProfile();
};
