//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMS2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMS2();

    /* 4C */ virtual ~ActorUnkRMS2() override;

    void func_ov065_02159050(void);
};

class ActorProfileUnkRMS2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMS2();
    ~ActorProfileUnkRMS2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMS2 *GetProfile();
};
