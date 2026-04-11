//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor WAWB ---

class ActorUnkWAWB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWAWB();

    /* 4C */ virtual ~ActorUnkWAWB() override;
};

class ActorProfileUnkWAWB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWAWB();
    ~ActorProfileUnkWAWB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWAWB *GetProfile();
};

// --- Actor WAWS ---

class ActorUnkWAWS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWAWS();

    /* 4C */ virtual ~ActorUnkWAWS() override;
};

class ActorProfileUnkWAWS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWAWS();
    ~ActorProfileUnkWAWS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWAWS *GetProfile();
};
