//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBRG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFBRG();

    /* 4C */ virtual ~ActorUnkFBRG() override;

    void func_ov094_0216df94(void);
    void func_ov094_0216dfa8(void);
    void func_ov094_0216e290(void);
    void func_ov094_0216e2a4(void);
    void func_ov094_0216e2ac(void);
    void func_ov094_0216e2d4(void);
    void func_ov094_0216e2f4(void);
    void func_ov094_0216e34c(void);
};

class ActorProfileUnkFBRG : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFBRG();
    ~ActorProfileUnkFBRG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFBRG *GetProfile();
};
