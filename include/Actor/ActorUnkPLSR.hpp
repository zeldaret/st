//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPLSR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPLSR();

    /* 4C */ virtual ~ActorUnkPLSR() override;

    void func_ov038_0211f288(void);
    void func_ov038_0211f740(void);
    void func_ov038_0211f908(void);
    void func_ov038_0211fcf0(void);
    void func_ov038_02120478(void);
    void func_ov038_02120654(void);
    void func_ov038_0212072c(void);
    void func_ov038_02120824(void);
    void func_ov038_02120894(void);
    void func_ov038_021208c4(void);
};

class ActorProfileUnkPLSR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPLSR();
    ~ActorProfileUnkPLSR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPLSR *GetProfile();
};
