//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBFR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRBFR();

    /* 4C */ virtual ~ActorUnkRBFR() override;

    void func_ov078_0215ce24(void);
    void func_ov078_0215ce38(void);
    void func_ov078_0215ced0(void);
    void func_ov078_0215cee8(void);
    void func_ov078_0215cefc(void);
    void func_ov078_0215cf7c(void);
};

class ActorProfileUnkRBFR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBFR();
    ~ActorProfileUnkRBFR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBFR *GetProfile();
};
