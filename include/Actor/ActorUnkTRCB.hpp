//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRCB_c4 : public Actor_c4 {
public:
    ActorUnkTRCB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkTRCB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTRCB();

    /* 4C */ virtual ~ActorUnkTRCB() override;

    void func_ov026_02110388(void);
    void func_ov026_021103ac(void);
    void func_ov026_021103cc(void);
    void func_ov026_02110414(void);
    void func_ov026_021104c0(void);
    void func_ov026_02110514(void);
    void func_ov026_0211059c(void);
    void func_ov026_021105a0(void);
    void func_ov026_021105a4(void);
    void func_ov026_021105b8(void);
    void func_ov026_021105f4(void);
    void func_ov026_02110624(void);
    void func_ov026_02110660(void);
    void func_ov026_021107d0(void);
    void func_ov026_021108ec(void);
    void func_ov026_021109d4(void);
};

class ActorProfileUnkTRCB : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTRCB();
    ~ActorProfileUnkTRCB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTRCB *GetProfile();
};
