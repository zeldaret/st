//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJSP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkAJSP();

    /* 4C */ virtual ~ActorUnkAJSP() override;

    void func_ov068_02160a08(void);
    void func_ov068_02160ad0(void);
};

class ActorProfileUnkAJSP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkAJSP();
    ~ActorProfileUnkAJSP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkAJSP *GetProfile();
};
