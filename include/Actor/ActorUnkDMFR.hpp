//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMFR_c4 : public Actor_c4 {
public:
    ActorUnkDMFR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDMFR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMFR();

    /* 4C */ virtual ~ActorUnkDMFR() override;

    void func_ov088_02170690(void);
    void func_ov088_021706a4(void);
    void func_ov088_021706f8(void);
    void func_ov088_02170708(void);
    void func_ov088_0217071c(void);
    void func_ov088_02170730(void);
    void func_ov088_02170780(void);
    void func_ov088_021707a4(void);
    void func_ov088_021707b4(void);
    void func_ov088_02170800(void);
};

class ActorProfileUnkDMFR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMFR();
    ~ActorProfileUnkDMFR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMFR *GetProfile();
};
