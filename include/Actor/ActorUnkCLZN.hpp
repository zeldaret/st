//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCLZN_C4 : public Actor_C4 {
public:
    ActorUnkCLZN_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkCLZN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCLZN();

    /* 4C */ virtual ~ActorUnkCLZN() override;

    void func_ov021_020f3940(void);
    void func_ov021_020f3964(void);
};

class ActorProfileUnkCLZN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkCLZN();
    ~ActorProfileUnkCLZN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCLZN *GetProfile();
};
