//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMTR();

    /* 4C */ virtual ~ActorUnkRMTR() override;

    void func_ov059_02162a9c(void);
    void func_ov059_02162ad4(void);
    void func_ov059_02162af4(void);
};

class ActorProfileUnkRMTR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMTR();
    ~ActorProfileUnkRMTR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMTR *GetProfile();
};
