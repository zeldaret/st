//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWBTN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWBTN();

    /* 4C */ virtual ~ActorUnkWBTN() override;

    void func_ov046_02127a00(void);
    void func_ov046_02127a14(void);
    void func_ov046_02127ae8(void);
    void func_ov046_02127b78(void);
    void func_ov046_02127b84(void);
    void func_ov046_02127bec(void);
    void func_ov046_02127c1c(void);
    void func_ov046_02127cc8(void);
    void func_ov046_02127cd0(void);
    void func_ov046_02127cdc(void);
    void func_ov046_02127d8c(void);
    void func_ov046_02127ee8(void);
    void func_ov046_02127f3c(void);
    void func_ov046_02128174(void);
    void func_ov046_0212825c(void);
    void func_ov046_02128260(void);
    void func_ov046_021282a4(void);
    void func_ov046_021282dc(void);
    void func_ov046_02128358(void);
    void func_ov046_02128388(void);
    void func_ov046_021284a4(void);
    void func_ov046_021284fc(void);
    void func_ov046_02128518(void);
    void func_ov046_02128528(void);
    void func_ov046_02128568(void);
    void func_ov046_021285d4(void);
    void func_ov046_02128608(void);
    void func_ov046_02128644(void);
    void func_ov046_02128660(void);
    void func_ov046_021286a0(void);
    void func_ov046_021286dc(void);
    void func_ov046_0212871c(void);
    void func_ov046_02128730(void);
    void func_ov046_02128750(void);
    void func_ov046_02128780(void);
    void func_ov046_021287c4(void);
    void func_ov046_02128844(void);
    void func_ov046_02128860(void);
};

class ActorProfileUnkWBTN : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWBTN();
    ~ActorProfileUnkWBTN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWBTN *GetProfile();
};
