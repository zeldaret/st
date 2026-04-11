//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKIMB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKIMB();

    /* 4C */ virtual ~ActorUnkKIMB() override;

    void func_ov074_0215d92c(void);
    void func_ov074_0215d940(void);
    void func_ov074_0215d9b8(void);
    void func_ov074_0215d9cc(void);
    void func_ov074_0215da14(void);
    void func_ov074_0215dadc(void);
    void func_ov074_0215dc10(void);
    void func_ov074_0215dc24(void);
    void func_ov074_0215dc78(void);
    void func_ov074_0215dc8c(void);
    void func_ov074_0215dcf0(void);
    void func_ov074_0215dd68(void);
    void func_ov074_0215de64(void);
    void func_ov074_0215dee0(void);
    void func_ov074_0215e13c(void);
    void func_ov074_0215e1a4(void);
    void func_ov074_0215e1d8(void);
    void func_ov074_0215e27c(void);
    void func_ov074_0215e410(void);
    void func_ov074_0215e4b8(void);
    void func_ov074_0215e4cc(void);
    void func_ov074_0215e4ec(void);
    void func_ov074_0215e584(void);
    void func_ov074_0215e62c(void);
};

class ActorProfileUnkKIMB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKIMB();
    ~ActorProfileUnkKIMB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKIMB *GetProfile();
};
