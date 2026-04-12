//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTFAT_c4 : public Actor_c4 {
public:
    ActorUnkTFAT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

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
