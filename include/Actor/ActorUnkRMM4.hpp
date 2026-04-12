//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMM4_c4 : public Actor_c4 {
public:
    ActorUnkRMM4_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMM4 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMM4();

    /* 4C */ virtual ~ActorUnkRMM4() override;

    void func_ov039_0211acd0(void);
    void func_ov039_0211ace4(void);
    void func_ov039_0211ad08(void);
    void func_ov039_0211ad1c(void);
    void func_ov039_0211b078(void);
    void func_ov039_0211b104(void);
    void func_ov039_0211b1ac(void);
    void func_ov039_0211b1c0(void);
    void func_ov039_0211b1e0(void);
    void func_ov039_0211b264(void);
    void func_ov039_0211b310(void);
    void func_ov039_0211b4a4(void);
};

class ActorProfileUnkRMM4 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMM4();
    ~ActorProfileUnkRMM4();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMM4 *GetProfile();
};
