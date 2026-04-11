//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFBCH();

    /* 4C */ virtual ~ActorUnkFBCH() override;

    void func_ov062_0215878c(void);
    void func_ov062_02158890(void);
    void func_ov062_021588a4(void);
    void func_ov062_021589d8(void);
    void func_ov062_021589fc(void);
    void func_ov062_02158a00(void);
    void func_ov062_02158a9c(void);
    void func_ov062_02158ab0(void);
    void func_ov062_02158b00(void);
    void func_ov062_02158b10(void);
    void func_ov062_02158b34(void);
    void func_ov062_02158b88(void);
};

class ActorProfileUnkFBCH : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFBCH();
    ~ActorProfileUnkFBCH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFBCH *GetProfile();
};
