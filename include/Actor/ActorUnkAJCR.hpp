//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJCR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkAJCR();

    /* 4C */ virtual ~ActorUnkAJCR() override;

    void func_ov068_0215d7f4(void);
    void func_ov068_0215d8d8(void);
};

class ActorProfileUnkAJCR : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkAJCR();
    ~ActorProfileUnkAJCR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkAJCR *GetProfile();
};
