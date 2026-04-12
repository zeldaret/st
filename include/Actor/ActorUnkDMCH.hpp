//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMCH_c4 : public Actor_c4 {
public:
    ActorUnkDMCH_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

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
