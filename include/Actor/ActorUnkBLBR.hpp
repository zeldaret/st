//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBLBR_c4 : public Actor_c4 {
public:
    ActorUnkBLBR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBLBR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBLBR();

    /* 4C */ virtual ~ActorUnkBLBR() override;

    void func_ov038_0211ce20(void);
    void func_ov038_0211cfd0(void);
    void func_ov038_0211d0d0(void);
    void func_ov038_0211d1c0(void);
    void func_ov038_0211d2d8(void);
    void func_ov038_0211d52c(void);
    void func_ov038_0211dbe0(void);
    void func_ov038_0211dc54(void);
    void func_ov038_0211dce8(void);
    void func_ov038_0211dd84(void);
    void func_ov038_0211ddf4(void);
    void func_ov038_0211de64(void);
    void func_ov038_0211deb8(void);
    void func_ov038_0211e1c0(void);
    void func_ov038_0211e280(void);
    void func_ov038_0211e2b0(void);
    void func_ov038_0211e2e0(void);
    void func_ov038_0211e330(void);
    void func_ov038_0211e35c(void);
    void func_ov038_0211e388(void);
};

class ActorProfileUnkBLBR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBLBR();
    ~ActorProfileUnkBLBR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBLBR *GetProfile();
};
