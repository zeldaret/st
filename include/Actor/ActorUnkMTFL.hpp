//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMTFL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMTFL();

    /* 4C */ virtual ~ActorUnkMTFL() override;

    void func_ov092_02170374(void);
    void func_ov092_021703c4(void);
    void func_ov092_02170448(void);
    void func_ov092_02170458(void);
    void func_ov092_0217063c(void);
    void func_ov092_02170664(void);
    void func_ov092_0217067c(void);
    void func_ov092_02170730(void);
    void func_ov092_02170774(void);
    void func_ov092_021709d8(void);
    void func_ov092_02170afc(void);
    void func_ov092_02170d18(void);
    void func_ov092_02171038(void);
    void func_ov092_0217106c(void);
    void func_ov092_0217108c(void);
    void func_ov092_021713f0(void);
    void func_ov092_02171478(void);
    void func_ov092_021715a0(void);
    void func_ov092_02171844(void);
    void func_ov092_02171894(void);
    void func_ov092_02171a2c(void);
    void func_ov092_02171a84(void);
    void func_ov092_02171b28(void);
};

class ActorProfileUnkMTFL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkMTFL();
    ~ActorProfileUnkMTFL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMTFL *GetProfile();
};
