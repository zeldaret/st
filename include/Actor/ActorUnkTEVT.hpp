//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTEVT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTEVT();

    /* 4C */ virtual ~ActorUnkTEVT() override;

    void func_ov092_02177df8(void);
    void func_ov092_02177fb4(void);
    void func_ov092_02178050(void);
    void func_ov092_02178054(void);
    void func_ov092_02178488(void);
    void func_ov092_02178498(void);
};

class ActorProfileUnkTEVT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTEVT();
    ~ActorProfileUnkTEVT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTEVT *GetProfile();
};
