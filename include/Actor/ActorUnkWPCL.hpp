//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWPCL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWPCL();

    /* 4C */ virtual ~ActorUnkWPCL() override;

    void func_ov045_02128f58(void);
};

class ActorProfileUnkWPCL : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkWPCL();
    ~ActorProfileUnkWPCL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWPCL *GetProfile();
};
