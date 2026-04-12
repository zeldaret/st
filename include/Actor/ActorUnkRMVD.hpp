//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMVD_c4 : public Actor_c4 {
public:
    ActorUnkRMVD_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMVD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMVD();

    /* 4C */ virtual ~ActorUnkRMVD() override;

    void func_ov059_02162830(void);
    void func_ov059_021628d0(void);
    void func_ov059_021628fc(void);
    void func_ov059_0216294c(void);
};

class ActorProfileUnkRMVD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMVD();
    ~ActorProfileUnkRMVD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMVD *GetProfile();
};
