//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMC1();

    /* 4C */ virtual ~ActorUnkRMC1() override;

    void func_ov060_0215d900(void);
};

class ActorProfileUnkRMC1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMC1();
    ~ActorProfileUnkRMC1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMC1 *GetProfile();
};
