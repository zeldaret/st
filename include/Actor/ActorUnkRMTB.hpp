//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTB_c4 : public Actor_c4 {
public:
    ActorUnkRMTB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
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
