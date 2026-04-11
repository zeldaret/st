//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMST();

    /* 4C */ virtual ~ActorUnkRMST() override;

    void func_ov036_0211dea0(void);
};

class ActorProfileUnkRMST : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMST();
    ~ActorProfileUnkRMST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMST *GetProfile();
};
