//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTR_c4 : public Actor_c4 {
public:
    ActorUnkRMTR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMTR();

    /* 4C */ virtual ~ActorUnkRMTR() override;

    void func_ov059_02162a9c(void);
    void func_ov059_02162ad4(void);
    void func_ov059_02162af4(void);
};

class ActorProfileUnkRMTR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMTR();
    ~ActorProfileUnkRMTR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMTR *GetProfile();
};
