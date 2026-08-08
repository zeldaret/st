//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMGAJ_C4 : public Actor_C4 {
public:
    ActorUnkMGAJ_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkMGAJ : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMGAJ();

    /* 4C */ virtual ~ActorUnkMGAJ() override;

    void func_ov068_0215e6d4(void);
    void func_ov068_0215e76c(void);
    void func_ov068_0215e7ac(void);
    void func_ov068_0215e7b8(void);
    void func_ov068_0215e7e4(void);
    void func_ov068_0215e894(void);
};

class ActorProfileUnkMGAJ : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkMGAJ();
    ~ActorProfileUnkMGAJ();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMGAJ *GetProfile();
};
