//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMT0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMT0();

    /* 4C */ virtual ~ActorUnkRMT0() override;

    void func_ov061_02157f18(void);
};

class ActorProfileUnkRMT0 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMT0();
    ~ActorProfileUnkRMT0();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMT0 *GetProfile();
};
