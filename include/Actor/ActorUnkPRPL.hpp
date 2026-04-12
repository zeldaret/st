//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPRPL_c4 : public Actor_c4 {
public:
    ActorUnkPRPL_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkPRPL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPRPL();

    /* 4C */ virtual ~ActorUnkPRPL() override;

    void func_ov081_02150c74(void);
    void func_ov081_02150d9c(void);
    void func_ov081_02150e6c(void);
    void func_ov081_02150ea8(void);
    void func_ov081_02150ee4(void);
    void func_ov081_02150f20(void);
    void func_ov081_02150f5c(void);
    void func_ov081_02150f98(void);
    void func_ov081_02150fd0(void);
    void func_ov081_021510e4(void);
    void func_ov081_02151128(void);
    void func_ov081_02151170(void);
    void func_ov081_02151304(void);
    void func_ov081_02151348(void);
    void func_ov081_02151370(void);
    void func_ov081_02151398(void);
    void func_ov081_02151448(void);
    void func_ov081_02151490(void);
    void func_ov081_02151494(void);
    void func_ov081_021514d8(void);
    void func_ov081_02151554(void);
    void func_ov081_021515b0(void);
    void func_ov081_02151780(void);
    void func_ov081_021517f8(void);
    void func_ov081_02151834(void);
    void func_ov081_02151944(void);
    void func_ov081_02151988(void);
    void func_ov081_021519e4(void);
    void func_ov081_021519f4(void);
    void func_ov081_02151a04(void);
    void func_ov081_02151a24(void);
};

class ActorProfileUnkPRPL : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkPRPL();
    ~ActorProfileUnkPRPL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPRPL *GetProfile();
};
