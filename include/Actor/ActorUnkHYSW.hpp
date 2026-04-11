//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkHYSW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkHYSW();

    /* 4C */ virtual ~ActorUnkHYSW() override;

    void func_ov057_0213aa74(void);
    void func_ov057_0213aab8(void);
    void func_ov057_0213ab2c(void);
    void func_ov057_0213ab40(void);
};

class ActorProfileUnkHYSW : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkHYSW();
    ~ActorProfileUnkHYSW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkHYSW *GetProfile();
};
