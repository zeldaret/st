//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRTT_c4 : public Actor_c4 {
public:
    ActorUnkTRTT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkTRTT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTRTT();

    /* 4C */ virtual ~ActorUnkTRTT() override;

    void func_ov026_021140ac(void);
    void func_ov026_02114184(void);
    void func_ov026_021141b4(void);
    void func_ov026_021141f8(void);
    void func_ov026_02114214(void);
    void func_ov026_021142e0(void);
    void func_ov026_021142f8(void);
    void func_ov026_021143f0(void);
    void func_ov026_021144b0(void);
    void func_ov026_021144f8(void);
    void func_ov026_02114654(void);
    void func_ov026_02114730(void);
    void func_ov026_021148ac(void);
    void func_ov026_02114a50(void);
    void func_ov026_02114c48(void);
    void func_ov026_02114cac(void);
    void func_ov026_02114d8c(void);
    void func_ov026_02114e90(void);
    void func_ov026_02115000(void);
    void func_ov026_02115120(void);
    void func_ov026_02115560(void);
    void func_ov026_02115698(void);
    void func_ov026_0211575c(void);
    void func_ov026_021157e0(void);
    void func_ov026_021159c4(void);
    void func_ov026_02115a34(void);
    void func_ov026_02115ad8(void);
    void func_ov026_02115c5c(void);
    void func_ov026_02115cec(void);
    void func_ov026_02115d90(void);
    void func_ov026_02115e00(void);
    void func_ov026_02115e94(void);
    void func_ov026_02115e9c(void);
    void func_ov026_02116024(void);
    void func_ov026_021160d8(void);
    void func_ov026_0211613c(void);
    void func_ov026_021161ec(void);
    void func_ov026_02116238(void);
    void func_ov026_02116324(void);
    void func_ov026_021163cc(void);
    void func_ov026_02116478(void);
    void func_ov026_021164a4(void);
    void func_ov026_021164f0(void);
    void func_ov026_0211650c(void);
    void func_ov026_02116530(void);
};

class ActorProfileUnkTRTT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTRTT();
    ~ActorProfileUnkTRTT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTRTT *GetProfile();
};
