//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSMCT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSMCT();

    /* 4C */ virtual ~ActorUnkSMCT() override;

    void func_ov091_02169c9c(void);
    void func_ov091_02169cd8(void);
};

class ActorProfileUnkSMCT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSMCT();
    ~ActorProfileUnkSMCT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSMCT *GetProfile();
};
