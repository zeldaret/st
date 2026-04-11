//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMC3();

    /* 4C */ virtual ~ActorUnkRMC3() override;

    void func_ov060_0215e308(void);
    void func_ov060_0215e31c(void);
    void func_ov060_0215e4b0(void);
    void func_ov060_0215e4c8(void);
    void func_ov060_0215e4dc(void);
    void func_ov060_0215e51c(void);
    void func_ov060_0215e5a4(void);
};

class ActorProfileUnkRMC3 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMC3();
    ~ActorProfileUnkRMC3();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMC3 *GetProfile();
};
