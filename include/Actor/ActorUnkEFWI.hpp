//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFWI : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFWI();

    /* 4C */ virtual ~ActorUnkEFWI() override;

    void func_ov098_02181738(void);
    void func_ov098_021817d4(void);
};

class ActorProfileUnkEFWI : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFWI();
    ~ActorProfileUnkEFWI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFWI *GetProfile();
};
