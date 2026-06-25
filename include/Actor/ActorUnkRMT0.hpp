//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMT0_C4 : public Actor_C4 {
public:
    ActorUnkRMT0_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMT0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMT0();

    /* 4C */ virtual ~ActorUnkRMT0() override;

    void func_ov061_02157f18(void);
};

class ActorProfileUnkRMT0 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMT0();
    ~ActorProfileUnkRMT0();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMT0 *GetProfile();
};
