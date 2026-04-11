//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMTG();

    /* 4C */ virtual ~ActorUnkRMTG() override;

    void func_ov031_020ef8a0(void);
    void func_ov031_020ef958(void);
    void func_ov031_020ef990(void);
};

class ActorProfileUnkRMTG : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMTG();
    ~ActorProfileUnkRMTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMTG *GetProfile();
};
