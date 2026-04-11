//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPBSP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPBSP();

    /* 4C */ virtual ~ActorUnkPBSP() override;

    void func_ov059_02157fcc(void);
    void func_ov059_02157ff8(void);
    void func_ov059_0215803c(void);
    void func_ov059_02158110(void);
    void func_ov059_02158114(void);
    void func_ov059_0215813c(void);
    void func_ov059_02158148(void);
    void func_ov059_02158198(void);
    void func_ov059_0215819c(void);
    void func_ov059_02158208(void);
    void func_ov059_0215820c(void);
    void func_ov059_02158250(void);
    void func_ov059_02158254(void);
    void func_ov059_02158314(void);
    void func_ov059_0215833c(void);
    void func_ov059_021583d0(void);
    void func_ov059_021583fc(void);
    void func_ov059_021584a0(void);
    void func_ov059_02158564(void);
    void func_ov059_021585d4(void);
    void func_ov059_02158648(void);
    void func_ov059_021586a8(void);
    void func_ov059_0215875c(void);
    void func_ov059_021587c8(void);
    void func_ov059_02158920(void);
    void func_ov059_021589ac(void);
    void func_ov059_021589b4(void);
    void func_ov059_02158a34(void);
    void func_ov059_02158aa0(void);
    void func_ov059_02158b30(void);
};

class ActorProfileUnkPBSP : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkPBSP();
    ~ActorProfileUnkPBSP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPBSP *GetProfile();
};
