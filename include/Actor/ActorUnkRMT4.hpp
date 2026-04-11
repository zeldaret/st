//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMT4 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMT4();

    /* 4C */ virtual ~ActorUnkRMT4() override;

    void func_ov061_021584f4(void);
};

class ActorProfileUnkRMT4 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMT4();
    ~ActorProfileUnkRMT4();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMT4 *GetProfile();
};
