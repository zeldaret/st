//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMST_c4 : public Actor_c4 {
public:
    ActorUnkRMST_c4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMST();

    /* 4C */ virtual ~ActorUnkRMST() override;

    void func_ov036_0211dea0(void);
};

class ActorProfileUnkRMST : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMST();
    ~ActorProfileUnkRMST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMST *GetProfile();
};
