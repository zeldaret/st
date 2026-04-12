//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSTFB_c4 : public Actor_c4 {
public:
    ActorUnkSTFB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSTFB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSTFB();

    /* 4C */ virtual ~ActorUnkSTFB() override;

    void func_ov043_021283c8(void);
    void func_ov043_02128410(void);
    void func_ov043_02128530(void);
    void func_ov043_02128544(void);
    void func_ov043_02128580(void);
    void func_ov043_0212877c(void);
    void func_ov043_021287f8(void);
    void func_ov043_021288e8(void);
    void func_ov043_02128954(void);
    void func_ov043_02128a08(void);
};

class ActorProfileUnkSTFB : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSTFB();
    ~ActorProfileUnkSTFB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSTFB *GetProfile();
};
