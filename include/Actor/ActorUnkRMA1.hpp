//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMA1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMA1();

    /* 4C */ virtual ~ActorUnkRMA1() override;

    void func_ov068_02160450(void);
    void func_ov068_02160478(void);
    void func_ov068_0216047c(void);
};

class ActorProfileUnkRMA1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMA1();
    ~ActorProfileUnkRMA1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMA1 *GetProfile();
};
