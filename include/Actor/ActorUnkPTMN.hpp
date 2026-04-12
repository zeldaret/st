//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPTMN_c4 : public Actor_c4 {
public:
    ActorUnkPTMN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkPTMN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPTMN();

    /* 4C */ virtual ~ActorUnkPTMN() override;

    void func_ov049_0213572c(void);
    void func_ov049_02135738(void);
    void func_ov049_02135744(void);
    void func_ov049_02135750(void);
    void func_ov049_021357dc(void);
    void func_ov049_0213585c(void);
    void func_ov049_021358c4(void);
    void func_ov049_02135b18(void);
    void func_ov049_02135b2c(void);
    void func_ov049_02135b58(void);
    void func_ov049_02135b64(void);
    void func_ov049_02135c70(void);
    void func_ov049_02136040(void);
    void func_ov049_02136054(void);
    void func_ov049_02136058(void);
    void func_ov049_021360c0(void);
    void func_ov049_02136280(void);
    void func_ov049_02136294(void);
    void func_ov049_021362ec(void);
    void func_ov049_021363b8(void);
    void func_ov049_02136488(void);
    void func_ov049_021365f8(void);
    void func_ov049_021366c8(void);
    void func_ov049_021366f4(void);
    void func_ov049_02136708(void);
    void func_ov049_0213671c(void);
    void func_ov049_02136788(void);
    void func_ov049_021367a0(void);
    void func_ov049_02136844(void);
    void func_ov049_02136870(void);
    void func_ov049_02136974(void);
    void func_ov049_021369c8(void);
    void func_ov049_02136a80(void);
    void func_ov049_02136a90(void);
    void func_ov049_02136aac(void);
    void func_ov049_02136ac8(void);
    void func_ov049_02136ae4(void);
};

class ActorProfileUnkPTMN : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPTMN();
    ~ActorProfileUnkPTMN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPTMN *GetProfile();
};
