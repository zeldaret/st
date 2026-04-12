//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRLY_c4 : public Actor_c4 {
public:
    ActorUnkTRLY_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkTRLY : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTRLY();

    /* 4C */ virtual ~ActorUnkTRLY() override;

    void func_ov034_0211a3c4(void);
    void func_ov034_0211a6e0(void);
    void func_ov034_0211a77c(void);
    void func_ov034_0211a7bc(void);
    void func_ov034_0211a7d8(void);
    void func_ov034_0211a7fc(void);
    void func_ov034_0211aae0(void);
    void func_ov034_0211ad60(void);
    void func_ov034_0211ae8c(void);
    void func_ov034_0211af20(void);
    void func_ov034_0211afdc(void);
    void func_ov034_0211b228(void);
    void func_ov034_0211b280(void);
    void func_ov034_0211b41c(void);
    void func_ov034_0211bda4(void);
    void func_ov034_0211be00(void);
    void func_ov034_0211bf0c(void);
    void func_ov034_0211bf24(void);
    void func_ov034_0211c1e4(void);
    void func_ov034_0211c45c(void);
    void func_ov034_0211c4a8(void);
    void func_ov034_0211c71c(void);
    void func_ov034_0211c740(void);
    void func_ov034_0211c794(void);
    void func_ov034_0211c7d8(void);
    void func_ov034_0211c7e8(void);
    void func_ov034_0211c8e4(void);
    void func_ov034_0211ca94(void);
    void func_ov034_0211cad4(void);
    void func_ov034_0211cbb0(void);
    void func_ov034_0211ccec(void);
    void func_ov034_0211ce80(void);
    void func_ov034_0211cfc4(void);
    void func_ov034_0211d0b8(void);
    void func_ov034_0211d124(void);
    void func_ov034_0211d16c(void);
    void func_ov034_0211d1a8(void);
    void func_ov034_0211d2b0(void);
    void func_ov034_0211d2fc(void);
    void func_ov034_0211d480(void);
    void func_ov034_0211d6b4(void);
    void func_ov034_0211d8a0(void);
    void func_ov034_0211d970(void);
    void func_ov034_0211daac(void);
    void func_ov034_0211db3c(void);
    void func_ov034_0211dbf0(void);
    void func_ov034_0211dc08(void);
    void func_ov034_0211dc8c(void);
    void func_ov034_0211dfbc(void);
    void func_ov034_0211dff4(void);
    void func_ov034_0211e0e0(void);
    void func_ov034_0211e174(void);
    void func_ov034_0211e1a4(void);
    void func_ov034_0211e1d4(void);
    void func_ov034_0211e204(void);
    void func_ov034_0211e234(void);
    void func_ov034_0211e28c(void);
};

class ActorProfileUnkTRLY : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTRLY();
    ~ActorProfileUnkTRLY();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTRLY *GetProfile();
};
