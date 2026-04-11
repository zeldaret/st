//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDSDS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDSDS();

    /* 4C */ virtual ~ActorUnkDSDS() override;

    void func_ov086_021544b8(void);
};

class ActorProfileUnkDSDS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDSDS();
    ~ActorProfileUnkDSDS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDSDS *GetProfile();
};
