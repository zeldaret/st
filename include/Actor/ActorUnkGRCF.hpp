//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGRCF : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGRCF();

    /* 4C */ virtual ~ActorUnkGRCF() override;

    void func_ov038_0211ecdc(void);
    void func_ov038_0211ed38(void);
};

class ActorProfileUnkGRCF : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkGRCF();
    ~ActorProfileUnkGRCF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGRCF *GetProfile();
};
