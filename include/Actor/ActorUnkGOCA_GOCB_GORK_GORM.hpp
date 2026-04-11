//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor GOCA ---

class ActorUnkGOCA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGOCA();

    /* 4C */ virtual ~ActorUnkGOCA() override;
};

class ActorProfileUnkGOCA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGOCA();
    ~ActorProfileUnkGOCA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGOCA *GetProfile();
};

// --- Actor GOCB ---

class ActorUnkGOCB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGOCB();

    /* 4C */ virtual ~ActorUnkGOCB() override;
};

class ActorProfileUnkGOCB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGOCB();
    ~ActorProfileUnkGOCB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGOCB *GetProfile();
};

// --- Actor GORK ---

class ActorUnkGORK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGORK();

    /* 4C */ virtual ~ActorUnkGORK() override;
};

class ActorProfileUnkGORK : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGORK();
    ~ActorProfileUnkGORK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGORK *GetProfile();
};

// --- Actor GORM ---

class ActorUnkGORM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGORM();

    /* 4C */ virtual ~ActorUnkGORM() override;
};

class ActorProfileUnkGORM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGORM();
    ~ActorProfileUnkGORM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGORM *GetProfile();
};
