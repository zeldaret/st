//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNPWC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNPWC();

    /* 4C */ virtual ~ActorUnkNPWC() override;

    void func_ov083_0215c3b4(void);
};

class ActorProfileUnkNPWC : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNPWC();
    ~ActorProfileUnkNPWC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNPWC *GetProfile();
};
