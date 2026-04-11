//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMSV : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMSV();

    /* 4C */ virtual ~ActorUnkRMSV() override;

    void func_ov063_0215bd44(void);
    void func_ov063_0215bd58(void);
    void func_ov063_0215bdec(void);
    void func_ov063_0215be10(void);
    void func_ov063_0215be3c(void);
    void func_ov063_0215be50(void);
    void func_ov063_0215be90(void);
    void func_ov063_0215bed0(void);
    void func_ov063_0215bee0(void);
    void func_ov063_0215bf3c(void);
};

class ActorProfileUnkRMSV : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSV();
    ~ActorProfileUnkRMSV();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSV *GetProfile();
};
