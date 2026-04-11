//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPMTB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPMTB();

    /* 4C */ virtual ~ActorUnkPMTB() override;
};

class ActorProfileUnkPMTB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPMTB();
    ~ActorProfileUnkPMTB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPMTB *GetProfile();
};
