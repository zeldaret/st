//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOCTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkOCTG();

    /* 4C */ virtual ~ActorUnkOCTG() override;

    void func_ov086_021580f0(void);
    void func_ov086_02158120(void);
    void func_ov086_02158144(void);
    void func_ov086_02158214(void);
    void func_ov086_02158260(void);
    void func_ov086_02158298(void);
    void func_ov086_021584b8(void);
    void func_ov086_021584cc(void);
    void func_ov086_02158614(void);
    void func_ov086_02158684(void);
    void func_ov086_021586b4(void);
    void func_ov086_021586fc(void);
    void func_ov086_021590a8(void);
    void func_ov086_02159104(void);
    void func_ov086_021591ec(void);
    void func_ov086_02159258(void);
    void func_ov086_021592e0(void);
    void func_ov086_02159354(void);
    void func_ov086_02159464(void);
    void func_ov086_0215957c(void);
    void func_ov086_0215968c(void);
    void func_ov086_021597dc(void);
    void func_ov086_02159c84(void);
    void func_ov086_02159d24(void);
    void func_ov086_02159df4(void);
    void func_ov086_02159ea0(void);
    void func_ov086_02159f70(void);
    void func_ov086_02159f74(void);
    void func_ov086_0215a030(void);
    void func_ov086_0215a0c4(void);
    void func_ov086_0215a470(void);
    void func_ov086_0215a520(void);
    void func_ov086_0215a6d4(void);
    void func_ov086_0215a7d8(void);
    void func_ov086_0215a894(void);
    void func_ov086_0215a90c(void);
    void func_ov086_0215a990(void);
    void func_ov086_0215aa30(void);
    void func_ov086_0215ab4c(void);
    void func_ov086_0215abd8(void);
    void func_ov086_0215ac84(void);
    void func_ov086_0215ad14(void);
    void func_ov086_0215ad40(void);
    void func_ov086_0215add4(void);
    void func_ov086_0215ade4(void);
    void func_ov086_0215ae14(void);
    void func_ov086_0215ae98(void);
    void func_ov086_0215af28(void);
    void func_ov086_0215af74(void);
};

class ActorProfileUnkOCTG : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkOCTG();
    ~ActorProfileUnkOCTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOCTG *GetProfile();
};
