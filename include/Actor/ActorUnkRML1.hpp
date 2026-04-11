//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRML1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRML1();

    /* 4C */ virtual ~ActorUnkRML1() override;

    void func_ov062_0215806c(void);
};

class ActorProfileUnkRML1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRML1();
    ~ActorProfileUnkRML1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRML1 *GetProfile();
};
