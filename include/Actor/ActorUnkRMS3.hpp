//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMS3();

    /* 4C */ virtual ~ActorUnkRMS3() override;

    void func_ov065_02159174(void);
};

class ActorProfileUnkRMS3 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMS3();
    ~ActorProfileUnkRMS3();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMS3 *GetProfile();
};
