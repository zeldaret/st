//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkITSC_C4 : public Actor_C4 {
public:
    ActorUnkITSC_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkITSC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkITSC();

    /* 4C */ virtual ~ActorUnkITSC() override;

    void func_ov084_02159dd8(void);
    void func_ov084_02159dfc(void);
    void func_ov084_0215a0dc(void);
    void func_ov084_0215a118(void);
    void func_ov084_0215a280(void);
};

class ActorProfileUnkITSC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkITSC();
    ~ActorProfileUnkITSC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkITSC *GetProfile();
};
