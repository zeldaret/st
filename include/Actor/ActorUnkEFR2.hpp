//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFR2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFR2();

    /* 4C */ virtual ~ActorUnkEFR2() override;

    void func_ov094_02170778(void);
    void func_ov094_02170814(void);
};

class ActorProfileUnkEFR2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFR2();
    ~ActorProfileUnkEFR2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFR2 *GetProfile();
};
