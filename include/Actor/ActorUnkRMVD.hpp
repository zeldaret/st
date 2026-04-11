//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMVD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMVD();

    /* 4C */ virtual ~ActorUnkRMVD() override;

    void func_ov059_02162830(void);
    void func_ov059_021628d0(void);
    void func_ov059_021628fc(void);
    void func_ov059_0216294c(void);
};

class ActorProfileUnkRMVD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMVD();
    ~ActorProfileUnkRMVD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMVD *GetProfile();
};
