//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMVV : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMVV();

    /* 4C */ virtual ~ActorUnkRMVV() override;

    void func_ov059_02162578(void);
    void func_ov059_02162618(void);
    void func_ov059_02162644(void);
    void func_ov059_02162694(void);
};

class ActorProfileUnkRMVV : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMVV();
    ~ActorProfileUnkRMVV();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMVV *GetProfile();
};
