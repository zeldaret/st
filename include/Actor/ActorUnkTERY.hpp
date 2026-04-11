//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTERY : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTERY();

    /* 4C */ virtual ~ActorUnkTERY() override;

    void func_ov036_0211be6c(void);
    void func_ov036_0211bea0(void);
    void func_ov036_0211bf88(void);
    void func_ov036_0211bf9c(void);
    void func_ov036_0211c000(void);
    void func_ov036_0211c02c(void);
    void func_ov036_0211c0e4(void);
    void func_ov036_0211c108(void);
};

class ActorProfileUnkTERY : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTERY();
    ~ActorProfileUnkTERY();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTERY *GetProfile();
};
