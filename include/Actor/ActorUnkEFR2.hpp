//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFR2_C4 : public Actor_C4 {
public:
    ActorUnkEFR2_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkEFR2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFR2();

    /* 4C */ virtual ~ActorUnkEFR2() override;

    void func_ov094_02170778(void);
    void func_ov094_02170814(void);
};

class ActorProfileUnkEFR2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFR2();
    ~ActorProfileUnkEFR2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFR2 *GetProfile();
};
