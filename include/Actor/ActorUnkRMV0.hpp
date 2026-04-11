//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMV0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMV0();

    /* 4C */ virtual ~ActorUnkRMV0() override;

    void func_ov067_02159dd0(void);
};

class ActorProfileUnkRMV0 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMV0();
    ~ActorProfileUnkRMV0();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMV0 *GetProfile();
};
