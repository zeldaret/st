//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDSWT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDSWT();

    /* 4C */ virtual ~ActorUnkDSWT() override;

    void func_ov082_02157ae8(void);
};

class ActorProfileUnkDSWT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDSWT();
    ~ActorProfileUnkDSWT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDSWT *GetProfile();
};
