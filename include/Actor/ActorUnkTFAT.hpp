//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTFAT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTFAT();

    /* 4C */ virtual ~ActorUnkTFAT() override;

    void func_ov026_02116668(void);
    void func_ov026_0211667c(void);
    void func_ov026_02116680(void);
    void func_ov026_0211670c(void);
    void func_ov026_02116720(void);
    void func_ov026_02116728(void);
};

class ActorProfileUnkTFAT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTFAT();
    ~ActorProfileUnkTFAT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTFAT *GetProfile();
};
