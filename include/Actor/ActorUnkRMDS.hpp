//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMDS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMDS();

    /* 4C */ virtual ~ActorUnkRMDS() override;

    void func_ov086_0215db44(void);
    void func_ov086_0215dbb0(void);
    void func_ov086_0215dbb4(void);
    void func_ov086_0215dbc8(void);
    void func_ov086_0215dbdc(void);
    void func_ov086_0215dbe8(void);
};

class ActorProfileUnkRMDS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMDS();
    ~ActorProfileUnkRMDS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMDS *GetProfile();
};
