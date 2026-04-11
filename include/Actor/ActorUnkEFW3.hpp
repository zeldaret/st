//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFW3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFW3();

    /* 4C */ virtual ~ActorUnkEFW3() override;

    void func_ov083_0215c6e8(void);
    void func_ov083_0215c784(void);
};

class ActorProfileUnkEFW3 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFW3();
    ~ActorProfileUnkEFW3();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFW3 *GetProfile();
};
