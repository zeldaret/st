//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCTFS_c4 : public Actor_c4 {
public:
    ActorUnkCTFS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkCTFS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCTFS();

    /* 4C */ virtual ~ActorUnkCTFS() override;

    void func_ov091_0216a194(void);
    void func_ov091_0216a1a8(void);
    void func_ov091_0216a1d8(void);
    void func_ov091_0216a330(void);
    void func_ov091_0216a344(void);
    void func_ov091_0216a3e4(void);
    void func_ov091_0216a4a4(void);
    void func_ov091_0216a584(void);
    void func_ov091_0216a608(void);
    void func_ov091_0216a638(void);
    void func_ov091_0216a6a4(void);
    void func_ov091_0216a75c(void);
    void func_ov091_0216a868(void);
    void func_ov091_0216a87c(void);
    void func_ov091_0216ab2c(void);
    void func_ov091_0216ab40(void);
    void func_ov091_0216adcc(void);
    void func_ov091_0216ae74(void);
    void func_ov091_0216af50(void);
    void func_ov091_0216b01c(void);
    void func_ov091_0216b100(void);
    void func_ov091_0216b144(void);
    void func_ov091_0216b1c8(void);
    void func_ov091_0216b1d4(void);
    void func_ov091_0216b228(void);
    void func_ov091_0216b250(void);
    void func_ov091_0216b274(void);
    void func_ov091_0216b2e4(void);
};

class ActorProfileUnkCTFS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCTFS();
    ~ActorProfileUnkCTFS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCTFS *GetProfile();
};
