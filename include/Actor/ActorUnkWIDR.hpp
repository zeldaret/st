//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWIDR_c4 : public Actor_c4 {
public:
    ActorUnkWIDR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkWIDR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWIDR();

    /* 4C */ virtual ~ActorUnkWIDR() override;

    void func_ov084_0215b0a4(void);
    void func_ov084_0215b314(void);
    void func_ov084_0215b328(void);
    void func_ov084_0215b33c(void);
    void func_ov084_0215b350(void);
    void func_ov084_0215b3f4(void);
    void func_ov084_0215b430(void);
    void func_ov084_0215b548(void);
    void func_ov084_0215b5dc(void);
    void func_ov084_0215b648(void);
    void func_ov084_0215b690(void);
    void func_ov084_0215b748(void);
    void func_ov084_0215b764(void);
    void func_ov084_0215b7ac(void);
    void func_ov084_0215b800(void);
    void func_ov084_0215b814(void);
    void func_ov084_0215ba44(void);
    void func_ov084_0215ba5c(void);
    void func_ov084_0215babc(void);
    void func_ov084_0215bb6c(void);
    void func_ov084_0215bd2c(void);
    void func_ov084_0215bdec(void);
    void func_ov084_0215bed0(void);
    void func_ov084_0215bee8(void);
    void func_ov084_0215bf98(void);
    void func_ov084_0215bfe0(void);
    void func_ov084_0215c014(void);
    void func_ov084_0215c05c(void);
    void func_ov084_0215c09c(void);
    void func_ov084_0215c0ac(void);
    void func_ov084_0215c0d4(void);
    void func_ov084_0215c12c(void);
    void func_ov084_0215c160(void);
    void func_ov084_0215c198(void);
    void func_ov084_0215c1d4(void);
    void func_ov084_0215c520(void);
    void func_ov084_0215c544(void);
    void func_ov084_0215c554(void);
    void func_ov084_0215c578(void);
    void func_ov084_0215c594(void);
    void func_ov084_0215c5f8(void);
};

class ActorProfileUnkWIDR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWIDR();
    ~ActorProfileUnkWIDR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWIDR *GetProfile();
};
