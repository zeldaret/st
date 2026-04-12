//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBDEM_c4 : public Actor_c4 {
public:
    ActorUnkBDEM_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBDEM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBDEM();

    /* 4C */ virtual ~ActorUnkBDEM() override;

    void func_ov026_02123f00(void);
    void func_ov026_02123f14(void);
    void func_ov026_02124214(void);
    void func_ov026_02124218(void);
    void func_ov026_021242d4(void);
    void func_ov026_02124318(void);
    void func_ov026_02124384(void);
    void func_ov026_021243d0(void);
    void func_ov026_021247ec(void);
    void func_ov026_0212486c(void);
    void func_ov026_02124980(void);
    void func_ov026_02124adc(void);
    void func_ov026_02124f0c(void);
    void func_ov026_02124f30(void);
    void func_ov026_021251d4(void);
    void func_ov026_02125220(void);
    void func_ov026_021253f0(void);
    void func_ov026_02125460(void);
    void func_ov026_021255e0(void);
    void func_ov026_02125658(void);
    void func_ov026_02125840(void);
    void func_ov026_0212590c(void);
    void func_ov026_02125b9c(void);
    void func_ov026_02125c70(void);
    void func_ov026_02125c88(void);
    void func_ov026_02125eb0(void);
    void func_ov026_02125fec(void);
    void func_ov026_021263cc(void);
    void func_ov026_02126650(void);
    void func_ov026_021267e0(void);
    void func_ov026_02126918(void);
    void func_ov026_02126af0(void);
    void func_ov026_02126c18(void);
    void func_ov026_02126cc8(void);
    void func_ov026_02126d38(void);
    void func_ov026_02126e44(void);
    void func_ov026_02126e6c(void);
    void func_ov026_0212709c(void);
    void func_ov026_021270e4(void);
    void func_ov026_02127138(void);
    void func_ov026_02127178(void);
    void func_ov026_021271cc(void);
    void func_ov026_02127260(void);
    void func_ov026_021272a8(void);
    void func_ov026_0212731c(void);
    void func_ov026_02127380(void);
    void func_ov026_0212739c(void);
    void func_ov026_0212745c(void);
    void func_ov026_02127584(void);
    void func_ov026_0212769c(void);
    void func_ov026_021276e4(void);
    void func_ov026_021277e0(void);
    void func_ov026_02127898(void);
    void func_ov026_02127b60(void);
    void func_ov026_02127bd0(void);
    void func_ov026_02127c5c(void);
    void func_ov026_02127efc(void);
};

class ActorProfileUnkBDEM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBDEM();
    ~ActorProfileUnkBDEM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBDEM *GetProfile();
};
