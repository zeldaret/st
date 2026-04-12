//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJET_c4 : public Actor_c4 {
public:
    ActorUnkAJET_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkAJET : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkAJET();

    /* 4C */ virtual ~ActorUnkAJET() override;

    void func_ov068_0215abf0(void);
    void func_ov068_0215ac30(void);
    void func_ov068_0215ac58(void);
    void func_ov068_0215aca0(void);
    void func_ov068_0215aecc(void);
    void func_ov068_0215b044(void);
    void func_ov068_0215b064(void);
    void func_ov068_0215b068(void);
    void func_ov068_0215b0d8(void);
    void func_ov068_0215b140(void);
    void func_ov068_0215b1ac(void);
    void func_ov068_0215b36c(void);
    void func_ov068_0215b524(void);
    void func_ov068_0215b620(void);
    void func_ov068_0215b7a8(void);
    void func_ov068_0215b7fc(void);
    void func_ov068_0215b868(void);
    void func_ov068_0215b8ec(void);
    void func_ov068_0215ba28(void);
    void func_ov068_0215bae0(void);
    void func_ov068_0215bb5c(void);
    void func_ov068_0215bbf4(void);
    void func_ov068_0215bca8(void);
    void func_ov068_0215bd14(void);
    void func_ov068_0215be6c(void);
};

class ActorProfileUnkAJET : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkAJET();
    ~ActorProfileUnkAJET();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkAJET *GetProfile();
};
