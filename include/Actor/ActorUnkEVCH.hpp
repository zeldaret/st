//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEVCH_c4 : public Actor_c4 {
public:
    ActorUnkEVCH_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

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
