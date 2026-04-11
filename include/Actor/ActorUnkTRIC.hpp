//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRIC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTRIC();

    /* 4C */ virtual ~ActorUnkTRIC() override;

    void func_ov091_02175e78(void);
    void func_ov091_02175f14(void);
    void func_ov091_02175f64(void);
    void func_ov091_0217610c(void);
    void func_ov091_02176144(void);
    void func_ov091_02176158(void);
    void func_ov091_02176198(void);
    void func_ov091_02176224(void);
    void func_ov091_02176238(void);
    void func_ov091_02176304(void);
    void func_ov091_02176318(void);
    void func_ov091_0217637c(void);
    void func_ov091_021763b4(void);
    void func_ov091_02176410(void);
    void func_ov091_0217646c(void);
    void func_ov091_021765f8(void);
    void func_ov091_0217669c(void);
    void func_ov091_02176728(void);
    void func_ov091_021767d4(void);
    void func_ov091_02176804(void);
};

class ActorProfileUnkTRIC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTRIC();
    ~ActorProfileUnkTRIC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTRIC *GetProfile();
};
