//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBVC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRBVC();

    /* 4C */ virtual ~ActorUnkRBVC() override;

    void func_ov084_0215d1f8(void);
    void func_ov084_0215d20c(void);
    void func_ov084_0215d2b4(void);
    void func_ov084_0215d2b8(void);
    void func_ov084_0215d33c(void);
    void func_ov084_0215d350(void);
    void func_ov084_0215d380(void);
    void func_ov084_0215d414(void);
};

class ActorProfileUnkRBVC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBVC();
    ~ActorProfileUnkRBVC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBVC *GetProfile();
};
