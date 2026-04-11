//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWBPS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWBPS();

    /* 4C */ virtual ~ActorUnkWBPS() override;

    void func_ov083_0215a7d4(void);
    void func_ov083_0215a7f8(void);
    void func_ov083_0215a9ac(void);
    void func_ov083_0215a9c8(void);
    void func_ov083_0215aaf8(void);
    void func_ov083_0215ab70(void);
    void func_ov083_0215ace0(void);
    void func_ov083_0215ad70(void);
    void func_ov083_0215adac(void);
    void func_ov083_0215adb8(void);
    void func_ov083_0215aed4(void);
    void func_ov083_0215af78(void);
};

class ActorProfileUnkWBPS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWBPS();
    ~ActorProfileUnkWBPS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWBPS *GetProfile();
};
