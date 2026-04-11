//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWAWY : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWAWY();

    /* 4C */ virtual ~ActorUnkWAWY() override;

    void func_ov036_0211b954(void);
    void func_ov036_0211b9bc(void);
    void func_ov036_0211b9e8(void);
};

class ActorProfileUnkWAWY : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWAWY();
    ~ActorProfileUnkWAWY();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWAWY *GetProfile();
};
