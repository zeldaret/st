//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTZ : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMTZ();

    /* 4C */ virtual ~ActorUnkRMTZ() override;

    void func_ov064_0215958c(void);
    void func_ov064_021595c8(void);
    void func_ov064_02159610(void);
};

class ActorProfileUnkRMTZ : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMTZ();
    ~ActorProfileUnkRMTZ();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMTZ *GetProfile();
};
