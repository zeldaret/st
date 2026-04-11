//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMTB();

    /* 4C */ virtual ~ActorUnkRMTB() override;

    void func_ov059_02162bf0(void);
};

class ActorProfileUnkRMTB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMTB();
    ~ActorProfileUnkRMTB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMTB *GetProfile();
};
