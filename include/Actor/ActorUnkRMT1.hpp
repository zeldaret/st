//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMT1_c4 : public Actor_c4 {
public:
    ActorUnkRMT1_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMT1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMT1();

    /* 4C */ virtual ~ActorUnkRMT1() override;

    void func_ov061_02158090(void);
    void func_ov061_021580a4(void);
    void func_ov061_021580f8(void);
    void func_ov061_0215810c(void);
    void func_ov061_02158120(void);
    void func_ov061_02158170(void);
    void func_ov061_02158194(void);
    void func_ov061_021581a4(void);
    void func_ov061_021581f0(void);
};

class ActorProfileUnkRMT1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMT1();
    ~ActorProfileUnkRMT1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMT1 *GetProfile();
};
