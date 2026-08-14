//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkZLBS_C4 : public Actor_C4 {
public:
    ActorUnkZLBS_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkZLBS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkZLBS();

    /* 4C */ virtual ~ActorUnkZLBS() override;

    void func_ov074_021531fc(void);
    void func_ov074_02153210(void);
    void func_ov074_021533f0(void);
    void func_ov074_021534d4(void);
    void func_ov074_02153508(void);
    void func_ov074_02153568(void);
    void func_ov074_021535a8(void);
    void func_ov074_02153820(void);
    void func_ov074_02153854(void);
    void func_ov074_021539c8(void);
    void func_ov074_021539cc(void);
    void func_ov074_021539d0(void);
    void func_ov074_02153a0c(void);
    void func_ov074_02153a28(void);
    void func_ov074_02153ab8(void);
    void func_ov074_02153aec(void);
    void func_ov074_02153bec(void);
    void func_ov074_02153d64(void);
    void func_ov074_02153dfc(void);
    void func_ov074_02153f20(void);
    void func_ov074_02153f6c(void);
    void func_ov074_02154194(void);
    void func_ov074_021542e0(void);
    void func_ov074_02154368(void);
    void func_ov074_021543cc(void);
    void func_ov074_02154610(void);
    void func_ov074_02154828(void);
    void func_ov074_021549f8(void);
    void func_ov074_02154a24(void);
    void func_ov074_02154d88(void);
    void func_ov074_02154de8(void);
    void func_ov074_02154e60(void);
    void func_ov074_02154edc(void);
    void func_ov074_02154f30(void);
    void func_ov074_02154f5c(void);
    void func_ov074_02155020(void);
    void func_ov074_02155094(void);
    void func_ov074_021551dc(void);
    void func_ov074_02155540(void);
    void func_ov074_02155650(void);
    void func_ov074_02155674(void);
    void func_ov074_021556a0(void);
    void func_ov074_021556ac(void);
};

class ActorProfileUnkZLBS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkZLBS();
    ~ActorProfileUnkZLBS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkZLBS *GetProfile();
};
