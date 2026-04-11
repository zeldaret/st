//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFRI : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFRI();

    /* 4C */ virtual ~ActorUnkEFRI() override;

    void func_ov098_02181e3c(void);
    void func_ov098_02181ed8(void);
};

class ActorProfileUnkEFRI : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFRI();
    ~ActorProfileUnkEFRI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFRI *GetProfile();
};
