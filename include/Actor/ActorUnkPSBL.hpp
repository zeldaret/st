//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPSBL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPSBL();

    /* 4C */ virtual ~ActorUnkPSBL() override;

    void func_ov079_02150c88(void);
    void func_ov079_02150e4c(void);
    void func_ov079_02150f28(void);
    void func_ov079_0215110c(void);
    void func_ov079_02151338(void);
    void func_ov079_02151358(void);
    void func_ov079_0215139c(void);
    void func_ov079_021513d4(void);
    void func_ov079_02151410(void);
    void func_ov079_021514a0(void);
    void func_ov079_02151540(void);
    void func_ov079_021515f0(void);
    void func_ov079_021518d0(void);
    void func_ov079_0215196c(void);
    void func_ov079_021519cc(void);
    void func_ov079_02151bcc(void);
    void func_ov079_02151c20(void);
    void func_ov079_02151cd0(void);
    void func_ov079_02151d30(void);
    void func_ov079_02151d94(void);
    void func_ov079_02151f7c(void);
    void func_ov079_02152068(void);
    void func_ov079_021521f0(void);
    void func_ov079_02152284(void);
    void func_ov079_02152308(void);
    void func_ov079_02152378(void);
    void func_ov079_021523e0(void);
    void func_ov079_021523e4(void);
    void func_ov079_021524dc(void);
    void func_ov079_021524e8(void);
    void func_ov079_02152554(void);
    void func_ov079_02152594(void);
    void func_ov079_02152658(void);
    void func_ov079_02152684(void);
    void func_ov079_02152714(void);
    void func_ov079_021527a8(void);
    void func_ov079_0215293c(void);
    void func_ov079_02152a0c(void);
    void func_ov079_02152a20(void);
    void func_ov079_02152b10(void);
    void func_ov079_02152b24(void);
};

class ActorProfileUnkPSBL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPSBL();
    ~ActorProfileUnkPSBL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPSBL *GetProfile();
};
