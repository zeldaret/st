//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTB_C4 : public Actor_C4 {
public:
    ActorUnkRMTB_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMTB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMTB();

    /* 4C */ virtual ~ActorUnkRMTB() override;

    void func_ov059_02162bf0(void);
};

class ActorProfileUnkRMTB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMTB();
    ~ActorProfileUnkRMTB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMTB *GetProfile();
};
