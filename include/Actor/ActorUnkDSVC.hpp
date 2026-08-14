//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDSVC_C4 : public Actor_C4 {
public:
    ActorUnkDSVC_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkDSVC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDSVC();

    /* 4C */ virtual ~ActorUnkDSVC() override;

    void func_ov084_0215af5c(void);
};

class ActorProfileUnkDSVC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDSVC();
    ~ActorProfileUnkDSVC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDSVC *GetProfile();
};
