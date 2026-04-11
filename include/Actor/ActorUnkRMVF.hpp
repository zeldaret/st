//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMVF : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMVF();

    /* 4C */ virtual ~ActorUnkRMVF() override;

    void func_ov059_02161ce4(void);
    void func_ov059_02161cf8(void);
    void func_ov059_02161d98(void);
    void func_ov059_02161dc4(void);
    void func_ov059_02161e14(void);
    void func_ov059_02161e1c(void);
    void func_ov059_02161e40(void);
    void func_ov059_02161e50(void);
    void func_ov059_02161ea4(void);
};

class ActorProfileUnkRMVF : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMVF();
    ~ActorProfileUnkRMVF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMVF *GetProfile();
};
