//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMW1_c4 : public Actor_c4 {
public:
    ActorUnkRMW1_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
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
