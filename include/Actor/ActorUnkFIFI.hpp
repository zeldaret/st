//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFIFI : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFIFI();

    /* 4C */ virtual ~ActorUnkFIFI() override;

    void func_ov035_0211e5d8(void);
    void func_ov035_0211e6d0(void);
};

class ActorProfileUnkFIFI : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFIFI();
    ~ActorProfileUnkFIFI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFIFI *GetProfile();
};
