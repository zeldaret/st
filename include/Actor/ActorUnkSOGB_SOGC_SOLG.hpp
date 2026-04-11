//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor SOGB ---

class ActorUnkSOGB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSOGB();

    /* 4C */ virtual ~ActorUnkSOGB() override;
};

class ActorProfileUnkSOGB : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSOGB();
    ~ActorProfileUnkSOGB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSOGB *GetProfile();
};

// --- Actor SOGC ---

class ActorUnkSOGC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSOGC();

    /* 4C */ virtual ~ActorUnkSOGC() override;
};

class ActorProfileUnkSOGC : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSOGC();
    ~ActorProfileUnkSOGC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSOGC *GetProfile();
};

// --- Actor SOLG ---

class ActorUnkSOLG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSOLG();

    /* 4C */ virtual ~ActorUnkSOLG() override;
};

class ActorProfileUnkSOLG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSOLG();
    ~ActorProfileUnkSOLG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSOLG *GetProfile();
};
