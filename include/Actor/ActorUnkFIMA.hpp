//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFIMA_c4 : public Actor_c4 {
public:
    ActorUnkFIMA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkFIMA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFIMA();

    /* 4C */ virtual ~ActorUnkFIMA() override;

    void func_ov035_021191dc(void);
    void func_ov035_021191f0(void);
    void func_ov035_02119204(void);
    void func_ov035_021192c4(void);
    void func_ov035_021192ec(void);
    void func_ov035_02119360(void);
    void func_ov035_021197c4(void);
    void func_ov035_021197fc(void);
    void func_ov035_0211982c(void);
    void func_ov035_021198bc(void);
    void func_ov035_02119980(void);
    void func_ov035_02119988(void);
    void func_ov035_021199a0(void);
    void func_ov035_02119aac(void);
    void func_ov035_02119cac(void);
    void func_ov035_02119de0(void);
    void func_ov035_0211a134(void);
    void func_ov035_0211a260(void);
    void func_ov035_0211a4e8(void);
    void func_ov035_0211a568(void);
    void func_ov035_0211a6f8(void);
    void func_ov035_0211a738(void);
    void func_ov035_0211a76c(void);
    void func_ov035_0211a780(void);
    void func_ov035_0211a7ac(void);
    void func_ov035_0211a7b8(void);
    void func_ov035_0211a918(void);
    void func_ov035_0211a974(void);
    void func_ov035_0211a998(void);
    void func_ov035_0211a9e0(void);
    void func_ov035_0211aa24(void);
};

class ActorProfileUnkFIMA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFIMA();
    ~ActorProfileUnkFIMA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFIMA *GetProfile();
};
