//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkE3GL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkE3GL();

    /* 4C */ virtual ~ActorUnkE3GL() override;

    void func_ov090_02171054(void);
    void func_ov090_02171064(void);
    void func_ov090_02171074(void);
};

class ActorProfileUnkE3GL : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkE3GL();
    ~ActorProfileUnkE3GL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkE3GL *GetProfile();
};
