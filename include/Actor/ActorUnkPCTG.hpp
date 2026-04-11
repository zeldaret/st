//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPCTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPCTG();

    /* 4C */ virtual ~ActorUnkPCTG() override;

    void func_ov094_0216b484(void);
    void func_ov094_0216b69c(void);
    void func_ov094_0216b6dc(void);
    void func_ov094_0216b714(void);
    void func_ov094_0216b718(void);
    void func_ov094_0216b858(void);
    void func_ov094_0216b890(void);
    void func_ov094_0216be38(void);
    void func_ov094_0216bf58(void);
    void func_ov094_0216bfa4(void);
    void func_ov094_0216c1c8(void);
    void func_ov094_0216c34c(void);
    void func_ov094_0216c36c(void);
};

class ActorProfileUnkPCTG : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPCTG();
    ~ActorProfileUnkPCTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPCTG *GetProfile();
};
