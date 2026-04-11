//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMF0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMF0();

    /* 4C */ virtual ~ActorUnkRMF0() override;

    void func_ov064_021592f0(void);
};

class ActorProfileUnkRMF0 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMF0();
    ~ActorProfileUnkRMF0();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMF0 *GetProfile();
};
