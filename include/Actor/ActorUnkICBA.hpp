//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkICBA_c4 : public Actor_c4 {
public:
    ActorUnkICBA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkICBA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkICBA();

    /* 4C */ virtual ~ActorUnkICBA() override;

    void func_ov080_0215c8e0(void);
    void func_ov080_0215c9d0(void);
    void func_ov080_0215ca44(void);
    void func_ov080_0215ca78(void);
    void func_ov080_0215ce44(void);
    void func_ov080_0215ce58(void);
    void func_ov080_0215ce6c(void);
    void func_ov080_0215ce80(void);
    void func_ov080_0215cf4c(void);
    void func_ov080_0215d020(void);
    void func_ov080_0215d0dc(void);
    void func_ov080_0215d124(void);
    void func_ov080_0215d420(void);
    void func_ov080_0215d518(void);
    void func_ov080_0215d51c(void);
    void func_ov080_0215d720(void);
    void func_ov080_0215dad4(void);
    void func_ov080_0215e00c(void);
    void func_ov080_0215e1d4(void);
    void func_ov080_0215e228(void);
    void func_ov080_0215e25c(void);
    void func_ov080_0215e36c(void);
    void func_ov080_0215e3a4(void);
    void func_ov080_0215e3e8(void);
    void func_ov080_0215e49c(void);
    void func_ov080_0215e4b8(void);
    void func_ov080_0215e4d4(void);
};

class ActorProfileUnkICBA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkICBA();
    ~ActorProfileUnkICBA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkICBA *GetProfile();
};
