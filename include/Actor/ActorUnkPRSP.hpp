//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPRSP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPRSP();

    /* 4C */ virtual ~ActorUnkPRSP() override;

    void func_ov029_0214dbac(void);
    void func_ov029_0214dbc0(void);
    void func_ov029_0214dbd4(void);
    void func_ov029_0214dd08(void);
    void func_ov029_0214ddc8(void);
    void func_ov029_0214de38(void);
    void func_ov029_0214dee8(void);
    void func_ov029_0214e1d4(void);
    void func_ov029_0214e240(void);
    void func_ov029_0214e42c(void);
    void func_ov029_0214e454(void);
    void func_ov029_0214e474(void);
    void func_ov029_0214e54c(void);
    void func_ov029_0214e578(void);
    void func_ov029_0214e5b8(void);
    void func_ov029_0214e5d4(void);
    void func_ov029_0214eb24(void);
    void func_ov029_0214eba4(void);
    void func_ov029_0214eeb8(void);
    void func_ov029_0214eebc(void);
    void func_ov029_0214ef94(void);
    void func_ov029_0214f02c(void);
    void func_ov029_0214f3e0(void);
    void func_ov029_0214f40c(void);
    void func_ov029_0214f5b8(void);
    void func_ov029_0214f5c4(void);
    void func_ov029_0214f604(void);
    void func_ov029_0214f608(void);
    void func_ov029_0214f620(void);
    void func_ov029_0214f6c8(void);
    void func_ov029_0214f8ec(void);
    void func_ov029_0214f95c(void);
    void func_ov029_0214fee8(void);
    void func_ov029_0214ff1c(void);
    void func_ov029_0214ffc4(void);
    void func_ov029_0214ffd8(void);
    void func_ov029_021500c4(void);
    void func_ov029_0215021c(void);
    void func_ov029_02150268(void);
    void func_ov029_02150308(void);
    void func_ov029_02150464(void);
    void func_ov029_02150500(void);
    void func_ov029_021505a0(void);
    void func_ov029_02150628(void);
    void func_ov029_02150694(void);
    void func_ov029_02150700(void);
    void func_ov029_02150764(void);
    void func_ov029_02150794(void);
    void func_ov029_02150874(void);
    void func_ov029_0215088c(void);
    void func_ov029_02150970(void);
    void func_ov029_02150c4c(void);
    void func_ov029_02150cb0(void);
    void func_ov029_02150d08(void);
    void func_ov029_02150d30(void);
    void func_ov029_02150d70(void);
    void func_ov029_02150d94(void);
    void func_ov029_02150da4(void);
    void func_ov029_02150dc8(void);
    void func_ov029_02150e2c(void);
};

class ActorProfileUnkPRSP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPRSP();
    ~ActorProfileUnkPRSP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPRSP *GetProfile();
};
