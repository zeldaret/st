//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTLKT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTLKT();

    /* 4C */ virtual ~ActorUnkTLKT() override;

    void func_ov031_020e41ec(void);
    void func_ov031_020e4238(void);
    void func_ov031_020e4274(void);
    void func_ov031_020e42ac(void);
    void func_ov031_020e42f0(void);
    void func_ov031_020e4320(void);
    void func_ov031_020e4514(void);
};

class ActorProfileUnkTLKT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTLKT();
    ~ActorProfileUnkTLKT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTLKT *GetProfile();
};
