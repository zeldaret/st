//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFLDK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFLDK();

    /* 4C */ virtual ~ActorUnkFLDK() override;

    void func_ov047_021354a4(void);
    void func_ov047_02135570(void);
};

class ActorProfileUnkFLDK : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFLDK();
    ~ActorProfileUnkFLDK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFLDK *GetProfile();
};
