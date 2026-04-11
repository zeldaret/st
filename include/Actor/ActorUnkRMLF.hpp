//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMLF : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMLF();

    /* 4C */ virtual ~ActorUnkRMLF() override;

    void func_ov062_02159a6c(void);
};

class ActorProfileUnkRMLF : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMLF();
    ~ActorProfileUnkRMLF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMLF *GetProfile();
};
