//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLBRC_c4 : public Actor_c4 {
public:
    ActorUnkLBRC_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkLBRC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkLBRC();

    /* 4C */ virtual ~ActorUnkLBRC() override;

    void func_ov084_02160ac8(void);
    void func_ov084_02160cd4(void);
    void func_ov084_02160cec(void);
    void func_ov084_02160cf0(void);
    void func_ov084_02160d2c(void);
    void func_ov084_02160e14(void);
    void func_ov084_02160f84(void);
    void func_ov084_02161030(void);
    void func_ov084_02161070(void);
    void func_ov084_021610d8(void);
    void func_ov084_021610e4(void);
};

class ActorProfileUnkLBRC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkLBRC();
    ~ActorProfileUnkLBRC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkLBRC *GetProfile();
};
