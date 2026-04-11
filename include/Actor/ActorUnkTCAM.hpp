//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTCAM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTCAM();

    /* 4C */ virtual ~ActorUnkTCAM() override;

    void func_ov093_021772a0(void);
    void func_ov093_021772bc(void);
    void func_ov093_0217733c(void);
    void func_ov093_02177474(void);
    void func_ov093_0217747c(void);
    void func_ov093_0217748c(void);
};

class ActorProfileUnkTCAM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTCAM();
    ~ActorProfileUnkTCAM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTCAM *GetProfile();
};
