//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTTUT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTTUT();

    /* 4C */ virtual ~ActorUnkTTUT() override;

    void func_ov091_02175868(void);
    void func_ov091_02175944(void);
    void func_ov091_02175bbc(void);
};

class ActorProfileUnkTTUT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTTUT();
    ~ActorProfileUnkTTUT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTTUT *GetProfile();
};
