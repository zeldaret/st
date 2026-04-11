//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkATTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkATTG();

    /* 4C */ virtual ~ActorUnkATTG() override;

    void func_ov031_020f3dfc(void);
    void func_ov031_020f3e50(void);
    void func_ov031_020f3eac(void);
    void func_ov031_020f3eec(void);
    void func_ov031_020f4014(void);
};

class ActorProfileUnkATTG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkATTG();
    ~ActorProfileUnkATTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkATTG *GetProfile();
};
