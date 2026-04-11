//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMF1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMF1();

    /* 4C */ virtual ~ActorUnkRMF1() override;

    void func_ov064_02159414(void);
};

class ActorProfileUnkRMF1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMF1();
    ~ActorProfileUnkRMF1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMF1 *GetProfile();
};
