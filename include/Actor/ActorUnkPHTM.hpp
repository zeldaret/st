//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPHTM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPHTM();

    /* 4C */ virtual ~ActorUnkPHTM() override;
};

class ActorProfileUnkPHTM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPHTM();
    ~ActorProfileUnkPHTM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPHTM *GetProfile();
};
