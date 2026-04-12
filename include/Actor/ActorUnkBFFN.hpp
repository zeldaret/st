//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBFFN_c4 : public Actor_c4 {
public:
    ActorUnkBFFN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBFFN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBFFN();

    /* 4C */ virtual ~ActorUnkBFFN() override;

    void func_ov021_020f24b8(void);
    void func_ov021_020f24fc(void);
    void func_ov021_020f2524(void);
    void func_ov021_020f2564(void);
    void func_ov021_020f25d8(void);
    void func_ov021_020f269c(void);
    void func_ov021_020f2714(void);
    void func_ov021_020f2828(void);
    void func_ov021_020f283c(void);
    void func_ov021_020f2850(void);
    void func_ov021_020f2878(void);
    void func_ov021_020f2898(void);
    void func_ov021_020f28dc(void);
    void func_ov021_020f29ac(void);
    void func_ov021_020f2a1c(void);
    void func_ov021_020f2a28(void);
    void func_ov021_020f2a4c(void);
    void func_ov021_020f2b18(void);
    void func_ov021_020f2b1c(void);
    void func_ov021_020f2c74(void);
    void func_ov021_020f2c78(void);
    void func_ov021_020f2d54(void);
    void func_ov021_020f3044(void);
    void func_ov021_020f3264(void);
    void func_ov021_020f3300(void);
    void func_ov021_020f3304(void);
    void func_ov021_020f3340(void);
    void func_ov021_020f337c(void);
    void func_ov021_020f34bc(void);
    void func_ov021_020f3600(void);
    void func_ov021_020f3680(void);
    void func_ov021_020f3708(void);
    void func_ov021_020f376c(void);
};

class ActorProfileUnkBFFN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkBFFN();
    ~ActorProfileUnkBFFN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBFFN *GetProfile();
};
