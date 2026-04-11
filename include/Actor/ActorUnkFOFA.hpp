//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFOFA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFOFA();

    /* 4C */ virtual ~ActorUnkFOFA() override;

    void func_ov021_020f3a34(void);
};

class ActorProfileUnkFOFA : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFOFA();
    ~ActorProfileUnkFOFA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFOFA *GetProfile();
};
