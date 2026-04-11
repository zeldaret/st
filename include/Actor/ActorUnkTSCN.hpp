//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTSCN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTSCN();

    /* 4C */ virtual ~ActorUnkTSCN() override;

    void func_ov068_0215a8c4(void);
    void func_ov068_0215a8e0(void);
};

class ActorProfileUnkTSCN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTSCN();
    ~ActorProfileUnkTSCN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTSCN *GetProfile();
};
