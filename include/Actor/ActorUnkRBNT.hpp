//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBNT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRBNT();

    /* 4C */ virtual ~ActorUnkRBNT() override;

    void func_ov026_02121484(void);
    void func_ov026_021214bc(void);
    void func_ov026_02121518(void);
    void func_ov026_02121554(void);
    void func_ov026_02121708(void);
    void func_ov026_02121730(void);
    void func_ov026_0212197c(void);
    void func_ov026_021219e8(void);
    void func_ov026_021219ec(void);
    void func_ov026_02121a50(void);
    void func_ov026_02121a74(void);
    void func_ov026_02121aa8(void);
    void func_ov026_02121b00(void);
    void func_ov026_02121ba4(void);
    void func_ov026_02121bc0(void);
    void func_ov026_02121c00(void);
    void func_ov026_02121c1c(void);
    void func_ov026_02121c5c(void);
    void func_ov026_02121c70(void);
    void func_ov026_02121cd4(void);
    void func_ov026_02121ce8(void);
    void func_ov026_02121d4c(void);
    void func_ov026_02121e28(void);
    void func_ov026_02121e2c(void);
    void func_ov026_02121e68(void);
    void func_ov026_02121f1c(void);
    void func_ov026_02121f80(void);
    void func_ov026_02121f88(void);
};

class ActorProfileUnkRBNT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBNT();
    ~ActorProfileUnkRBNT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBNT *GetProfile();
};
