//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMA2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMA2();

    /* 4C */ virtual ~ActorUnkRMA2() override;

    void func_ov068_021605a0(void);
    void func_ov068_021605c8(void);
    void func_ov068_021605cc(void);
};

class ActorProfileUnkRMA2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMA2();
    ~ActorProfileUnkRMA2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMA2 *GetProfile();
};
