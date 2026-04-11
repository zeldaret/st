//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor YKAP ---

class ActorUnkYKAP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkYKAP();

    /* 4C */ virtual ~ActorUnkYKAP() override;
};

class ActorProfileUnkYKAP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkYKAP();
    ~ActorProfileUnkYKAP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkYKAP *GetProfile();
};

// --- Actor YKCP ---

class ActorUnkYKCP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkYKCP();

    /* 4C */ virtual ~ActorUnkYKCP() override;
};

class ActorProfileUnkYKCP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkYKCP();
    ~ActorProfileUnkYKCP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkYKCP *GetProfile();
};

// --- Actor YKEP ---

class ActorUnkYKEP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkYKEP();

    /* 4C */ virtual ~ActorUnkYKEP() override;
};

class ActorProfileUnkYKEP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkYKEP();
    ~ActorProfileUnkYKEP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkYKEP *GetProfile();
};
