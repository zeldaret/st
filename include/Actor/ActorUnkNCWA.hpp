//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNCWA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNCWA();

    /* 4C */ virtual ~ActorUnkNCWA() override;

    void func_ov062_0215a084(void);
    void func_ov062_0215a220(void);
    void func_ov062_0215a238(void);
    void func_ov062_0215a28c(void);
};

class ActorProfileUnkNCWA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkNCWA();
    ~ActorProfileUnkNCWA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNCWA *GetProfile();
};
