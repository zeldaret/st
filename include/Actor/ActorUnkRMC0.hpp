//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC0_c4 : public Actor_c4 {
public:
    ActorUnkRMC0_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMC0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMC0();

    /* 4C */ virtual ~ActorUnkRMC0() override;

    void func_ov060_0215d52c(void);
    void func_ov060_0215d5fc(void);
    void func_ov060_0215d610(void);
    void func_ov060_0215d634(void);
    void func_ov060_0215d648(void);
    void func_ov060_0215d6b0(void);
    void func_ov060_0215d75c(void);
    void func_ov060_0215d770(void);
    void func_ov060_0215d790(void);
    void func_ov060_0215d834(void);
};

class ActorProfileUnkRMC0 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMC0();
    ~ActorProfileUnkRMC0();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMC0 *GetProfile();
};
