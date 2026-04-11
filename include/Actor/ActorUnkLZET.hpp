//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLZET : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkLZET();

    /* 4C */ virtual ~ActorUnkLZET() override;
};

class ActorProfileUnkLZET : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkLZET();
    ~ActorProfileUnkLZET();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkLZET *GetProfile();
};
