//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor WAWA ---

class ActorUnkWAWA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWAWA();

    /* 4C */ virtual ~ActorUnkWAWA() override;
};

class ActorProfileUnkWAWA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWAWA();
    ~ActorProfileUnkWAWA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWAWA *GetProfile();
};

// --- Actor WAWC ---

class ActorUnkWAWC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWAWC();

    /* 4C */ virtual ~ActorUnkWAWC() override;
};

class ActorProfileUnkWAWC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWAWC();
    ~ActorProfileUnkWAWC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWAWC *GetProfile();
};
