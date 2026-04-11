//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC6 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMC6();

    /* 4C */ virtual ~ActorUnkRMC6() override;

    void func_ov060_0215e104(void);
    void func_ov060_0215e108(void);
};

class ActorProfileUnkRMC6 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMC6();
    ~ActorProfileUnkRMC6();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMC6 *GetProfile();
};
