//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPTSW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPTSW();

    /* 4C */ virtual ~ActorUnkPTSW() override;

    void func_ov052_0213761c(void);
    void func_ov052_02137650(void);
    void func_ov052_02137684(void);
    void func_ov052_02137698(void);
};

class ActorProfileUnkPTSW : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkPTSW();
    ~ActorProfileUnkPTSW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPTSW *GetProfile();
};
