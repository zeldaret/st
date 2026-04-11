//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBL2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRBL2();

    /* 4C */ virtual ~ActorUnkRBL2() override;

    void func_ov044_0212be20(void);
    void func_ov044_0212bea8(void);
    void func_ov044_0212bf34(void);
    void func_ov044_0212bfc0(void);
    void func_ov044_0212c04c(void);
    void func_ov044_0212c050(void);
};

class ActorProfileUnkRBL2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBL2();
    ~ActorProfileUnkRBL2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBL2 *GetProfile();
};
