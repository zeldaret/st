//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkENGE : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkENGE();

    /* 4C */ virtual ~ActorUnkENGE() override;

    void func_ov070_0213f3e4(void);
    void func_ov070_0213f430(void);
    void func_ov070_0213f508(void);
    void func_ov070_0213f548(void);
    void func_ov070_0213f65c(void);
};

class ActorProfileUnkENGE : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkENGE();
    ~ActorProfileUnkENGE();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkENGE *GetProfile();
};
