//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor SIRO ---

class ActorUnkSIRO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSIRO();

    /* 4C */ virtual ~ActorUnkSIRO() override;
};

class ActorProfileUnkSIRO : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSIRO();
    ~ActorProfileUnkSIRO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSIRO *GetProfile();
};

// --- Actor SIRS ---

class ActorUnkSIRS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSIRS();

    /* 4C */ virtual ~ActorUnkSIRS() override;
};

class ActorProfileUnkSIRS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSIRS();
    ~ActorProfileUnkSIRS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSIRS *GetProfile();
};

// --- Actor SRNM ---

class ActorUnkSRNM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSRNM();

    /* 4C */ virtual ~ActorUnkSRNM() override;
};

class ActorProfileUnkSRNM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSRNM();
    ~ActorProfileUnkSRNM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSRNM *GetProfile();
};

// --- Actor SRSL ---

class ActorUnkSRSL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSRSL();

    /* 4C */ virtual ~ActorUnkSRSL() override;
};

class ActorProfileUnkSRSL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSRSL();
    ~ActorProfileUnkSRSL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSRSL *GetProfile();
};
