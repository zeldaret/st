//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFCHL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFCHL();

    /* 4C */ virtual ~ActorUnkFCHL() override;

    void func_ov034_02119ff0(void);
    void func_ov034_0211a004(void);
    void func_ov034_0211a208(void);
    void func_ov034_0211a21c(void);
    void func_ov034_0211a288(void);
};

class ActorProfileUnkFCHL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFCHL();
    ~ActorProfileUnkFCHL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFCHL *GetProfile();
};
