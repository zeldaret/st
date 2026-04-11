//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMA0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMA0();

    /* 4C */ virtual ~ActorUnkRMA0() override;

    void func_ov068_021606f0(void);
    void func_ov068_02160718(void);
    void func_ov068_0216071c(void);
};

class ActorProfileUnkRMA0 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMA0();
    ~ActorProfileUnkRMA0();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMA0 *GetProfile();
};
