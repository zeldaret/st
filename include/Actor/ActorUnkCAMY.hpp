//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCAMY : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCAMY();

    /* 4C */ virtual ~ActorUnkCAMY() override;

    void func_ov036_0211b0c4(void);
    void func_ov036_0211b11c(void);
    void func_ov036_0211b148(void);
};

class ActorProfileUnkCAMY : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCAMY();
    ~ActorProfileUnkCAMY();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCAMY *GetProfile();
};
