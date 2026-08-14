//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkE3LV_C4 : public Actor_C4 {
public:
    ActorUnkE3LV_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkE3LV : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkE3LV();

    /* 4C */ virtual ~ActorUnkE3LV() override;

    void func_ov099_02181d2c(void);
    void func_ov099_02181dd8(void);
    void func_ov099_02181e04(void);
    void func_ov099_02181e18(void);
};

class ActorProfileUnkE3LV : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkE3LV();
    ~ActorProfileUnkE3LV();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkE3LV *GetProfile();
};
