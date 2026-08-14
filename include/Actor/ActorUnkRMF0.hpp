//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMF0_C4 : public Actor_C4 {
public:
    ActorUnkRMF0_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMF0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMF0();

    /* 4C */ virtual ~ActorUnkRMF0() override;

    void func_ov064_021592f0(void);
};

class ActorProfileUnkRMF0 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMF0();
    ~ActorProfileUnkRMF0();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMF0 *GetProfile();
};
