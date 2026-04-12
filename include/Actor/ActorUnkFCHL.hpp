//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFCHL_c4 : public Actor_c4 {
public:
    ActorUnkFCHL_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkFCHL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFCHL();

    /* 4C */ virtual ~ActorUnkFCHL() override;

    void func_ov034_02119ff0(void);
    void func_ov034_0211a004(void);
    void func_ov034_0211a208(void);
    void func_ov034_0211a21c(void);
    void func_ov034_0211a288(void);
};

class ActorProfileUnkFCHL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFCHL();
    ~ActorProfileUnkFCHL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFCHL *GetProfile();
};
