//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBBF_C4 : public Actor_C4 {
public:
    ActorUnkFBBF_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkFBBF : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFBBF();

    /* 4C */ virtual ~ActorUnkFBBF() override;

    void func_ov054_0213d720(void);
    void func_ov054_0213d798(void);
    void func_ov054_0213d8e0(void);
    void func_ov054_0213d934(void);
    void func_ov054_0213d9ac(void);
};

class ActorProfileUnkFBBF : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFBBF();
    ~ActorProfileUnkFBBF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFBBF *GetProfile();
};
