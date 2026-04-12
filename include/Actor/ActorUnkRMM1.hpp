//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMM1_c4 : public Actor_c4 {
public:
    ActorUnkRMM1_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMM1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMM1();

    /* 4C */ virtual ~ActorUnkRMM1() override;

    void func_ov034_02119018(void);
    void func_ov034_02119090(void);
    void func_ov034_0211911c(void);
    void func_ov034_02119238(void);
    void func_ov034_02119278(void);
};

class ActorProfileUnkRMM1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMM1();
    ~ActorProfileUnkRMM1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMM1 *GetProfile();
};
