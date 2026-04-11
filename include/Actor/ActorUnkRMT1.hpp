//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMT1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMT1();

    /* 4C */ virtual ~ActorUnkRMT1() override;

    void func_ov061_02158090(void);
    void func_ov061_021580a4(void);
    void func_ov061_021580f8(void);
    void func_ov061_0215810c(void);
    void func_ov061_02158120(void);
    void func_ov061_02158170(void);
    void func_ov061_02158194(void);
    void func_ov061_021581a4(void);
    void func_ov061_021581f0(void);
};

class ActorProfileUnkRMT1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMT1();
    ~ActorProfileUnkRMT1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMT1 *GetProfile();
};
