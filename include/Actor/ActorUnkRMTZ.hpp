//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTZ_C4 : public Actor_C4 {
public:
    ActorUnkRMTZ_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMTZ : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMTZ();

    /* 4C */ virtual ~ActorUnkRMTZ() override;

    void func_ov064_0215958c(void);
    void func_ov064_021595c8(void);
    void func_ov064_02159610(void);
};

class ActorProfileUnkRMTZ : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMTZ();
    ~ActorProfileUnkRMTZ();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMTZ *GetProfile();
};
