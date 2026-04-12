//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWBEF_c4 : public Actor_c4 {
public:
    ActorUnkWBEF_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkWBEF : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWBEF();

    /* 4C */ virtual ~ActorUnkWBEF() override;

    void func_ov083_0215b210(void);
    void func_ov083_0215b25c(void);
    void func_ov083_0215b280(void);
    void func_ov083_0215b2cc(void);
    void func_ov083_0215b2f0(void);
    void func_ov083_0215b330(void);
    void func_ov083_0215b368(void);
    void func_ov083_0215b498(void);
    void func_ov083_0215b4c0(void);
    void func_ov083_0215b51c(void);
    void func_ov083_0215b540(void);
    void func_ov083_0215b58c(void);
    void func_ov083_0215b59c(void);
    void func_ov083_0215b614(void);
};

class ActorProfileUnkWBEF : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWBEF();
    ~ActorProfileUnkWBEF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWBEF *GetProfile();
};
