//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor ZLSL ---

class ActorUnkZLSL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkZLSL();

    /* 4C */ virtual ~ActorUnkZLSL() override;
};

class ActorProfileUnkZLSL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkZLSL();
    ~ActorProfileUnkZLSL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkZLSL *GetProfile();
};

// --- Actor ZSRS ---

class ActorUnkZSRS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkZSRS();

    /* 4C */ virtual ~ActorUnkZSRS() override;
};

class ActorProfileUnkZSRS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkZSRS();
    ~ActorProfileUnkZSRS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkZSRS *GetProfile();
};
