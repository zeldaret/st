//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMAGR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMAGR();

    /* 4C */ virtual ~ActorUnkMAGR() override;

    void func_ov074_02151b6c(void);
    void func_ov074_02151b80(void);
    void func_ov074_02151dc4(void);
    void func_ov074_0215200c(void);
    void func_ov074_02152258(void);
    void func_ov074_0215237c(void);
    void func_ov074_02152540(void);
    void func_ov074_021525dc(void);
    void func_ov074_021525f0(void);
    void func_ov074_0215260c(void);
    void func_ov074_02152780(void);
    void func_ov074_021527c8(void);
    void func_ov074_02152818(void);
    void func_ov074_021529d0(void);
    void func_ov074_02152a90(void);
    void func_ov074_02152ae0(void);
    void func_ov074_02152b74(void);
    void func_ov074_02152c3c(void);
    void func_ov074_02152c74(void);
    void func_ov074_02152c88(void);
    void func_ov074_02152df0(void);
};

class ActorProfileUnkMAGR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkMAGR();
    ~ActorProfileUnkMAGR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMAGR *GetProfile();
};
