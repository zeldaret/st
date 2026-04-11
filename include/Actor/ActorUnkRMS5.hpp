//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS5 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMS5();

    /* 4C */ virtual ~ActorUnkRMS5() override;

    void func_ov065_021593bc(void);
};

class ActorProfileUnkRMS5 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMS5();
    ~ActorProfileUnkRMS5();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMS5 *GetProfile();
};
