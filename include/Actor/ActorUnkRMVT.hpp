//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMVT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMVT();

    /* 4C */ virtual ~ActorUnkRMVT() override;

    void func_ov059_0216169c(void);
    void func_ov059_021616b8(void);
    void func_ov059_021616cc(void);
    void func_ov059_02161850(void);
    void func_ov059_02161854(void);
    void func_ov059_02161868(void);
    void func_ov059_021618ec(void);
    void func_ov059_021619e0(void);
    void func_ov059_021619f8(void);
};

class ActorProfileUnkRMVT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMVT();
    ~ActorProfileUnkRMVT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMVT *GetProfile();
};
