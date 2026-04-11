//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCLZN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCLZN();

    /* 4C */ virtual ~ActorUnkCLZN() override;

    void func_ov021_020f3940(void);
    void func_ov021_020f3964(void);
};

class ActorProfileUnkCLZN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkCLZN();
    ~ActorProfileUnkCLZN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCLZN *GetProfile();
};
