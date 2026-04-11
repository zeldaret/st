//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMGM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMGM();

    /* 4C */ virtual ~ActorUnkDMGM() override;

    void func_ov088_0216e8b0(void);
    void func_ov088_0216ebb8(void);
    void func_ov088_0216ec78(void);
};

class ActorProfileUnkDMGM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkDMGM();
    ~ActorProfileUnkDMGM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMGM *GetProfile();
};
