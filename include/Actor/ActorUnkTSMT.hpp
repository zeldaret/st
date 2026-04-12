//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTSMT_c4 : public Actor_c4 {
public:
    ActorUnkTSMT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkTSMT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTSMT();

    /* 4C */ virtual ~ActorUnkTSMT() override;

    void func_ov091_0216efc4(void);
    void func_ov091_0216eff4(void);
    void func_ov091_0216f024(void);
    void func_ov091_0216f034(void);
};

class ActorProfileUnkTSMT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTSMT();
    ~ActorProfileUnkTSMT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTSMT *GetProfile();
};
