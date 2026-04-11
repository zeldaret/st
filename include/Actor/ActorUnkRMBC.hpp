//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMBC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMBC();

    /* 4C */ virtual ~ActorUnkRMBC() override;

    void func_ov062_0215a464(void);
};

class ActorProfileUnkRMBC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMBC();
    ~ActorProfileUnkRMBC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMBC *GetProfile();
};
