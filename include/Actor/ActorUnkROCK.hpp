//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkROCK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkROCK();

    /* 4C */ virtual ~ActorUnkROCK() override;

    void func_ov031_020e897c(void);
    void func_ov031_020e89ac(void);
    void func_ov031_020e8a48(void);
    void func_ov031_020e8acc(void);
    void func_ov031_020e8afc(void);
    void func_ov031_020e8ba0(void);
    void func_ov031_020e8c08(void);
};

class ActorProfileUnkROCK : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkROCK();
    ~ActorProfileUnkROCK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkROCK *GetProfile();
};
