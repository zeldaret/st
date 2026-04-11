//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRB1T : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRB1T();

    /* 4C */ virtual ~ActorUnkRB1T() override;

    void func_ov026_0211e3cc(void);
    void func_ov026_0211e3e0(void);
    void func_ov026_0211e4c8(void);
    void func_ov026_0211e554(void);
    void func_ov026_0211e6cc(void);
    void func_ov026_0211e6e4(void);
    void func_ov026_0211e6f0(void);
    void func_ov026_0211e748(void);
    void func_ov026_0211e840(void);
    void func_ov026_0211e8a8(void);
    void func_ov026_0211e8ec(void);
    void func_ov026_0211ec2c(void);
    void func_ov026_0211ee58(void);
    void func_ov026_0211eeb0(void);
    void func_ov026_0211eeb8(void);
    void func_ov026_0211efe0(void);
    void func_ov026_0211f040(void);
    void func_ov026_0211f060(void);
    void func_ov026_0211f0ac(void);
    void func_ov026_0211f0d0(void);
    void func_ov026_0211f140(void);
    void func_ov026_0211f1a0(void);
    void func_ov026_0211f20c(void);
    void func_ov026_0211f28c(void);
    void func_ov026_0211f2f0(void);
    void func_ov026_0211f394(void);
    void func_ov026_0211f3e8(void);
    void func_ov026_0211f430(void);
    void func_ov026_0211f470(void);
    void func_ov026_0211f538(void);
    void func_ov026_0211f658(void);
    void func_ov026_0211f8e4(void);
    void func_ov026_0211f910(void);
    void func_ov026_0211f91c(void);
    void func_ov026_0211fbcc(void);
    void func_ov026_0211fbf8(void);
    void func_ov026_0211ff28(void);
    void func_ov026_021202d4(void);
    void func_ov026_02120340(void);
    void func_ov026_0212037c(void);
    void func_ov026_021203a8(void);
    void func_ov026_021203c0(void);
    void func_ov026_021203d8(void);
    void func_ov026_02120414(void);
    void func_ov026_0212043c(void);
    void func_ov026_02120470(void);
    void func_ov026_0212049c(void);
    void func_ov026_0212052c(void);
    void func_ov026_02120744(void);
    void func_ov026_021207e0(void);
    void func_ov026_02120874(void);
    void func_ov026_021208a0(void);
    void func_ov026_02120954(void);
    void func_ov026_02120974(void);
    void func_ov026_021209d8(void);
    void func_ov026_02120a10(void);
};

class ActorProfileUnkRB1T : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRB1T();
    ~ActorProfileUnkRB1T();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRB1T *GetProfile();
};
