//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSSFC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSSFC();

    /* 4C */ virtual ~ActorUnkSSFC() override;

    void func_ov079_02152be8(void);
    void func_ov079_02152ccc(void);
    void func_ov079_02152e00(void);
    void func_ov079_02152e4c(void);
    void func_ov079_02152ed4(void);
};

class ActorProfileUnkSSFC : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSSFC();
    ~ActorProfileUnkSSFC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSSFC *GetProfile();
};
