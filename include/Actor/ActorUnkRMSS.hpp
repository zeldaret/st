//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMSS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMSS();

    /* 4C */ virtual ~ActorUnkRMSS() override;

    void func_ov063_0215c5fc(void);
    void func_ov063_0215c63c(void);
};

class ActorProfileUnkRMSS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSS();
    ~ActorProfileUnkRMSS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSS *GetProfile();
};
