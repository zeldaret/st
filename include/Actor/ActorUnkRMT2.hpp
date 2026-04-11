//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMT2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMT2();

    /* 4C */ virtual ~ActorUnkRMT2() override;

    void func_ov061_021582ac(void);
};

class ActorProfileUnkRMT2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMT2();
    ~ActorProfileUnkRMT2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMT2 *GetProfile();
};
