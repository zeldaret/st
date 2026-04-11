//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMSF : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMSF();

    /* 4C */ virtual ~ActorUnkRMSF() override;

    void func_ov063_0215c250(void);
    void func_ov063_0215c290(void);
};

class ActorProfileUnkRMSF : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSF();
    ~ActorProfileUnkRMSF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSF *GetProfile();
};
