//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSTFH_c4 : public Actor_c4 {
public:
    ActorUnkSTFH_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSTFH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSTFH();

    /* 4C */ virtual ~ActorUnkSTFH() override;

    void func_ov043_021267ac(void);
    void func_ov043_021267e0(void);
    void func_ov043_0212681c(void);
    void func_ov043_0212683c(void);
    void func_ov043_02126ac0(void);
    void func_ov043_02126ad4(void);
    void func_ov043_02126ae8(void);
    void func_ov043_02126b38(void);
    void func_ov043_02126b68(void);
    void func_ov043_02126bfc(void);
    void func_ov043_02126c80(void);
    void func_ov043_02126cec(void);
    void func_ov043_02126d14(void);
    void func_ov043_02126d98(void);
    void func_ov043_02126e6c(void);
    void func_ov043_02126f58(void);
    void func_ov043_02127058(void);
    void func_ov043_0212705c(void);
    void func_ov043_021270a8(void);
    void func_ov043_021270ac(void);
    void func_ov043_021270f0(void);
    void func_ov043_02127184(void);
    void func_ov043_0212721c(void);
    void func_ov043_021272a8(void);
    void func_ov043_02127444(void);
    void func_ov043_021274c0(void);
    void func_ov043_02127594(void);
    void func_ov043_02127640(void);
    void func_ov043_02127778(void);
    void func_ov043_02127808(void);
    void func_ov043_021278bc(void);
    void func_ov043_0212797c(void);
    void func_ov043_02127a14(void);
    void func_ov043_02127a38(void);
    void func_ov043_02127ac4(void);
    void func_ov043_02127b60(void);
    void func_ov043_02127ca8(void);
    void func_ov043_02127d54(void);
    void func_ov043_02127d78(void);
    void func_ov043_02127dd8(void);
    void func_ov043_02127e04(void);
    void func_ov043_02127edc(void);
    void func_ov043_02127eec(void);
    void func_ov043_02127f50(void);
    void func_ov043_0212814c(void);
    void func_ov043_02128190(void);
    void func_ov043_02128238(void);
    void func_ov043_0212825c(void);
    void func_ov043_0212826c(void);
    void func_ov043_02128290(void);
    void func_ov043_021282ec(void);
};

class ActorProfileUnkSTFH : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSTFH();
    ~ActorProfileUnkSTFH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSTFH *GetProfile();
};
