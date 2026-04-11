//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCASL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCASL();

    /* 4C */ virtual ~ActorUnkCASL() override;

    void func_ov060_0215eafc(void);
    void func_ov060_0215eb10(void);
    void func_ov060_0215eb24(void);
};

class ActorProfileUnkCASL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCASL();
    ~ActorProfileUnkCASL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCASL *GetProfile();
};
