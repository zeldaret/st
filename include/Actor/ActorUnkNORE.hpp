//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNORE : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNORE();

    /* 4C */ virtual ~ActorUnkNORE() override;

    void func_ov031_020f7f8c(void);
};

class ActorProfileUnkNORE : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNORE();
    ~ActorProfileUnkNORE();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNORE *GetProfile();
};
