//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMW1_C4 : public Actor_C4 {
public:
    ActorUnkRMW1_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMW1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMW1();

    /* 4C */ virtual ~ActorUnkRMW1() override;

    void func_ov066_0215c4bc(void);
};

class ActorProfileUnkRMW1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMW1();
    ~ActorProfileUnkRMW1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMW1 *GetProfile();
};
