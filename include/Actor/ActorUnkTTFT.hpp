//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTTFT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTTFT();

    /* 4C */ virtual ~ActorUnkTTFT() override;

    void func_ov030_0214d6c0(void);
    void func_ov030_0214d710(void);
    void func_ov030_0214d724(void);
};

class ActorProfileUnkTTFT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTTFT();
    ~ActorProfileUnkTTFT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTTFT *GetProfile();
};
