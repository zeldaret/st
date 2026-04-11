//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBGOK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBGOK();

    /* 4C */ virtual ~ActorUnkBGOK() override;

    void func_ov076_02150c8c(void);
    void func_ov076_02150ca0(void);
    void func_ov076_02150cb4(void);
    void func_ov076_02150ecc(void);
    void func_ov076_02150f74(void);
    void func_ov076_02150fa4(void);
    void func_ov076_02150ff8(void);
    void func_ov076_02151108(void);
    void func_ov076_02151250(void);
    void func_ov076_02151278(void);
    void func_ov076_02151578(void);
    void func_ov076_021516b8(void);
    void func_ov076_021516e4(void);
    void func_ov076_0215178c(void);
    void func_ov076_021517c4(void);
    void func_ov076_02151838(void);
    void func_ov076_0215191c(void);
    void func_ov076_0215199c(void);
    void func_ov076_02151a64(void);
    void func_ov076_02151ae4(void);
    void func_ov076_02151b0c(void);
    void func_ov076_02151bb8(void);
    void func_ov076_02151bec(void);
    void func_ov076_02151c58(void);
    void func_ov076_02151c5c(void);
    void func_ov076_02151c78(void);
    void func_ov076_02151c90(void);
    void func_ov076_02151d50(void);
    void func_ov076_02151f60(void);
    void func_ov076_02151ff0(void);
    void func_ov076_021520a4(void);
    void func_ov076_02152210(void);
    void func_ov076_02152404(void);
    void func_ov076_02152484(void);
    void func_ov076_021525c8(void);
    void func_ov076_02152604(void);
    void func_ov076_02152684(void);
    void func_ov076_021526a4(void);
    void func_ov076_021526b8(void);
    void func_ov076_021527e4(void);
    void func_ov076_02152858(void);
    void func_ov076_02152888(void);
    void func_ov076_02152940(void);
    void func_ov076_021529cc(void);
    void func_ov076_021529f0(void);
    void func_ov076_02152a00(void);
    void func_ov076_02152a08(void);
    void func_ov076_02152a2c(void);
    void func_ov076_02152a58(void);
    void func_ov076_02152a74(void);
    void func_ov076_02152a90(void);
};

class ActorProfileUnkBGOK : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBGOK();
    ~ActorProfileUnkBGOK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBGOK *GetProfile();
};
