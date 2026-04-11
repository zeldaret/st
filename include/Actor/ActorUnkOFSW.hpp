//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOFSW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkOFSW();

    /* 4C */ virtual ~ActorUnkOFSW() override;

    void func_ov077_0215ab4c(void);
    void func_ov077_0215ab6c(void);
    void func_ov077_0215abc4(void);
};

class ActorProfileUnkOFSW : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkOFSW();
    ~ActorProfileUnkOFSW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOFSW *GetProfile();
};
