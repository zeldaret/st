//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLOCK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkLOCK();

    /* 4C */ virtual ~ActorUnkLOCK() override;

    void func_ov094_02166128(void);
    void func_ov094_0216613c(void);
    void func_ov094_02166144(void);
    void func_ov094_02166150(void);
    void func_ov094_02166154(void);
};

class ActorProfileUnkLOCK : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkLOCK();
    ~ActorProfileUnkLOCK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkLOCK *GetProfile();
};
