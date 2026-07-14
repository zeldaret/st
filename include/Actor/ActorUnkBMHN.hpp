//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBMHN_C4 : public Actor_C4 {
public:
    ActorUnkBMHN_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkBMHN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBMHN();

    /* 4C */ virtual ~ActorUnkBMHN() override;
};

class ActorProfileUnkBMHN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkBMHN();
    ~ActorProfileUnkBMHN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBMHN *GetProfile();
};
