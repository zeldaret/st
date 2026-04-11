//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMSW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMSW();

    /* 4C */ virtual ~ActorUnkRMSW() override;

    void func_ov063_0215c05c(void);
    void func_ov063_0215c0b0(void);
    void func_ov063_0215c0c8(void);
    void func_ov063_0215c0dc(void);
    void func_ov063_0215c11c(void);
};

class ActorProfileUnkRMSW : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSW();
    ~ActorProfileUnkRMSW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSW *GetProfile();
};
