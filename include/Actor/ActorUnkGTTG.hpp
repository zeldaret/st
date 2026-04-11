//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGTTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGTTG();

    /* 4C */ virtual ~ActorUnkGTTG() override;

    void func_ov057_0213a8b8(void);
};

class ActorProfileUnkGTTG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkGTTG();
    ~ActorProfileUnkGTTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGTTG *GetProfile();
};
