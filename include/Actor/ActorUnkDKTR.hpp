//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDKTR_c4 : public Actor_c4 {
public:
    ActorUnkDKTR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDKTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDKTR();

    /* 4C */ virtual ~ActorUnkDKTR() override;

    void func_ov026_0212b958(void);
    void func_ov026_0212bc90(void);
    void func_ov026_0212bc98(void);
    void func_ov026_0212bda0(void);
    void func_ov026_0212bdc0(void);
    void func_ov026_0212bde0(void);
    void func_ov026_0212bfec(void);
    void func_ov026_0212c134(void);
    void func_ov026_0212c138(void);
    void func_ov026_0212c2a8(void);
    void func_ov026_0212c398(void);
    void func_ov026_0212c3c8(void);
    void func_ov026_0212c3f4(void);
    void func_ov026_0212c478(void);
    void func_ov026_0212c56c(void);
    void func_ov026_0212c624(void);
    void func_ov026_0212ca18(void);
    void func_ov026_0212cd64(void);
    void func_ov026_0212cdcc(void);
    void func_ov026_0212cec4(void);
    void func_ov026_0212d040(void);
    void func_ov026_0212d12c(void);
    void func_ov026_0212d2ac(void);
    void func_ov026_0212d310(void);
    void func_ov026_0212d324(void);
    void func_ov026_0212d328(void);
    void func_ov026_0212d490(void);
    void func_ov026_0212d534(void);
    void func_ov026_0212d738(void);
    void func_ov026_0212d7e0(void);
    void func_ov026_0212d81c(void);
    void func_ov026_0212d834(void);
    void func_ov026_0212d87c(void);
    void func_ov026_0212d954(void);
    void func_ov026_0212d97c(void);
    void func_ov026_0212da08(void);
    void func_ov026_0212da34(void);
    void func_ov026_0212db5c(void);
    void func_ov026_0212db88(void);
    void func_ov026_0212dc68(void);
    void func_ov026_0212dd0c(void);
    void func_ov026_0212dd80(void);
    void func_ov026_0212dd94(void);
    void func_ov026_0212de00(void);
    void func_ov026_0212e034(void);
    void func_ov026_0212e15c(void);
    void func_ov026_0212e178(void);
    void func_ov026_0212e278(void);
    void func_ov026_0212e2b4(void);
};

class ActorProfileUnkDKTR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDKTR();
    ~ActorProfileUnkDKTR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDKTR *GetProfile();
};
