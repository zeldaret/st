//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRCHU_c4 : public Actor_c4 {
public:
    ActorUnkRCHU_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRCHU : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRCHU();

    /* 4C */ virtual ~ActorUnkRCHU() override;

    void func_ov055_0213b330(void);
    void func_ov055_0213b444(void);
    void func_ov055_0213b4a0(void);
    void func_ov055_0213b538(void);
    void func_ov055_0213b570(void);
    void func_ov055_0213b614(void);
    void func_ov055_0213b644(void);
    void func_ov055_0213b67c(void);
    void func_ov055_0213b6b4(void);
    void func_ov055_0213b740(void);
    void func_ov055_0213b7bc(void);
    void func_ov055_0213b894(void);
    void func_ov055_0213b8a4(void);
    void func_ov055_0213b920(void);
    void func_ov055_0213b9d8(void);
    void func_ov055_0213b9e8(void);
    void func_ov055_0213b9ec(void);
    void func_ov055_0213ba0c(void);
    void func_ov055_0213baa0(void);
    void func_ov055_0213bb58(void);
    void func_ov055_0213bc50(void);
    void func_ov055_0213bc7c(void);
    void func_ov055_0213bd18(void);
    void func_ov055_0213bd70(void);
    void func_ov055_0213bda0(void);
    void func_ov055_0213bdb4(void);
    void func_ov055_0213bdd0(void);
    void func_ov055_0213be10(void);
    void func_ov055_0213be4c(void);
};

class ActorProfileUnkRCHU : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkRCHU();
    ~ActorProfileUnkRCHU();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRCHU *GetProfile();
};
