//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMNCB_C4 : public Actor_C4 {
public:
    ActorUnkMNCB_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkMNCB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMNCB();

    /* 4C */ virtual ~ActorUnkMNCB() override;

    void func_ov094_0216fbc0(void);
    void func_ov094_0216fbd4(void);
    void func_ov094_0216fbdc(void);
    void func_ov094_0216fc74(void);
    void func_ov094_0216fc7c(void);
    void func_ov094_0216fd58(void);
    void func_ov094_0216fe34(void);
    void func_ov094_0216fe70(void);
    void func_ov094_0216ffe8(void);
    void func_ov094_02170374(void);
    void func_ov094_02170584(void);
};

class ActorProfileUnkMNCB : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkMNCB();
    ~ActorProfileUnkMNCB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMNCB *GetProfile();
};
