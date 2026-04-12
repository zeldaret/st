//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCASE_c4 : public Actor_c4 {
public:
    ActorUnkCASE_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkCASE : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCASE();

    /* 4C */ virtual ~ActorUnkCASE() override;

    void func_ov063_0215ab70(void);
    void func_ov063_0215aba4(void);
    void func_ov063_0215abd8(void);
    void func_ov063_0215ac4c(void);
    void func_ov063_0215ac68(void);
    void func_ov063_0215ac8c(void);
    void func_ov063_0215acc8(void);
    void func_ov063_0215acec(void);
    void func_ov063_0215ae6c(void);
    void func_ov063_0215ae80(void);
    void func_ov063_0215ae94(void);
    void func_ov063_0215aefc(void);
    void func_ov063_0215af54(void);
    void func_ov063_0215af58(void);
    void func_ov063_0215af5c(void);
    void func_ov063_0215af60(void);
    void func_ov063_0215afa4(void);
    void func_ov063_0215afb8(void);
    void func_ov063_0215b054(void);
    void func_ov063_0215b090(void);
    void func_ov063_0215b1bc(void);
    void func_ov063_0215b244(void);
    void func_ov063_0215b2b0(void);
    void func_ov063_0215b2c4(void);
    void func_ov063_0215b2c8(void);
    void func_ov063_0215b2ec(void);
    void func_ov063_0215b624(void);
    void func_ov063_0215b6c8(void);
    void func_ov063_0215b724(void);
    void func_ov063_0215b7cc(void);
    void func_ov063_0215b814(void);
    void func_ov063_0215b854(void);
    void func_ov063_0215b8e8(void);
    void func_ov063_0215b99c(void);
    void func_ov063_0215ba64(void);
    void func_ov063_0215bab0(void);
};

class ActorProfileUnkCASE : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCASE();
    ~ActorProfileUnkCASE();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCASE *GetProfile();
};
