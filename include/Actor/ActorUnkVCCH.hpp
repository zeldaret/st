//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkVCCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkVCCH();

    /* 4C */ virtual ~ActorUnkVCCH() override;

    void func_ov066_02157f40(void);
    void func_ov066_02157fb8(void);
    void func_ov066_02157fc4(void);
    void func_ov066_02158448(void);
    void func_ov066_0215845c(void);
    void func_ov066_02158470(void);
    void func_ov066_02158498(void);
    void func_ov066_021587e8(void);
    void func_ov066_021589c0(void);
    void func_ov066_02158a20(void);
    void func_ov066_02158a68(void);
    void func_ov066_02158ac0(void);
    void func_ov066_02158b6c(void);
    void func_ov066_02158b88(void);
    void func_ov066_02158be8(void);
    void func_ov066_02158c0c(void);
    void func_ov066_02158c1c(void);
    void func_ov066_02158c24(void);
    void func_ov066_02158c40(void);
    void func_ov066_02158c80(void);
    void func_ov066_02158cc8(void);
    void func_ov066_02158cec(void);
    void func_ov066_02158d18(void);
    void func_ov066_02158d34(void);
};

class ActorProfileUnkVCCH : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkVCCH();
    ~ActorProfileUnkVCCH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkVCCH *GetProfile();
};
