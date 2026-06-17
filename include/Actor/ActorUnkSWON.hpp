#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWON : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSWON();

    /* 18 */ virtual bool vfunc_18(unk32 param_1) override;
    /* 4C */ virtual ~ActorUnkSWON() override;
};

class ActorProfileUnkSWON : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWON();
    ~ActorProfileUnkSWON();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWON *GetProfile();
};
