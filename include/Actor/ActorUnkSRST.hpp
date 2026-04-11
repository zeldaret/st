//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSRST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSRST();

    /* 4C */ virtual ~ActorUnkSRST() override;

    void func_ov085_021511c4(void);
    void func_ov085_021511d8(void);
    void func_ov085_021511ec(void);
    void func_ov085_021511f4(void);
    void func_ov085_021512e0(void);
    void func_ov085_02151354(void);
    void func_ov085_02151464(void);
    void func_ov085_021514c8(void);
    void func_ov085_021514e8(void);
    void func_ov085_02151500(void);
    void func_ov085_02151648(void);
    void func_ov085_02151760(void);
    void func_ov085_0215182c(void);
    void func_ov085_02151e54(void);
    void func_ov085_02152240(void);
    void func_ov085_021525f4(void);
    void func_ov085_021527a0(void);
    void func_ov085_021529b0(void);
    void func_ov085_02152a70(void);
    void func_ov085_02152ac8(void);
    void func_ov085_02152b78(void);
    void func_ov085_02152c00(void);
    void func_ov085_02152cf8(void);
    void func_ov085_02152d2c(void);
    void func_ov085_02152d48(void);
    void func_ov085_02152e18(void);
    void func_ov085_02152e8c(void);
    void func_ov085_02152f28(void);
    void func_ov085_02152f40(void);
    void func_ov085_02152fb0(void);
    void func_ov085_02152fd4(void);
    void func_ov085_02153044(void);
    void func_ov085_02153080(void);
    void func_ov085_021530bc(void);
    void func_ov085_021530fc(void);
    void func_ov085_02153158(void);
};

class ActorProfileUnkSRST : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSRST();
    ~ActorProfileUnkSRST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSRST *GetProfile();
};
