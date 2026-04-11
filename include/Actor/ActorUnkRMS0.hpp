//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMS0();

    /* 4C */ virtual ~ActorUnkRMS0() override;

    void func_ov065_02158e08(void);
};

class ActorProfileUnkRMS0 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMS0();
    ~ActorProfileUnkRMS0();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMS0 *GetProfile();
};
