//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBMOC_c4 : public Actor_c4 {
public:
    ActorUnkBMOC_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBMOC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBMOC();

    /* 4C */ virtual ~ActorUnkBMOC() override;

    void func_ov091_0216e72c(void);
    void func_ov091_0216e858(void);
    void func_ov091_0216e9a8(void);
    void func_ov091_0216ec60(void);
    void func_ov091_0216ece0(void);
    void func_ov091_0216edec(void);
    void func_ov091_0216ee1c(void);
};

class ActorProfileUnkBMOC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBMOC();
    ~ActorProfileUnkBMOC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBMOC *GetProfile();
};
