//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFLEN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFLEN();

    /* 4C */ virtual ~ActorUnkFLEN() override;

    void func_ov031_020f80b8(void);
    void func_ov031_020f8118(void);
    void func_ov031_020f81b4(void);
    void func_ov031_020f81f8(void);
};

class ActorProfileUnkFLEN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFLEN();
    ~ActorProfileUnkFLEN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFLEN *GetProfile();
};
