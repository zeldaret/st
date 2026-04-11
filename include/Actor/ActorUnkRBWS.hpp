//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBWS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRBWS();

    /* 4C */ virtual ~ActorUnkRBWS() override;

    void func_ov083_0215c264(void);
    void func_ov083_0215c2a0(void);
    void func_ov083_0215c2a4(void);
};

class ActorProfileUnkRBWS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBWS();
    ~ActorProfileUnkRBWS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBWS *GetProfile();
};
