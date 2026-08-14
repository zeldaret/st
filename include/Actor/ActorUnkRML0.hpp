//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRML0_C4 : public Actor_C4 {
public:
    ActorUnkRML0_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRML0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRML0();

    /* 4C */ virtual ~ActorUnkRML0() override;

    void func_ov062_02157f18(void);
    void func_ov062_02157f48(void);
};

class ActorProfileUnkRML0 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRML0();
    ~ActorProfileUnkRML0();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRML0 *GetProfile();
};
