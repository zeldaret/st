//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJBS_c4 : public Actor_c4 {
public:
    ActorUnkAJBS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkAJBS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkAJBS();

    /* 4C */ virtual ~ActorUnkAJBS() override;

    void func_ov068_0215ebc8(void);
    void func_ov068_0215ebdc(void);
    void func_ov068_0215ecf0(void);
    void func_ov068_0215ecf4(void);
    void func_ov068_0215ed10(void);
    void func_ov068_0215ed58(void);
    void func_ov068_0215edc0(void);
    void func_ov068_0215eff0(void);
    void func_ov068_0215f0ec(void);
    void func_ov068_0215f12c(void);
    void func_ov068_0215f21c(void);
    void func_ov068_0215f280(void);
    void func_ov068_0215f304(void);
    void func_ov068_0215f368(void);
    void func_ov068_0215f3ac(void);
    void func_ov068_0215f428(void);
    void func_ov068_0215f648(void);
    void func_ov068_0215f6e4(void);
    void func_ov068_0215f7e0(void);
    void func_ov068_0215f800(void);
    void func_ov068_0215fa10(void);
    void func_ov068_0215fba0(void);
    void func_ov068_0215fc64(void);
    void func_ov068_0215fcd0(void);
    void func_ov068_0215ff6c(void);
    void func_ov068_0215ff84(void);
    void func_ov068_0215ffec(void);
    void func_ov068_02160020(void);
    void func_ov068_021601c4(void);
    void func_ov068_02160384(void);
};

class ActorProfileUnkAJBS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkAJBS();
    ~ActorProfileUnkAJBS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkAJBS *GetProfile();
};
