//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMA1_C4 : public Actor_C4 {
public:
    ActorUnkRMA1_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMA1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMA1();

    /* 4C */ virtual ~ActorUnkRMA1() override;

    void func_ov068_02160450(void);
    void func_ov068_02160478(void);
    void func_ov068_0216047c(void);
};

class ActorProfileUnkRMA1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMA1();
    ~ActorProfileUnkRMA1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMA1 *GetProfile();
};
