//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPMTD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPMTD();

    /* 4C */ virtual ~ActorUnkPMTD() override;
};

class ActorProfileUnkPMTD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPMTD();
    ~ActorProfileUnkPMTD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPMTD *GetProfile();
};
