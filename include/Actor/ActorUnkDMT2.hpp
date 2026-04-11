//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMT2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMT2();

    /* 4C */ virtual ~ActorUnkDMT2() override;

    void func_ov088_0216cd80(void);
    void func_ov088_0216cd90(void);
    void func_ov088_0216cf4c(void);
    void func_ov088_0216cf50(void);
};

class ActorProfileUnkDMT2 : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkDMT2();
    ~ActorProfileUnkDMT2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMT2 *GetProfile();
};
