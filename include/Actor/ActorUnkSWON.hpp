//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWON : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSWON();

    /* 4C */ virtual ~ActorUnkSWON() override;

    void func_ov031_020f7e34(void);
};

class ActorProfileUnkSWON : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWON();
    ~ActorProfileUnkSWON();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWON *GetProfile();
};
