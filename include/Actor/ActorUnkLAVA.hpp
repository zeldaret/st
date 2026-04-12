//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLAVA_c4 : public Actor_c4 {
public:
    ActorUnkLAVA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkLAVA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkLAVA();

    /* 4C */ virtual ~ActorUnkLAVA() override;

    void func_ov084_0215e178(void);
    void func_ov084_0215e18c(void);
    void func_ov084_0215e334(void);
    void func_ov084_0215e498(void);
    void func_ov084_0215e4ac(void);
    void func_ov084_0215e54c(void);
    void func_ov084_0215e5d0(void);
    void func_ov084_0215e64c(void);
    void func_ov084_0215e670(void);
    void func_ov084_0215e674(void);
    void func_ov084_0215e7fc(void);
    void func_ov084_0215e988(void);
    void func_ov084_0215e9e0(void);
    void func_ov084_0215e9fc(void);
    void func_ov084_0215ea14(void);
    void func_ov084_0215eae4(void);
};

class ActorProfileUnkLAVA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkLAVA();
    ~ActorProfileUnkLAVA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkLAVA *GetProfile();
};
