//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOCTW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkOCTW();

    /* 4C */ virtual ~ActorUnkOCTW() override;

    void func_ov079_02153230(void);
    void func_ov079_02153244(void);
    void func_ov079_0215337c(void);
    void func_ov079_02153458(void);
    void func_ov079_02153478(void);
    void func_ov079_021534cc(void);
    void func_ov079_02153754(void);
    void func_ov079_02153828(void);
    void func_ov079_02153910(void);
    void func_ov079_021539c0(void);
    void func_ov079_02153a7c(void);
    void func_ov079_02153b2c(void);
    void func_ov079_02153c20(void);
    void func_ov079_02153ca0(void);
    void func_ov079_02153d90(void);
    void func_ov079_02153e60(void);
    void func_ov079_02153f84(void);
    void func_ov079_02154090(void);
    void func_ov079_021540c0(void);
    void func_ov079_0215412c(void);
    void func_ov079_02154184(void);
    void func_ov079_02154208(void);
    void func_ov079_02154418(void);
    void func_ov079_02154488(void);
    void func_ov079_02154800(void);
    void func_ov079_021548a8(void);
    void func_ov079_02154934(void);
    void func_ov079_02154a5c(void);
    void func_ov079_02154ac0(void);
    void func_ov079_02154b38(void);
    void func_ov079_02154c0c(void);
    void func_ov079_02154c9c(void);
    void func_ov079_02154ce0(void);
    void func_ov079_02154e98(void);
    void func_ov079_02154f2c(void);
    void func_ov079_02154f54(void);
    void func_ov079_02154fb8(void);
    void func_ov079_02155000(void);
    void func_ov079_02155058(void);
    void func_ov079_0215507c(void);
    void func_ov079_021550a8(void);
};

class ActorProfileUnkOCTW : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkOCTW();
    ~ActorProfileUnkOCTW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOCTW *GetProfile();
};
