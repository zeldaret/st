//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRML2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRML2();

    /* 4C */ virtual ~ActorUnkRML2() override;

    void func_ov062_02158190(void);
};

class ActorProfileUnkRML2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRML2();
    ~ActorProfileUnkRML2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRML2 *GetProfile();
};
