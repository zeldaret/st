#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */ Actor_9C mUnk_98;
    /* B0 */

    ActorUnkSWCH();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
};

class ActorProfileUnkSWCH : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWCH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWCH *GetProfile();
};
