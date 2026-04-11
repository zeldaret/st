//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMM1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMM1();

    /* 4C */ virtual ~ActorUnkRMM1() override;

    void func_ov034_02119018(void);
    void func_ov034_02119090(void);
    void func_ov034_0211911c(void);
    void func_ov034_02119238(void);
    void func_ov034_02119278(void);
};

class ActorProfileUnkRMM1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMM1();
    ~ActorProfileUnkRMM1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMM1 *GetProfile();
};
