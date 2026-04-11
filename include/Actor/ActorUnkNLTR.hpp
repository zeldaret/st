//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNLTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNLTR();

    /* 4C */ virtual ~ActorUnkNLTR() override;

    void func_ov091_0216b3bc(void);
    void func_ov091_0216b4d8(void);
    void func_ov091_0216b518(void);
    void func_ov091_0216b52c(void);
    void func_ov091_0216b690(void);
    void func_ov091_0216b70c(void);
    void func_ov091_0216b78c(void);
    void func_ov091_0216b7ac(void);
    void func_ov091_0216b7b0(void);
    void func_ov091_0216b8f4(void);
    void func_ov091_0216b9e4(void);
    void func_ov091_0216b9e8(void);
    void func_ov091_0216ba14(void);
    void func_ov091_0216ba6c(void);
    void func_ov091_0216ba8c(void);
    void func_ov091_0216bb94(void);
    void func_ov091_0216bc2c(void);
    void func_ov091_0216bd3c(void);
    void func_ov091_0216be24(void);
    void func_ov091_0216be40(void);
    void func_ov091_0216bfac(void);
    void func_ov091_0216bfd0(void);
    void func_ov091_0216bfe0(void);
    void func_ov091_0216bfe8(void);
};

class ActorProfileUnkNLTR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkNLTR();
    ~ActorProfileUnkNLTR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNLTR *GetProfile();
};
