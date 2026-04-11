//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSTCT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSTCT();

    /* 4C */ virtual ~ActorUnkSTCT() override;

    void func_ov091_02169ea8(void);
    void func_ov091_02169eec(void);
};

class ActorProfileUnkSTCT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSTCT();
    ~ActorProfileUnkSTCT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSTCT *GetProfile();
};
