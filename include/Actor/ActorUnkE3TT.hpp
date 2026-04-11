//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkE3TT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkE3TT();

    /* 4C */ virtual ~ActorUnkE3TT() override;

    void func_ov090_021711a4(void);
    void func_ov090_021711d4(void);
};

class ActorProfileUnkE3TT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkE3TT();
    ~ActorProfileUnkE3TT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkE3TT *GetProfile();
};
