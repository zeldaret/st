//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTCAM_C4 : public Actor_C4 {
public:
    ActorUnkTCAM_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkTCAM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTCAM();

    /* 4C */ virtual ~ActorUnkTCAM() override;

    void func_ov093_021772a0(void);
    void func_ov093_021772bc(void);
    void func_ov093_0217733c(void);
    void func_ov093_02177474(void);
    void func_ov093_0217747c(void);
    void func_ov093_0217748c(void);
};

class ActorProfileUnkTCAM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTCAM();
    ~ActorProfileUnkTCAM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTCAM *GetProfile();
};
