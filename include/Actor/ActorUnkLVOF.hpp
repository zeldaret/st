//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLVOF_c4 : public Actor_c4 {
public:
    ActorUnkLVOF_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkLVOF : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkLVOF();

    /* 4C */ virtual ~ActorUnkLVOF() override;

    void func_ov021_020f3c8c(void);
    void func_ov021_020f3ca0(void);
    void func_ov021_020f403c(void);
    void func_ov021_020f4238(void);
    void func_ov021_020f424c(void);
    void func_ov021_020f4330(void);
    void func_ov021_020f4360(void);
    void func_ov021_020f43ec(void);
    void func_ov021_020f4458(void);
    void func_ov021_020f4514(void);
    void func_ov021_020f45f8(void);
    void func_ov021_020f4624(void);
    void func_ov021_020f46c8(void);
};

class ActorProfileUnkLVOF : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkLVOF();
    ~ActorProfileUnkLVOF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkLVOF *GetProfile();
};
