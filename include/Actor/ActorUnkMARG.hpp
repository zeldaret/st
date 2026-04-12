//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMARG_c4 : public Actor_c4 {
public:
    ActorUnkMARG_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkMARG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMARG();

    /* 4C */ virtual ~ActorUnkMARG() override;

    void func_ov092_021752ec(void);
    void func_ov092_0217537c(void);
    void func_ov092_021754a8(void);
    void func_ov092_021754c4(void);
    void func_ov092_021756b4(void);
    void func_ov092_02175734(void);
    void func_ov092_02175748(void);
    void func_ov092_021757b8(void);
    void func_ov092_02175ac0(void);
    void func_ov092_02175ad4(void);
    void func_ov092_02175b90(void);
    void func_ov092_02175c4c(void);
    void func_ov092_02175d0c(void);
    void func_ov092_02175d60(void);
    void func_ov092_02175e1c(void);
    void func_ov092_02176354(void);
    void func_ov092_02176358(void);
    void func_ov092_021763a4(void);
    void func_ov092_021766c0(void);
    void func_ov092_021766f0(void);
    void func_ov092_021767e8(void);
    void func_ov092_02176834(void);
    void func_ov092_02176904(void);
    void func_ov092_02176a50(void);
    void func_ov092_02176aa8(void);
    void func_ov092_02176ac4(void);
};

class ActorProfileUnkMARG : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkMARG();
    ~ActorProfileUnkMARG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMARG *GetProfile();
};
