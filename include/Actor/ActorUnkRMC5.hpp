//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMC5_c4 : public Actor_c4 {
public:
    ActorUnkRMC5_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMC5 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMC5();

    /* 4C */ virtual ~ActorUnkRMC5() override;

    void func_ov060_0215e7fc(void);
    void func_ov060_0215e800(void);
    void func_ov060_0215e884(void);
    void func_ov060_0215e898(void);
};

class ActorProfileUnkRMC5 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMC5();
    ~ActorProfileUnkRMC5();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMC5 *GetProfile();
};
