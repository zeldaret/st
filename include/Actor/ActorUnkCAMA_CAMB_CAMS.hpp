//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor CAMA ---

class ActorUnkCAMA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCAMA();

    /* 4C */ virtual ~ActorUnkCAMA() override;
};

class ActorProfileUnkCAMA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCAMA();
    ~ActorProfileUnkCAMA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCAMA *GetProfile();
};

// --- Actor CAMB ---

class ActorUnkCAMB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCAMB();

    /* 4C */ virtual ~ActorUnkCAMB() override;
};

class ActorProfileUnkCAMB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCAMB();
    ~ActorProfileUnkCAMB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCAMB *GetProfile();
};

// --- Actor CAMS ---

class ActorUnkCAMS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCAMS();

    /* 4C */ virtual ~ActorUnkCAMS() override;
};

class ActorProfileUnkCAMS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCAMS();
    ~ActorProfileUnkCAMS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCAMS *GetProfile();
};
