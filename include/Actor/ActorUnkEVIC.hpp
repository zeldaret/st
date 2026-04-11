//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEVIC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEVIC();

    /* 4C */ virtual ~ActorUnkEVIC() override;

    void func_ov000_0209c014(void);
};

class ActorProfileUnkEVIC : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkEVIC();
    ~ActorProfileUnkEVIC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEVIC *GetProfile();
};
