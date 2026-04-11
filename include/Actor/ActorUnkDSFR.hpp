//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDSFR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDSFR();

    /* 4C */ virtual ~ActorUnkDSFR() override;

    void func_ov077_02158bf0(void);
};

class ActorProfileUnkDSFR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDSFR();
    ~ActorProfileUnkDSFR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDSFR *GetProfile();
};
