//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSTTG_c4 : public Actor_c4 {
public:
    ActorUnkSTTG_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSTTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSTTG();

    /* 4C */ virtual ~ActorUnkSTTG() override;

    void func_ov094_0216a4a0(void);
    void func_ov094_0216a4fc(void);
    void func_ov094_0216a5d4(void);
    void func_ov094_0216a600(void);
    void func_ov094_0216a74c(void);
    void func_ov094_0216a760(void);
    void func_ov094_0216a768(void);
    void func_ov094_0216a788(void);
    void func_ov094_0216a84c(void);
    void func_ov094_0216a870(void);
    void func_ov094_0216a928(void);
    void func_ov094_0216aa78(void);
    void func_ov094_0216aae4(void);
    void func_ov094_0216ab34(void);
    void func_ov094_0216ada8(void);
    void func_ov094_0216aec0(void);
    void func_ov094_0216aee8(void);
    void func_ov094_0216b150(void);
    void func_ov094_0216b188(void);
    void func_ov094_0216b1a4(void);
};

class ActorProfileUnkSTTG : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSTTG();
    ~ActorProfileUnkSTTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSTTG *GetProfile();
};
