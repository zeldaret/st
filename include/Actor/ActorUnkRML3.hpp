//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRML3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRML3();

    /* 4C */ virtual ~ActorUnkRML3() override;

    void func_ov062_021582b4(void);
};

class ActorProfileUnkRML3 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRML3();
    ~ActorProfileUnkRML3();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRML3 *GetProfile();
};
