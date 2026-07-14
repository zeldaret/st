//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkVLCR_C4 : public Actor_C4 {
public:
    ActorUnkVLCR_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkVLCR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkVLCR();

    /* 4C */ virtual ~ActorUnkVLCR() override;

    void func_ov094_02168bb0(void);
    void func_ov094_02168d64(void);
    void func_ov094_02168d74(void);
    void func_ov094_02168db0(void);
    void func_ov094_02168e60(void);
    void func_ov094_02169064(void);
    void func_ov094_0216918c(void);
    void func_ov094_021691d8(void);
    void func_ov094_02169344(void);
    void func_ov094_02169384(void);
    void func_ov094_021693bc(void);
    void func_ov094_021693c8(void);
    void func_ov094_02169494(void);
};

class ActorProfileUnkVLCR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkVLCR();
    ~ActorProfileUnkVLCR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkVLCR *GetProfile();
};
