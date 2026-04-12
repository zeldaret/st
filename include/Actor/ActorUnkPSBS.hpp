//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPSBS_c4 : public Actor_c4 {
public:
    ActorUnkPSBS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkPSBS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPSBS();

    /* 4C */ virtual ~ActorUnkPSBS() override;

    void func_ov059_0215c7f4(void);
    void func_ov059_0215c808(void);
    void func_ov059_0215c984(void);
    void func_ov059_0215c9b0(void);
    void func_ov059_0215c9f8(void);
    void func_ov059_0215ca78(void);
    void func_ov059_0215cc94(void);
    void func_ov059_0215cfcc(void);
    void func_ov059_0215d00c(void);
    void func_ov059_0215d024(void);
    void func_ov059_0215d2d8(void);
    void func_ov059_0215d358(void);
    void func_ov059_0215d388(void);
    void func_ov059_0215dc60(void);
    void func_ov059_0215dc8c(void);
    void func_ov059_0215de74(void);
    void func_ov059_0215dfa8(void);
    void func_ov059_0215e3e4(void);
    void func_ov059_0215e450(void);
    void func_ov059_0215e784(void);
    void func_ov059_0215e788(void);
    void func_ov059_0215e78c(void);
    void func_ov059_0215e79c(void);
    void func_ov059_0215e7a0(void);
    void func_ov059_0215e7b8(void);
    void func_ov059_0215ed50(void);
    void func_ov059_0215ef44(void);
    void func_ov059_0215f3d0(void);
    void func_ov059_0215f42c(void);
    void func_ov059_0215f6d8(void);
    void func_ov059_0215f740(void);
    void func_ov059_0215f774(void);
    void func_ov059_0215faec(void);
    void func_ov059_0215fba4(void);
    void func_ov059_0215fc2c(void);
    void func_ov059_0215fc98(void);
    void func_ov059_0215fee0(void);
    void func_ov059_0215fef8(void);
    void func_ov059_02160044(void);
    void func_ov059_02160140(void);
    void func_ov059_021601ac(void);
    void func_ov059_021602d4(void);
    void func_ov059_021603f0(void);
};

class ActorProfileUnkPSBS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPSBS();
    ~ActorProfileUnkPSBS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPSBS *GetProfile();
};
