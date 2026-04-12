//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBKST_c4 : public Actor_c4 {
public:
    ActorUnkBKST_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBKST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBKST();

    /* 4C */ virtual ~ActorUnkBKST() override;

    void func_ov074_0215cab4(void);
    void func_ov074_0215cbd4(void);
    void func_ov074_0215cc10(void);
    void func_ov074_0215cc54(void);
    void func_ov074_0215cc78(void);
    void func_ov074_0215ccb4(void);
    void func_ov074_0215cdd8(void);
    void func_ov074_0215cdf8(void);
    void func_ov074_0215ce20(void);
    void func_ov074_0215ce3c(void);
    void func_ov074_0215ce5c(void);
    void func_ov074_0215ce60(void);
    void func_ov074_0215ce80(void);
    void func_ov074_0215ce9c(void);
    void func_ov074_0215cee8(void);
    void func_ov074_0215ceec(void);
    void func_ov074_0215cf08(void);
    void func_ov074_0215cf48(void);
    void func_ov074_0215cf54(void);
    void func_ov074_0215cf80(void);
    void func_ov074_0215cf88(void);
    void func_ov074_0215cfe4(void);
    void func_ov074_0215d06c(void);
    void func_ov074_0215d184(void);
    void func_ov074_0215d4c0(void);
};

class ActorProfileUnkBKST : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkBKST();
    ~ActorProfileUnkBKST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBKST *GetProfile();
};
