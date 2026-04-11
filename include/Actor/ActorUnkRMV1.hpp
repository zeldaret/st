//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMV1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMV1();

    /* 4C */ virtual ~ActorUnkRMV1() override;

    void func_ov067_02159ef4(void);
};

class ActorProfileUnkRMV1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMV1();
    ~ActorProfileUnkRMV1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMV1 *GetProfile();
};
