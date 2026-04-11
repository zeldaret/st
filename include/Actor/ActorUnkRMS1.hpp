//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMS1();

    /* 4C */ virtual ~ActorUnkRMS1() override;

    void func_ov065_02158f2c(void);
};

class ActorProfileUnkRMS1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMS1();
    ~ActorProfileUnkRMS1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMS1 *GetProfile();
};
