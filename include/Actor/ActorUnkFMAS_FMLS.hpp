//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor FMAS ---

class ActorUnkFMAS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFMAS();

    /* 4C */ virtual ~ActorUnkFMAS() override;
};

class ActorProfileUnkFMAS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFMAS();
    ~ActorProfileUnkFMAS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFMAS *GetProfile();
};

// --- Actor FMLS ---

class ActorUnkFMLS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFMLS();

    /* 4C */ virtual ~ActorUnkFMLS() override;
};

class ActorProfileUnkFMLS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFMLS();
    ~ActorProfileUnkFMLS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFMLS *GetProfile();
};
