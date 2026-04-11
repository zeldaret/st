//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSPTT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSPTT();

    /* 4C */ virtual ~ActorUnkSPTT() override;

    void func_ov093_02176c70(void);
    void func_ov093_02176e18(void);
    void func_ov093_02176ea4(void);
    void func_ov093_02176ef8(void);
    void func_ov093_02176fa8(void);
};

class ActorProfileUnkSPTT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSPTT();
    ~ActorProfileUnkSPTT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSPTT *GetProfile();
};
