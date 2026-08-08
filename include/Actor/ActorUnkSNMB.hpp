//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSNMB_C4 : public Actor_C4 {
public:
    ActorUnkSNMB_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkSNMB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSNMB();

    /* 4C */ virtual ~ActorUnkSNMB() override;

    void func_ov028_02143290(void);
    void func_ov028_021432b4(void);
    void func_ov028_021432e4(void);
    void func_ov028_02143440(void);
    void func_ov028_021434f0(void);
    void func_ov028_02143630(void);
    void func_ov028_021437a8(void);
};

class ActorProfileUnkSNMB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSNMB();
    ~ActorProfileUnkSNMB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSNMB *GetProfile();
};
