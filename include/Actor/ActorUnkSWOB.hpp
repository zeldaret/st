//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWOB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSWOB();

    /* 4C */ virtual ~ActorUnkSWOB() override;

    void func_ov000_0209a948(void);
    void func_ov000_0209a9b4(void);
    void func_ov000_0209aa30(void);
};

class ActorProfileUnkSWOB : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWOB();
    ~ActorProfileUnkSWOB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWOB *GetProfile();
};
