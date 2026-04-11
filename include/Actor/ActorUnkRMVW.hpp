//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMVW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMVW();

    /* 4C */ virtual ~ActorUnkRMVW() override;

    void func_ov059_021622c0(void);
    void func_ov059_02162360(void);
    void func_ov059_0216238c(void);
    void func_ov059_021623dc(void);
};

class ActorProfileUnkRMVW : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMVW();
    ~ActorProfileUnkRMVW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMVW *GetProfile();
};
