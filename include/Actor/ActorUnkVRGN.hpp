//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkVRGN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkVRGN();

    /* 4C */ virtual ~ActorUnkVRGN() override;

    void func_ov094_02168468(void);
    void func_ov094_0216849c(void);
    void func_ov094_02168588(void);
    void func_ov094_021685bc(void);
    void func_ov094_02168624(void);
};

class ActorProfileUnkVRGN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkVRGN();
    ~ActorProfileUnkVRGN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkVRGN *GetProfile();
};
