//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBDBA_c4 : public Actor_c4 {
public:
    ActorUnkBDBA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBDBA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBDBA();

    /* 4C */ virtual ~ActorUnkBDBA() override;

    void func_ov045_02127a70(void);
    void func_ov045_02127adc(void);
    void func_ov045_02127b00(void);
    void func_ov045_02127b3c(void);
    void func_ov045_02127bbc(void);
    void func_ov045_02127f04(void);
    void func_ov045_02128078(void);
    void func_ov045_02128134(void);
    void func_ov045_021281d8(void);
    void func_ov045_021281ec(void);
    void func_ov045_02128254(void);
    void func_ov045_02128264(void);
    void func_ov045_021282d0(void);
};

class ActorProfileUnkBDBA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBDBA();
    ~ActorProfileUnkBDBA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBDBA *GetProfile();
};
