//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkITWP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkITWP();

    /* 4C */ virtual ~ActorUnkITWP() override;

    void func_ov105_02188ebc(void);
    void func_ov105_02188f08(void);
    void func_ov105_02188f64(void);
    void func_ov105_02188f78(void);
    void func_ov105_02188f88(void);
    void func_ov105_02188f98(void);
    void func_ov105_02189280(void);
    void func_ov105_02189284(void);
    void func_ov105_0218952c(void);
    void func_ov105_021897c0(void);
    void func_ov105_02189df0(void);
    void func_ov105_02189e2c(void);
    void func_ov105_02189e90(void);
    void func_ov105_02189ec4(void);
    void func_ov105_02189ef8(void);
    void func_ov105_02189f28(void);
    void func_ov105_02189f80(void);
    void func_ov105_02189fc8(void);
    void func_ov105_0218a010(void);
    void func_ov105_0218a044(void);
    void func_ov105_0218a078(void);
};

class ActorProfileUnkITWP : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkITWP();
    ~ActorProfileUnkITWP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkITWP *GetProfile();
};
