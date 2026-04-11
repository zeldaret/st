//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor NCCB ---

class ActorUnkNCCB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNCCB();

    /* 4C */ virtual ~ActorUnkNCCB() override;
};

class ActorProfileUnkNCCB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkNCCB();
    ~ActorProfileUnkNCCB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNCCB *GetProfile();
};

// --- Actor NCMB ---

class ActorUnkNCMB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNCMB();

    /* 4C */ virtual ~ActorUnkNCMB() override;
};

class ActorProfileUnkNCMB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkNCMB();
    ~ActorProfileUnkNCMB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNCMB *GetProfile();
};
