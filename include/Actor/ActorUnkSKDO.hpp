//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSKDO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSKDO();

    /* 4C */ virtual ~ActorUnkSKDO() override;

    void func_ov031_02106de0(void);
    void func_ov031_02106de8(void);
    void func_ov031_02106e58(void);
    void func_ov031_02106e90(void);
    void func_ov031_02106e98(void);
};

class ActorProfileUnkSKDO : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSKDO();
    ~ActorProfileUnkSKDO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSKDO *GetProfile();
};
