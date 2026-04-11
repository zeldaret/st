//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEVCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEVCH();

    /* 4C */ virtual ~ActorUnkEVCH() override;

    void func_ov047_02135224(void);
    void func_ov047_0213522c(void);
    void func_ov047_02135268(void);
    void func_ov047_021352e4(void);
    void func_ov047_021352f8(void);
};

class ActorProfileUnkEVCH : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkEVCH();
    ~ActorProfileUnkEVCH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEVCH *GetProfile();
};
