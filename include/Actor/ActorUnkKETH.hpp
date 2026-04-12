//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKETH_c4 : public Actor_c4 {
public:
    ActorUnkKETH_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkKETH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKETH();

    /* 4C */ virtual ~ActorUnkKETH() override;

    void func_ov032_0211dbcc(void);
    void func_ov032_0211de0c(void);
    void func_ov032_0211de20(void);
    void func_ov032_0211de34(void);
    void func_ov032_0211deac(void);
    void func_ov032_0211ded0(void);
    void func_ov032_0211e014(void);
    void func_ov032_0211e0c0(void);
    void func_ov032_0211e0d4(void);
    void func_ov032_0211e308(void);
    void func_ov032_0211e380(void);
    void func_ov032_0211e40c(void);
    void func_ov032_0211e420(void);
    void func_ov032_0211e468(void);
    void func_ov032_0211e778(void);
    void func_ov032_0211e930(void);
    void func_ov032_0211e9ec(void);
    void func_ov032_0211eb60(void);
    void func_ov032_0211ece8(void);
    void func_ov032_0211ee5c(void);
    void func_ov032_0211f054(void);
    void func_ov032_0211f0a8(void);
    void func_ov032_0211f1f0(void);
    void func_ov032_0211f1f4(void);
    void func_ov032_0211f300(void);
    void func_ov032_0211f310(void);
    void func_ov032_0211f3ac(void);
    void func_ov032_0211f404(void);
    void func_ov032_0211f4a4(void);
    void func_ov032_0211f50c(void);
    void func_ov032_0211f560(void);
    void func_ov032_0211f58c(void);
    void func_ov032_0211f604(void);
    void func_ov032_0211f614(void);
    void func_ov032_0211f6bc(void);
    void func_ov032_0211f804(void);
    void func_ov032_0211f93c(void);
    void func_ov032_0211f9c4(void);
    void func_ov032_0211fa4c(void);
    void func_ov032_0211faf0(void);
    void func_ov032_0211fb9c(void);
    void func_ov032_0211fbb4(void);
    void func_ov032_0211fbec(void);
    void func_ov032_0211fc00(void);
    void func_ov032_0211fc1c(void);
    void func_ov032_0211fcc0(void);
};

class ActorProfileUnkKETH : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKETH();
    ~ActorProfileUnkKETH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKETH *GetProfile();
};
