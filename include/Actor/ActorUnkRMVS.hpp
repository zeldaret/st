//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMVS_C4 : public Actor_C4 {
public:
    ActorUnkRMVS_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMVS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMVS();

    /* 4C */ virtual ~ActorUnkRMVS() override;

    void func_ov059_02162008(void);
    void func_ov059_021620a8(void);
    void func_ov059_021620d4(void);
    void func_ov059_02162124(void);
};

class ActorProfileUnkRMVS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMVS();
    ~ActorProfileUnkRMVS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMVS *GetProfile();
};
