//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkZLBB_C4 : public Actor_C4 {
public:
    ActorUnkZLBB_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkZLBB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkZLBB();

    /* 4C */ virtual ~ActorUnkZLBB() override;

    void func_ov074_02155920(void);
    void func_ov074_021559b0(void);
    void func_ov074_021559c0(void);
    void func_ov074_02155a08(void);
    void func_ov074_02155dec(void);
    void func_ov074_02155e7c(void);
    void func_ov074_02155e80(void);
    void func_ov074_02156074(void);
    void func_ov074_021560b8(void);
    void func_ov074_021560cc(void);
    void func_ov074_02156138(void);
    void func_ov074_0215613c(void);
    void func_ov074_02156178(void);
    void func_ov074_02156210(void);
    void func_ov074_02156a14(void);
};

class ActorProfileUnkZLBB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkZLBB();
    ~ActorProfileUnkZLBB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkZLBB *GetProfile();
};
