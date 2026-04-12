//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBRT_c4 : public Actor_c4 {
public:
    ActorUnkRBRT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRBRT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRBRT();

    /* 4C */ virtual ~ActorUnkRBRT() override;

    void func_ov026_02120c80(void);
    void func_ov026_02120cfc(void);
    void func_ov026_02120d74(void);
    void func_ov026_02120db0(void);
    void func_ov026_02120e30(void);
    void func_ov026_02120e40(void);
    void func_ov026_02120e44(void);
    void func_ov026_02120e90(void);
    void func_ov026_02120f0c(void);
    void func_ov026_02120f98(void);
    void func_ov026_02120fb8(void);
    void func_ov026_02120fc4(void);
    void func_ov026_02121034(void);
    void func_ov026_0212110c(void);
    void func_ov026_0212112c(void);
    void func_ov026_02121138(void);
    void func_ov026_02121150(void);
    void func_ov026_02121180(void);
    void func_ov026_02121198(void);
    void func_ov026_021211c8(void);
};

class ActorProfileUnkRBRT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBRT();
    ~ActorProfileUnkRBRT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBRT *GetProfile();
};
