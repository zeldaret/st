//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDSVC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDSVC();

    /* 4C */ virtual ~ActorUnkDSVC() override;

    void func_ov084_0215af5c(void);
};

class ActorProfileUnkDSVC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDSVC();
    ~ActorProfileUnkDSVC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDSVC *GetProfile();
};
