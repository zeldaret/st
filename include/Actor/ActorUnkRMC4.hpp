//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC4 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMC4();

    /* 4C */ virtual ~ActorUnkRMC4() override;

    void func_ov060_0215e680(void);
    void func_ov060_0215e684(void);
};

class ActorProfileUnkRMC4 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMC4();
    ~ActorProfileUnkRMC4();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMC4 *GetProfile();
};
