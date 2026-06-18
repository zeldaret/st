//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMV1_C4 : public Actor_C4 {
public:
    ActorUnkRMV1_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMV1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMV1();

    /* 4C */ virtual ~ActorUnkRMV1() override;

    void func_ov067_02159ef4(void);
};

class ActorProfileUnkRMV1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMV1();
    ~ActorProfileUnkRMV1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMV1 *GetProfile();
};
