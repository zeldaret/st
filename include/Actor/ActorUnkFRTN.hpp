//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFRTN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFRTN();

    /* 4C */ virtual ~ActorUnkFRTN() override;

    void func_ov050_021354c8(void);
    void func_ov050_021354dc(void);
    void func_ov050_0213559c(void);
    void func_ov050_0213574c(void);
    void func_ov050_02135870(void);
    void func_ov050_021358e8(void);
    void func_ov050_021359a0(void);
    void func_ov050_02135b8c(void);
    void func_ov050_02135c70(void);
    void func_ov050_02135d0c(void);
    void func_ov050_02135ee4(void);
    void func_ov050_02135f1c(void);
    void func_ov050_02135f2c(void);
    void func_ov050_02135f70(void);
    void func_ov050_02135f80(void);
    void func_ov050_02135f90(void);
    void func_ov050_02135fc4(void);
    void func_ov050_02136000(void);
    void func_ov050_0213601c(void);
    void func_ov050_0213605c(void);
    void func_ov050_021360dc(void);
    void func_ov050_02136118(void);
    void func_ov050_02136128(void);
    void func_ov050_021361e0(void);
};

class ActorProfileUnkFRTN : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFRTN();
    ~ActorProfileUnkFRTN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFRTN *GetProfile();
};
