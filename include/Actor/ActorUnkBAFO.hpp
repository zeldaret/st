//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBAFO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBAFO();

    /* 4C */ virtual ~ActorUnkBAFO() override;

    void func_ov021_020f0d54(void);
    void func_ov021_020f0f18(void);
    void func_ov021_020f1008(void);
    void func_ov021_020f1138(void);
    void func_ov021_020f125c(void);
    void func_ov021_020f126c(void);
    void func_ov021_020f1270(void);
    void func_ov021_020f1290(void);
    void func_ov021_020f12c8(void);
    void func_ov021_020f12e8(void);
    void func_ov021_020f1320(void);
    void func_ov021_020f1330(void);
    void func_ov021_020f1408(void);
    void func_ov021_020f1440(void);
    void func_ov021_020f1490(void);
    void func_ov021_020f14b0(void);
    void func_ov021_020f14f0(void);
    void func_ov021_020f151c(void);
    void func_ov021_020f159c(void);
    void func_ov021_020f15d8(void);
    void func_ov021_020f1720(void);
    void func_ov021_020f175c(void);
    void func_ov021_020f1800(void);
    void func_ov021_020f1860(void);
    void func_ov021_020f18a4(void);
    void func_ov021_020f18d0(void);
    void func_ov021_020f18d4(void);
    void func_ov021_020f1958(void);
};

class ActorProfileUnkBAFO : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBAFO();
    ~ActorProfileUnkBAFO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBAFO *GetProfile();
};
