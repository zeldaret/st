//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTE : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMTE();

    /* 4C */ virtual ~ActorUnkRMTE() override;

    void func_ov065_021594e0(void);
    void func_ov065_0215964c(void);
};

class ActorProfileUnkRMTE : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMTE();
    ~ActorProfileUnkRMTE();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMTE *GetProfile();
};
