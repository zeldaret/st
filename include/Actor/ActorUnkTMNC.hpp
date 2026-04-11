//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTMNC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTMNC();

    /* 4C */ virtual ~ActorUnkTMNC() override;

    void func_ov058_0214dde0(void);
    void func_ov058_0214de70(void);
};

class ActorProfileUnkTMNC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTMNC();
    ~ActorProfileUnkTMNC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTMNC *GetProfile();
};
