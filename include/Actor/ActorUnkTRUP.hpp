//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRUP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTRUP();

    /* 4C */ virtual ~ActorUnkTRUP() override;

    void func_ov026_0211139c(void);
    void func_ov026_02111440(void);
    void func_ov026_02111498(void);
    void func_ov026_02111578(void);
};

class ActorProfileUnkTRUP : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTRUP();
    ~ActorProfileUnkTRUP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTRUP *GetProfile();
};
