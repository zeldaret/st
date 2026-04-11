//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSWCH();

    /* 4C */ virtual ~ActorUnkSWCH() override;

    void func_ov031_020f7b0c(void);
    void func_ov031_020f7b20(void);
    void func_ov031_020f7b88(void);
};

class ActorProfileUnkSWCH : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWCH();
    ~ActorProfileUnkSWCH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWCH *GetProfile();
};
