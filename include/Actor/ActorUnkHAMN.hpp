//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkHAMN_c4 : public Actor_c4 {
public:
    ActorUnkHAMN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkHAMN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkHAMN();

    /* 4C */ virtual ~ActorUnkHAMN() override;

    void func_ov086_021545f0(void);
    void func_ov086_02154640(void);
    void func_ov086_021546b8(void);
    void func_ov086_021546f4(void);
    void func_ov086_02154714(void);
    void func_ov086_02154744(void);
    void func_ov086_02154a90(void);
    void func_ov086_02154aa4(void);
    void func_ov086_02154ab8(void);
    void func_ov086_02154acc(void);
    void func_ov086_02154ae0(void);
    void func_ov086_02154b9c(void);
    void func_ov086_02154c98(void);
    void func_ov086_02154cd0(void);
    void func_ov086_02154d28(void);
    void func_ov086_02155058(void);
    void func_ov086_021550d8(void);
    void func_ov086_02155124(void);
    void func_ov086_02155238(void);
    void func_ov086_021552e8(void);
    void func_ov086_0215534c(void);
    void func_ov086_02155414(void);
    void func_ov086_02155490(void);
    void func_ov086_021554d8(void);
    void func_ov086_0215556c(void);
    void func_ov086_021555fc(void);
    void func_ov086_02155630(void);
    void func_ov086_021556f8(void);
    void func_ov086_021557fc(void);
    void func_ov086_02155884(void);
    void func_ov086_021558d0(void);
    void func_ov086_0215593c(void);
    void func_ov086_02155b2c(void);
    void func_ov086_02155bcc(void);
    void func_ov086_02155c40(void);
    void func_ov086_02155cb4(void);
    void func_ov086_02155ce8(void);
    void func_ov086_02155d5c(void);
    void func_ov086_02155d90(void);
    void func_ov086_02155eec(void);
    void func_ov086_02156014(void);
    void func_ov086_021560b0(void);
    void func_ov086_021560e4(void);
    void func_ov086_021561e8(void);
    void func_ov086_021562cc(void);
    void func_ov086_02156368(void);
    void func_ov086_02156394(void);
    void func_ov086_021563ec(void);
    void func_ov086_02156474(void);
    void func_ov086_02156498(void);
    void func_ov086_021565ec(void);
    void func_ov086_02156764(void);
    void func_ov086_021568fc(void);
    void func_ov086_02156a38(void);
    void func_ov086_02156a80(void);
    void func_ov086_02156b0c(void);
    void func_ov086_02156ba0(void);
    void func_ov086_02156c40(void);
    void func_ov086_02156c88(void);
    void func_ov086_02156cf4(void);
    void func_ov086_02156e04(void);
    void func_ov086_02156e18(void);
    void func_ov086_02156f04(void);
    void func_ov086_02157818(void);
    void func_ov086_021578e4(void);
    void func_ov086_02157910(void);
    void func_ov086_02157978(void);
    void func_ov086_021579a8(void);
    void func_ov086_021579e8(void);
    void func_ov086_02157a34(void);
    void func_ov086_02157ab4(void);
    void func_ov086_02157b34(void);
    void func_ov086_02157b94(void);
    void func_ov086_02157bb4(void);
    void func_ov086_02157bcc(void);
    void func_ov086_02157bd8(void);
    void func_ov086_02157c1c(void);
    void func_ov086_02157d30(void);
    void func_ov086_02157de8(void);
    void func_ov086_02157e90(void);
    void func_ov086_02157f44(void);
    void func_ov086_02157f68(void);
    void func_ov086_02157f78(void);
    void func_ov086_02157f80(void);
    void func_ov086_02157fa4(void);
    void func_ov086_02157fd0(void);
    void func_ov086_02157fec(void);
    void func_ov086_02158008(void);
    void func_ov086_02158024(void);
    void func_ov086_02158040(void);
};

class ActorProfileUnkHAMN : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkHAMN();
    ~ActorProfileUnkHAMN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkHAMN *GetProfile();
};
