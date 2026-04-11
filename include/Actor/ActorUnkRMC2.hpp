//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMC2();

    /* 4C */ virtual ~ActorUnkRMC2() override;

    void func_ov060_0215db44(void);
    void func_ov060_0215db58(void);
    void func_ov060_0215dc04(void);
    void func_ov060_0215dd90(void);
    void func_ov060_0215ddc0(void);
    void func_ov060_0215ddd4(void);
    void func_ov060_0215df00(void);
    void func_ov060_0215df40(void);
    void func_ov060_0215df58(void);
    void func_ov060_0215df7c(void);
    void func_ov060_0215dfa0(void);
    void func_ov060_0215dfb0(void);
    void func_ov060_0215e01c(void);
};

class ActorProfileUnkRMC2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMC2();
    ~ActorProfileUnkRMC2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMC2 *GetProfile();
};
