//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkITWP_c4 : public Actor_c4 {
public:
    ActorUnkITWP_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkITWP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkITWP();

    /* 4C */ virtual ~ActorUnkITWP() override;

    void func_ov105_02188ebc(void);
    void func_ov105_02188f08(void);
    void func_ov105_02188f64(void);
    void func_ov105_02188f78(void);
    void func_ov105_02188f88(void);
    void func_ov105_02188f98(void);
    void func_ov105_02189280(void);
    void func_ov105_02189284(void);
    void func_ov105_0218952c(void);
    void func_ov105_021897c0(void);
    void func_ov105_02189df0(void);
    void func_ov105_02189e2c(void);
    void func_ov105_02189e90(void);
    void func_ov105_02189ec4(void);
    void func_ov105_02189ef8(void);
    void func_ov105_02189f28(void);
    void func_ov105_02189f80(void);
    void func_ov105_02189fc8(void);
    void func_ov105_0218a010(void);
    void func_ov105_0218a044(void);
    void func_ov105_0218a078(void);
};

class ActorProfileUnkITWP : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkITWP();
    ~ActorProfileUnkITWP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkITWP *GetProfile();
};
