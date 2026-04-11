//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkVCFT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkVCFT();

    /* 4C */ virtual ~ActorUnkVCFT() override;

    void func_ov066_02158e2c(void);
    void func_ov066_02158eb4(void);
    void func_ov066_02158ec8(void);
    void func_ov066_0215ac68(void);
    void func_ov066_0215ae50(void);
    void func_ov066_0215b2f4(void);
    void func_ov066_0215b448(void);
    void func_ov066_0215b61c(void);
    void func_ov066_0215b67c(void);
    void func_ov066_0215b70c(void);
    void func_ov066_0215b830(void);
    void func_ov066_0215b848(void);
    void func_ov066_0215b864(void);
    void func_ov066_0215b8c4(void);
    void func_ov066_0215b938(void);
    void func_ov066_0215b9ac(void);
    void func_ov066_0215b9f4(void);
};

class ActorProfileUnkVCFT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkVCFT();
    ~ActorProfileUnkVCFT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkVCFT *GetProfile();
};
