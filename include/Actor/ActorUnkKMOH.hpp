//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKMOH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKMOH();

    /* 4C */ virtual ~ActorUnkKMOH() override;

    void func_ov050_021330a8(void);
    void func_ov050_021330bc(void);
    void func_ov050_02133104(void);
    void func_ov050_02133128(void);
    void func_ov050_0213317c(void);
    void func_ov050_02133334(void);
    void func_ov050_0213339c(void);
    void func_ov050_021333d4(void);
    void func_ov050_0213345c(void);
    void func_ov050_021334e0(void);
    void func_ov050_02133548(void);
    void func_ov050_02133684(void);
    void func_ov050_0213370c(void);
    void func_ov050_0213379c(void);
    void func_ov050_02133824(void);
    void func_ov050_02133968(void);
    void func_ov050_021339d0(void);
    void func_ov050_02133a04(void);
    void func_ov050_02133aec(void);
    void func_ov050_02133b6c(void);
    void func_ov050_02133bd0(void);
    void func_ov050_02133c64(void);
    void func_ov050_02133cf8(void);
    void func_ov050_02133d3c(void);
    void func_ov050_02133de4(void);
    void func_ov050_02133e3c(void);
    void func_ov050_02133ee8(void);
    void func_ov050_02133f50(void);
    void func_ov050_02133fc4(void);
    void func_ov050_02134190(void);
    void func_ov050_02134224(void);
    void func_ov050_021344d4(void);
    void func_ov050_02134540(void);
    void func_ov050_021345ac(void);
    void func_ov050_021345dc(void);
    void func_ov050_02134750(void);
    void func_ov050_021347c8(void);
    void func_ov050_0213484c(void);
    void func_ov050_02134940(void);
    void func_ov050_02134988(void);
    void func_ov050_021349b0(void);
    void func_ov050_021349c0(void);
    void func_ov050_02134a84(void);
    void func_ov050_02134abc(void);
    void func_ov050_02134c30(void);
    void func_ov050_02134e68(void);
    void func_ov050_02134ecc(void);
    void func_ov050_02135070(void);
    void func_ov050_02135148(void);
    void func_ov050_02135194(void);
    void func_ov050_021351b8(void);
    void func_ov050_02135200(void);
    void func_ov050_0213527c(void);
};

class ActorProfileUnkKMOH : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKMOH();
    ~ActorProfileUnkKMOH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKMOH *GetProfile();
};
