//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor TCOW ---

class ActorUnkTCOW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTCOW();

    /* 4C */ virtual ~ActorUnkTCOW() override;
};

class ActorProfileUnkTCOW : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTCOW();
    ~ActorProfileUnkTCOW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTCOW *GetProfile();
};

// --- Actor WCAS ---

class ActorUnkWCAS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWCAS();

    /* 4C */ virtual ~ActorUnkWCAS() override;
};

class ActorProfileUnkWCAS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWCAS();
    ~ActorProfileUnkWCAS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWCAS *GetProfile();
};
