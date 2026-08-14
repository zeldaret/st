//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMDS_C4 : public Actor_C4 {
public:
    ActorUnkRMDS_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMDS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMDS();

    /* 4C */ virtual ~ActorUnkRMDS() override;

    void func_ov086_0215db44(void);
    void func_ov086_0215dbb0(void);
    void func_ov086_0215dbb4(void);
    void func_ov086_0215dbc8(void);
    void func_ov086_0215dbdc(void);
    void func_ov086_0215dbe8(void);
};

class ActorProfileUnkRMDS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMDS();
    ~ActorProfileUnkRMDS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMDS *GetProfile();
};
