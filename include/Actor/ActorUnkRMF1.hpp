//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMF1_c4 : public Actor_c4 {
public:
    ActorUnkRMF1_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMF1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMF1();

    /* 4C */ virtual ~ActorUnkRMF1() override;

    void func_ov064_02159414(void);
};

class ActorProfileUnkRMF1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMF1();
    ~ActorProfileUnkRMF1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMF1 *GetProfile();
};
