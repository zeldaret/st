//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPRPP_c4 : public Actor_c4 {
public:
    ActorUnkPRPP_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkPRPP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPRPP();

    /* 4C */ virtual ~ActorUnkPRPP() override;

    void func_ov081_02151b1c(void);
    void func_ov081_02151b54(void);
    void func_ov081_02151b98(void);
    void func_ov081_02151c28(void);
    void func_ov081_02151c3c(void);
    void func_ov081_02151c74(void);
    void func_ov081_02151cb0(void);
    void func_ov081_02151d64(void);
    void func_ov081_02151dd8(void);
    void func_ov081_02151e10(void);
    void func_ov081_02151ed8(void);
    void func_ov081_02151f50(void);
    void func_ov081_02151f7c(void);
    void func_ov081_02151fa4(void);
};

class ActorProfileUnkPRPP : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkPRPP();
    ~ActorProfileUnkPRPP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPRPP *GetProfile();
};
