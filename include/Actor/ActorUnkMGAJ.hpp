//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMGAJ : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMGAJ();

    /* 4C */ virtual ~ActorUnkMGAJ() override;

    void func_ov068_0215e6d4(void);
    void func_ov068_0215e76c(void);
    void func_ov068_0215e7ac(void);
    void func_ov068_0215e7b8(void);
    void func_ov068_0215e7e4(void);
    void func_ov068_0215e894(void);
};

class ActorProfileUnkMGAJ : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkMGAJ();
    ~ActorProfileUnkMGAJ();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMGAJ *GetProfile();
};
