//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBPAP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBPAP();

    /* 4C */ virtual ~ActorUnkBPAP() override;

    void func_ov021_020f3858(void);
};

class ActorProfileUnkBPAP : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkBPAP();
    ~ActorProfileUnkBPAP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBPAP *GetProfile();
};
