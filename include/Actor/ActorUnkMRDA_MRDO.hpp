//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor MRDA ---

class ActorUnkMRDA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMRDA();

    /* 4C */ virtual ~ActorUnkMRDA() override;
};

class ActorProfileUnkMRDA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkMRDA();
    ~ActorProfileUnkMRDA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMRDA *GetProfile();
};

// --- Actor MRDO ---

class ActorUnkMRDO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMRDO();

    /* 4C */ virtual ~ActorUnkMRDO() override;
};

class ActorProfileUnkMRDO : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkMRDO();
    ~ActorProfileUnkMRDO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMRDO *GetProfile();
};
