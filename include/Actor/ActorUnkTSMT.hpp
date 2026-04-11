//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTSMT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTSMT();

    /* 4C */ virtual ~ActorUnkTSMT() override;

    void func_ov091_0216efc4(void);
    void func_ov091_0216eff4(void);
    void func_ov091_0216f024(void);
    void func_ov091_0216f034(void);
};

class ActorProfileUnkTSMT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTSMT();
    ~ActorProfileUnkTSMT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTSMT *GetProfile();
};
