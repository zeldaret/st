//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC2_c4 : public Actor_c4 {
public:
    ActorUnkRMC2_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMC2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMC2();

    /* 4C */ virtual ~ActorUnkRMC2() override;

    void func_ov060_0215db44(void);
    void func_ov060_0215db58(void);
    void func_ov060_0215dc04(void);
    void func_ov060_0215dd90(void);
    void func_ov060_0215ddc0(void);
    void func_ov060_0215ddd4(void);
    void func_ov060_0215df00(void);
    void func_ov060_0215df40(void);
    void func_ov060_0215df58(void);
    void func_ov060_0215df7c(void);
    void func_ov060_0215dfa0(void);
    void func_ov060_0215dfb0(void);
    void func_ov060_0215e01c(void);
};

class ActorProfileUnkRMC2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMC2();
    ~ActorProfileUnkRMC2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMC2 *GetProfile();
};
