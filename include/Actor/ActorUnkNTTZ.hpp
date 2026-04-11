//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNTTZ : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNTTZ();

    /* 4C */ virtual ~ActorUnkNTTZ() override;

    void func_ov031_020f6190(void);
    void func_ov031_020f6198(void);
    void func_ov031_020f619c(void);
    void func_ov031_020f61a0(void);
    void func_ov031_020f61f0(void);
};

class ActorProfileUnkNTTZ : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNTTZ();
    ~ActorProfileUnkNTTZ();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNTTZ *GetProfile();
};
