//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMEQ : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMEQ();

    /* 4C */ virtual ~ActorUnkDMEQ() override;

    void func_ov088_0216e31c(void);
    void func_ov088_0216e718(void);
    void func_ov088_0216e738(void);
};

class ActorProfileUnkDMEQ : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkDMEQ();
    ~ActorProfileUnkDMEQ();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMEQ *GetProfile();
};
