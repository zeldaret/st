//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBDLB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBDLB();

    /* 4C */ virtual ~ActorUnkBDLB() override;

    void func_ov045_02128468(void);
    void func_ov045_021284dc(void);
    void func_ov045_02128518(void);
    void func_ov045_02128598(void);
    void func_ov045_021288b8(void);
    void func_ov045_0212896c(void);
    void func_ov045_02128980(void);
    void func_ov045_02128a00(void);
    void func_ov045_02128ab4(void);
    void func_ov045_02128c44(void);
    void func_ov045_02128d48(void);
    void func_ov045_02128db0(void);
    void func_ov045_02128dc4(void);
    void func_ov045_02128e2c(void);
    void func_ov045_02128e3c(void);
};

class ActorProfileUnkBDLB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBDLB();
    ~ActorProfileUnkBDLB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBDLB *GetProfile();
};
