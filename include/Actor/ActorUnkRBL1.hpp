//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBL1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRBL1();

    /* 4C */ virtual ~ActorUnkRBL1() override;

    void func_ov074_02150c64(void);
    void func_ov074_02150c78(void);
    void func_ov074_02150ebc(void);
    void func_ov074_02151158(void);
    void func_ov074_0215116c(void);
    void func_ov074_02151180(void);
    void func_ov074_02151374(void);
    void func_ov074_021513b4(void);
    void func_ov074_02151458(void);
    void func_ov074_021514b4(void);
    void func_ov074_02151630(void);
    void func_ov074_021516e4(void);
    void func_ov074_0215174c(void);
    void func_ov074_021517ec(void);
    void func_ov074_02151830(void);
    void func_ov074_021518a8(void);
    void func_ov074_02151920(void);
    void func_ov074_02151990(void);
    void func_ov074_021519f4(void);
    void func_ov074_02151a18(void);
    void func_ov074_02151a28(void);
    void func_ov074_02151a4c(void);
    void func_ov074_02151ab0(void);
};

class ActorProfileUnkRBL1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBL1();
    ~ActorProfileUnkRBL1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBL1 *GetProfile();
};
