//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBFR_c4 : public Actor_c4 {
public:
    ActorUnkRBFR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRBFR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRBFR();

    /* 4C */ virtual ~ActorUnkRBFR() override;

    void func_ov078_0215ce24(void);
    void func_ov078_0215ce38(void);
    void func_ov078_0215ced0(void);
    void func_ov078_0215cee8(void);
    void func_ov078_0215cefc(void);
    void func_ov078_0215cf7c(void);
};

class ActorProfileUnkRBFR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBFR();
    ~ActorProfileUnkRBFR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBFR *GetProfile();
};
