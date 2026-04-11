//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSGMG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSGMG();

    /* 4C */ virtual ~ActorUnkSGMG() override;

    void func_ov030_0214d8d0(void);
    void func_ov030_0214d8e0(void);
    void func_ov030_0214dbb4(void);
    void func_ov030_0214dc30(void);
    void func_ov030_0214dc80(void);
    void func_ov030_0214dc90(void);
};

class ActorProfileUnkSGMG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSGMG();
    ~ActorProfileUnkSGMG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSGMG *GetProfile();
};
