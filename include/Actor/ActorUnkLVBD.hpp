//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLVBD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkLVBD();

    /* 4C */ virtual ~ActorUnkLVBD() override;

    void func_ov084_0215ec28(void);
    void func_ov084_0215edc0(void);
    void func_ov084_0215edd4(void);
    void func_ov084_0215ede8(void);
    void func_ov084_0215edfc(void);
    void func_ov084_0215ef1c(void);
    void func_ov084_0215ef20(void);
    void func_ov084_0215f0c8(void);
    void func_ov084_0215f108(void);
    void func_ov084_0215f3bc(void);
    void func_ov084_0215f3f8(void);
    void func_ov084_0215f830(void);
    void func_ov084_0215f954(void);
    void func_ov084_0215f9ac(void);
    void func_ov084_0215fad0(void);
    void func_ov084_0215fca0(void);
    void func_ov084_0215fdd4(void);
    void func_ov084_02160054(void);
    void func_ov084_0216009c(void);
    void func_ov084_021600d8(void);
    void func_ov084_02160148(void);
    void func_ov084_0216019c(void);
    void func_ov084_021601b4(void);
    void func_ov084_021601c0(void);
    void func_ov084_02160284(void);
    void func_ov084_021602d8(void);
    void func_ov084_02160314(void);
    void func_ov084_02160384(void);
    void func_ov084_021603a0(void);
    void func_ov084_021603fc(void);
};

class ActorProfileUnkLVBD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkLVBD();
    ~ActorProfileUnkLVBD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkLVBD *GetProfile();
};
