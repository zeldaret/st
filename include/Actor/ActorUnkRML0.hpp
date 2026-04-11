//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRML0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRML0();

    /* 4C */ virtual ~ActorUnkRML0() override;

    void func_ov062_02157f18(void);
    void func_ov062_02157f48(void);
};

class ActorProfileUnkRML0 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRML0();
    ~ActorProfileUnkRML0();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRML0 *GetProfile();
};
