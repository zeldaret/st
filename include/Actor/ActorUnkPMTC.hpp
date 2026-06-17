//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPMTC_c4 : public Actor_c4 {
public:
    ActorUnkPMTC_c4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkPMTC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPMTC();

    /* 4C */ virtual ~ActorUnkPMTC() override;
};

class ActorProfileUnkPMTC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPMTC();
    ~ActorProfileUnkPMTC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPMTC *GetProfile();
};
