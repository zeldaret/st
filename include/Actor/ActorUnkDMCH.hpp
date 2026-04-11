//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMCH();

    /* 4C */ virtual ~ActorUnkDMCH() override;

    void func_ov088_0216a5c8(void);
    void func_ov088_0216a850(void);
    void func_ov088_0216a9d0(void);
    void func_ov088_0216ab70(void);
    void func_ov088_0216abf8(void);
    void func_ov088_0216af84(void);
    void func_ov088_0216b184(void);
    void func_ov088_0216b220(void);
    void func_ov088_0216b460(void);
    void func_ov088_0216b6f4(void);
    void func_ov088_0216b7b8(void);
    void func_ov088_0216b7d4(void);
    void func_ov088_0216b800(void);
    void func_ov088_0216b834(void);
    void func_ov088_0216b87c(void);
    void func_ov088_0216ba2c(void);
    void func_ov088_0216bbd8(void);
    void func_ov088_0216bbdc(void);
    void func_ov088_0216bbe8(void);
    void func_ov088_0216bc50(void);
    void func_ov088_0216bd44(void);
    void func_ov088_0216be08(void);
    void func_ov088_0216becc(void);
    void func_ov088_0216bf7c(void);
    void func_ov088_0216bfec(void);
    void func_ov088_0216c1f4(void);
    void func_ov088_0216c244(void);
    void func_ov088_0216c294(void);
    void func_ov088_0216c2a8(void);
    void func_ov088_0216c2d4(void);
    void func_ov088_0216c2ec(void);
    void func_ov088_0216c300(void);
    void func_ov088_0216c340(void);
};

class ActorProfileUnkDMCH : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkDMCH();
    ~ActorProfileUnkDMCH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMCH *GetProfile();
};
