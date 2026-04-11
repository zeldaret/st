//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMT3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMT3();

    /* 4C */ virtual ~ActorUnkRMT3() override;

    void func_ov061_021583d0(void);
};

class ActorProfileUnkRMT3 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMT3();
    ~ActorProfileUnkRMT3();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMT3 *GetProfile();
};
