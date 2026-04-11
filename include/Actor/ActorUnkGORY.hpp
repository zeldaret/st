//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGORY : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGORY();

    /* 4C */ virtual ~ActorUnkGORY() override;

    void func_ov036_0211bc20(void);
    void func_ov036_0211bc84(void);
    void func_ov036_0211bcb0(void);
};

class ActorProfileUnkGORY : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGORY();
    ~ActorProfileUnkGORY();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGORY *GetProfile();
};
