//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkE3ST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkE3ST();

    /* 4C */ virtual ~ActorUnkE3ST() override;

    void func_ov090_02171510(void);
};

class ActorProfileUnkE3ST : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkE3ST();
    ~ActorProfileUnkE3ST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkE3ST *GetProfile();
};
