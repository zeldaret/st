#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNTTZ : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */

    ActorUnkNTTZ();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;

    void func_ov031_020f61a0();
    void func_ov031_020f61f0();
};

class ActorProfileUnkNTTZ : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNTTZ();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNTTZ *GetProfile();
};
