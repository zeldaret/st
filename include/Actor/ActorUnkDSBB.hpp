//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDSBB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDSBB();

    /* 4C */ virtual ~ActorUnkDSBB() override;

    void func_ov087_0215b430(void);
    void func_ov087_0215b444(void);
    void func_ov087_0215b558(void);
    void func_ov087_0215b638(void);
    void func_ov087_0215b65c(void);
    void func_ov087_0215b6a4(void);
    void func_ov087_0215b6e4(void);
    void func_ov087_0215b7c4(void);
    void func_ov087_0215b844(void);
    void func_ov087_0215b8c4(void);
    void func_ov087_0215b990(void);
    void func_ov087_0215baec(void);
    void func_ov087_0215bb58(void);
    void func_ov087_0215bbbc(void);
    void func_ov087_0215bc44(void);
    void func_ov087_0215bd1c(void);
    void func_ov087_0215c08c(void);
    void func_ov087_0215c0ac(void);
    void func_ov087_0215c0f0(void);
    void func_ov087_0215c13c(void);
    void func_ov087_0215c1c4(void);
    void func_ov087_0215c24c(void);
    void func_ov087_0215c268(void);
};

class ActorProfileUnkDSBB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDSBB();
    ~ActorProfileUnkDSBB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDSBB *GetProfile();
};
