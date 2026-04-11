//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS4 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMS4();

    /* 4C */ virtual ~ActorUnkRMS4() override;

    void func_ov065_02159298(void);
};

class ActorProfileUnkRMS4 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMS4();
    ~ActorProfileUnkRMS4();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMS4 *GetProfile();
};
