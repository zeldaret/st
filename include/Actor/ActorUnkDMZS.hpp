//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMZS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMZS();

    /* 4C */ virtual ~ActorUnkDMZS() override;

    void func_ov088_0216c470(void);
    void func_ov088_0216c4d0(void);
};

class ActorProfileUnkDMZS : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkDMZS();
    ~ActorProfileUnkDMZS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMZS *GetProfile();
};
