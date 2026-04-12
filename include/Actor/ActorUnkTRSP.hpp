//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRSP_c4 : public Actor_c4 {
public:
    ActorUnkTRSP_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkTRSP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTRSP();

    /* 4C */ virtual ~ActorUnkTRSP() override;

    void func_ov026_0211af64(void);
    void func_ov026_0211af78(void);
    void func_ov026_0211afe4(void);
    void func_ov026_0211b038(void);
    void func_ov026_0211b0ac(void);
    void func_ov026_0211b0e8(void);
    void func_ov026_0211b158(void);
    void func_ov026_0211b18c(void);
    void func_ov026_0211b1c0(void);
    void func_ov026_0211bc94(void);
    void func_ov026_0211bd7c(void);
    void func_ov026_0211c4e8(void);
    void func_ov026_0211c5b4(void);
    void func_ov026_0211c63c(void);
    void func_ov026_0211c6cc(void);
    void func_ov026_0211c86c(void);
    void func_ov026_0211c924(void);
    void func_ov026_0211c964(void);
    void func_ov026_0211cbb4(void);
    void func_ov026_0211cc38(void);
    void func_ov026_0211ce14(void);
    void func_ov026_0211cf10(void);
    void func_ov026_0211cfb4(void);
    void func_ov026_0211cfcc(void);
    void func_ov026_0211cfd0(void);
    void func_ov026_0211cfd4(void);
    void func_ov026_0211d120(void);
    void func_ov026_0211d2b4(void);
    void func_ov026_0211d31c(void);
    void func_ov026_0211d358(void);
    void func_ov026_0211d434(void);
    void func_ov026_0211d508(void);
    void func_ov026_0211d944(void);
    void func_ov026_0211d994(void);
    void func_ov026_0211d9c4(void);
    void func_ov026_0211d9e4(void);
    void func_ov026_0211d9fc(void);
    void func_ov026_0211db80(void);
    void func_ov026_0211db9c(void);
};

class ActorProfileUnkTRSP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTRSP();
    ~ActorProfileUnkTRSP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTRSP *GetProfile();
};
