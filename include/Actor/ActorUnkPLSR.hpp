//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPLSR_c4 : public Actor_c4 {
public:
    ActorUnkPLSR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

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
