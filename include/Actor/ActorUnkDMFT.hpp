//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMFT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMFT();

    /* 4C */ virtual ~ActorUnkDMFT() override;

    void func_ov067_0215a184(void);
    void func_ov067_0215a1d0(void);
    void func_ov067_0215a218(void);
    void func_ov067_0215a22c(void);
    void func_ov067_0215a2b0(void);
    void func_ov067_0215a324(void);
    void func_ov067_0215a328(void);
    void func_ov067_0215a3b4(void);
    void func_ov067_0215a428(void);
    void func_ov067_0215a4e0(void);
    void func_ov067_0215a54c(void);
    void func_ov067_0215a614(void);
    void func_ov067_0215a64c(void);
    void func_ov067_0215a6fc(void);
    void func_ov067_0215a7ac(void);
    void func_ov067_0215a7dc(void);
    void func_ov067_0215a828(void);
    void func_ov067_0215a87c(void);
    void func_ov067_0215aab4(void);
};

class ActorProfileUnkDMFT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkDMFT();
    ~ActorProfileUnkDMFT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMFT *GetProfile();
};
