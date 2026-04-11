//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTSLB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTSLB();

    /* 4C */ virtual ~ActorUnkTSLB() override;

    void func_ov062_0215aa1c(void);
    void func_ov062_0215aa30(void);
    void func_ov062_0215ab14(void);
    void func_ov062_0215ab98(void);
    void func_ov062_0215ae34(void);
    void func_ov062_0215aec4(void);
    void func_ov062_0215af7c(void);
    void func_ov062_0215b04c(void);
    void func_ov062_0215b050(void);
    void func_ov062_0215b054(void);
    void func_ov062_0215b08c(void);
    void func_ov062_0215b0c4(void);
    void func_ov062_0215b324(void);
    void func_ov062_0215b330(void);
    void func_ov062_0215b364(void);
    void func_ov062_0215b374(void);
    void func_ov062_0215b388(void);
    void func_ov062_0215b3a4(void);
};

class ActorProfileUnkTSLB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTSLB();
    ~ActorProfileUnkTSLB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTSLB *GetProfile();
};
