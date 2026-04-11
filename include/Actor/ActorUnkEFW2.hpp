//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFW2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFW2();

    /* 4C */ virtual ~ActorUnkEFW2() override;

    void func_ov094_0217092c(void);
    void func_ov094_021709c8(void);
};

class ActorProfileUnkEFW2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFW2();
    ~ActorProfileUnkEFW2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFW2 *GetProfile();
};
