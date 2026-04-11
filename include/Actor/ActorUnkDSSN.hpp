//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDSSN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDSSN();

    /* 4C */ virtual ~ActorUnkDSSN() override;

    void func_ov079_021559e4(void);
};

class ActorProfileUnkDSSN : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDSSN();
    ~ActorProfileUnkDSSN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDSSN *GetProfile();
};
