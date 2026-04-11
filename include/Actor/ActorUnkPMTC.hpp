//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

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
