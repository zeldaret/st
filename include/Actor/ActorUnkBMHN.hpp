//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

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
