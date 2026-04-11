//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBLST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBLST();

    /* 4C */ virtual ~ActorUnkBLST() override;

    void func_ov031_020e351c(void);
    void func_ov031_020e373c(void);
    void func_ov031_020e3750(void);
    void func_ov031_020e39c4(void);
    void func_ov031_020e3b44(void);
    void func_ov031_020e3b94(void);
    void func_ov031_020e3b9c(void);
    void func_ov031_020e3c60(void);
};

class ActorProfileUnkBLST : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkBLST();
    ~ActorProfileUnkBLST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBLST *GetProfile();
};
