//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRML3_C4 : public Actor_C4 {
public:
    ActorUnkRML3_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRML3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRML3();

    /* 4C */ virtual ~ActorUnkRML3() override;

    void func_ov062_021582b4(void);
};

class ActorProfileUnkRML3 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRML3();
    ~ActorProfileUnkRML3();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRML3 *GetProfile();
};
