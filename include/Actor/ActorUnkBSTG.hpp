//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBSTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBSTG();

    /* 4C */ virtual ~ActorUnkBSTG() override;

    void func_ov058_0214d794(void);
    void func_ov058_0214d79c(void);
};

class ActorProfileUnkBSTG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkBSTG();
    ~ActorProfileUnkBSTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBSTG *GetProfile();
};
