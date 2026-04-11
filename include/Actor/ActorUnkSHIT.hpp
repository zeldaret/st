//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSHIT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSHIT();

    /* 4C */ virtual ~ActorUnkSHIT() override;

    void func_ov036_0211c1fc(void);
    void func_ov036_0211c21c(void);
    void func_ov036_0211c280(void);
    void func_ov036_0211c580(void);
    void func_ov036_0211c7dc(void);
    void func_ov036_0211c7e4(void);
    void func_ov036_0211c938(void);
    void func_ov036_0211c94c(void);
    void func_ov036_0211c96c(void);
    void func_ov036_0211c970(void);
    void func_ov036_0211c974(void);
    void func_ov036_0211c978(void);
    void func_ov036_0211c97c(void);
    void func_ov036_0211c980(void);
    void func_ov036_0211c984(void);
    void func_ov036_0211c994(void);
    void func_ov036_0211c998(void);
    void func_ov036_0211c9ac(void);
    void func_ov036_0211c9cc(void);
    void func_ov036_0211c9d4(void);
    void func_ov036_0211cddc(void);
    void func_ov036_0211cdfc(void);
    void func_ov036_0211ceec(void);
    void func_ov036_0211d0a8(void);
    void func_ov036_0211d22c(void);
    void func_ov036_0211d254(void);
    void func_ov036_0211d270(void);
    void func_ov036_0211d28c(void);
    void func_ov036_0211d2a8(void);
    void func_ov036_0211d2dc(void);
    void func_ov036_0211d570(void);
    void func_ov036_0211d75c(void);
    void func_ov036_0211d774(void);
    void func_ov036_0211d790(void);
};

class ActorProfileUnkSHIT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSHIT();
    ~ActorProfileUnkSHIT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSHIT *GetProfile();
};
