//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSOLF : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSOLF();

    /* 4C */ virtual ~ActorUnkSOLF() override;

    void func_ov037_0211b484(void);
    void func_ov037_0211b4c0(void);
    void func_ov037_0211b528(void);
    void func_ov037_0211b580(void);
    void func_ov037_0211b5e8(void);
    void func_ov037_0211b610(void);
    void func_ov037_0211b874(void);
    void func_ov037_0211b888(void);
    void func_ov037_0211b89c(void);
    void func_ov037_0211b8b0(void);
    void func_ov037_0211b8cc(void);
    void func_ov037_0211b980(void);
    void func_ov037_0211ba64(void);
    void func_ov037_0211bd90(void);
    void func_ov037_0211bdb4(void);
    void func_ov037_0211beb4(void);
    void func_ov037_0211bf2c(void);
    void func_ov037_0211c000(void);
    void func_ov037_0211c05c(void);
    void func_ov037_0211c120(void);
    void func_ov037_0211c184(void);
    void func_ov037_0211c1c0(void);
    void func_ov037_0211c244(void);
    void func_ov037_0211c3bc(void);
    void func_ov037_0211c748(void);
    void func_ov037_0211c898(void);
    void func_ov037_0211c91c(void);
    void func_ov037_0211c948(void);
    void func_ov037_0211ca10(void);
    void func_ov037_0211caf4(void);
    void func_ov037_0211cb70(void);
    void func_ov037_0211cc74(void);
    void func_ov037_0211ccf8(void);
    void func_ov037_0211cf6c(void);
    void func_ov037_0211cfec(void);
    void func_ov037_0211d0ac(void);
    void func_ov037_0211d198(void);
    void func_ov037_0211d990(void);
    void func_ov037_0211db0c(void);
    void func_ov037_0211dcc4(void);
    void func_ov037_0211dd18(void);
    void func_ov037_0211dd88(void);
    void func_ov037_0211dec0(void);
    void func_ov037_0211df30(void);
    void func_ov037_0211df34(void);
    void func_ov037_0211df40(void);
    void func_ov037_0211dfb8(void);
    void func_ov037_0211dff0(void);
    void func_ov037_0211e040(void);
    void func_ov037_0211e2dc(void);
    void func_ov037_0211e310(void);
    void func_ov037_0211e334(void);
    void func_ov037_0211e348(void);
    void func_ov037_0211e350(void);
    void func_ov037_0211e364(void);
    void func_ov037_0211e464(void);
    void func_ov037_0211e47c(void);
    void func_ov037_0211e484(void);
    void func_ov037_0211e4c0(void);
    void func_ov037_0211e4fc(void);
    void func_ov037_0211e608(void);
    void func_ov037_0211e690(void);
    void func_ov037_0211e6d8(void);
    void func_ov037_0211e6f8(void);
    void func_ov037_0211e7e4(void);
    void func_ov037_0211e838(void);
    void func_ov037_0211e878(void);
    void func_ov037_0211e89c(void);
    void func_ov037_0211e8c8(void);
    void func_ov037_0211e8e4(void);
};

class ActorProfileUnkSOLF : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSOLF();
    ~ActorProfileUnkSOLF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSOLF *GetProfile();
};
