//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKIMA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKIMA();

    /* 4C */ virtual ~ActorUnkKIMA() override;

    void func_ov060_02160334(void);
    void func_ov060_02160340(void);
    void func_ov060_02160348(void);
};

class ActorProfileUnkKIMA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKIMA();
    ~ActorProfileUnkKIMA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKIMA *GetProfile();
};
