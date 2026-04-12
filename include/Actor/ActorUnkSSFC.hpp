//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSSFC_c4 : public Actor_c4 {
public:
    ActorUnkSSFC_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

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
