#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */ ModelRender mUnk_94;
    /* F4 */

    ActorUnkRMTG();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
};

class ActorProfileUnkRMTG : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMTG *GetProfile();
};
