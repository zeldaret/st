//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFOMY : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFOMY();

    /* 4C */ virtual ~ActorUnkFOMY() override;

    void func_ov036_0211b38c(void);
    void func_ov036_0211b3f4(void);
    void func_ov036_0211b420(void);
};

class ActorProfileUnkFOMY : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFOMY();
    ~ActorProfileUnkFOMY();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFOMY *GetProfile();
};
