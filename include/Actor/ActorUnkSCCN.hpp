//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSCCN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSCCN();

    /* 4C */ virtual ~ActorUnkSCCN() override;

    void func_ov031_020efaa0(void);
};

class ActorProfileUnkSCCN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSCCN();
    ~ActorProfileUnkSCCN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSCCN *GetProfile();
};
