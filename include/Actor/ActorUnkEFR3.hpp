//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFR3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFR3();

    /* 4C */ virtual ~ActorUnkEFR3() override;

    void func_ov083_0215c534(void);
    void func_ov083_0215c5d0(void);
};

class ActorProfileUnkEFR3 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFR3();
    ~ActorProfileUnkEFR3();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFR3 *GetProfile();
};
