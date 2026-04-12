//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNTUB_c4 : public Actor_c4 {
public:
    ActorUnkNTUB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkNTUB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNTUB();

    /* 4C */ virtual ~ActorUnkNTUB() override;

    void func_ov031_020f0cf0(void);
    void func_ov031_020f0d04(void);
    void func_ov031_020f0d2c(void);
    void func_ov031_020f0d80(void);
    void func_ov031_020f0db8(void);
    void func_ov031_020f0de8(void);
    void func_ov031_020f0df4(void);
    void func_ov031_020f0e00(void);
    void func_ov031_020f0e0c(void);
    void func_ov031_020f0e18(void);
    void func_ov031_020f0e24(void);
    void func_ov031_020f0e30(void);
    void func_ov031_020f0e3c(void);
    void func_ov031_020f0e48(void);
    void func_ov031_020f0e5c(void);
    void func_ov031_020f0e70(void);
    void func_ov031_020f0f44(void);
};

class ActorProfileUnkNTUB : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNTUB();
    ~ActorProfileUnkNTUB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNTUB *GetProfile();
};
