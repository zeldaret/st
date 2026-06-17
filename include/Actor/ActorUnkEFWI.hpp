//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFWI_C4 : public Actor_C4 {
public:
    ActorUnkEFWI_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkEFWI : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFWI();

    /* 4C */ virtual ~ActorUnkEFWI() override;

    void func_ov098_02181738(void);
    void func_ov098_021817d4(void);
};

class ActorProfileUnkEFWI : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFWI();
    ~ActorProfileUnkEFWI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFWI *GetProfile();
};
