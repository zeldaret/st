//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMVF_c4 : public Actor_c4 {
public:
    ActorUnkRMVF_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMVF : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMVF();

    /* 4C */ virtual ~ActorUnkRMVF() override;

    void func_ov059_02161ce4(void);
    void func_ov059_02161cf8(void);
    void func_ov059_02161d98(void);
    void func_ov059_02161dc4(void);
    void func_ov059_02161e14(void);
    void func_ov059_02161e1c(void);
    void func_ov059_02161e40(void);
    void func_ov059_02161e50(void);
    void func_ov059_02161ea4(void);
};

class ActorProfileUnkRMVF : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMVF();
    ~ActorProfileUnkRMVF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMVF *GetProfile();
};
