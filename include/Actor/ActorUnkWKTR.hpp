//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWKTR_c4 : public Actor_c4 {
public:
    ActorUnkWKTR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkWKTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWKTR();

    /* 4C */ virtual ~ActorUnkWKTR() override;

    void func_ov030_0214dd58(void);
    void func_ov030_0214dee8(void);
    void func_ov030_0214df28(void);
    void func_ov030_0214df3c(void);
    void func_ov030_0214e0a0(void);
    void func_ov030_0214e0a8(void);
    void func_ov030_0214e14c(void);
    void func_ov030_0214e16c(void);
    void func_ov030_0214e18c(void);
    void func_ov030_0214e2d0(void);
    void func_ov030_0214e418(void);
    void func_ov030_0214e41c(void);
    void func_ov030_0214e5b8(void);
    void func_ov030_0214e634(void);
    void func_ov030_0214e664(void);
    void func_ov030_0214e690(void);
    void func_ov030_0214e8a8(void);
    void func_ov030_0214ed90(void);
    void func_ov030_0214edf8(void);
    void func_ov030_0214eef0(void);
    void func_ov030_0214f180(void);
    void func_ov030_0214f3b0(void);
    void func_ov030_0214f49c(void);
    void func_ov030_0214f4b0(void);
    void func_ov030_0214f4b4(void);
    void func_ov030_0214f4f0(void);
    void func_ov030_0214f598(void);
    void func_ov030_0214f5d4(void);
    void func_ov030_0214f678(void);
    void func_ov030_0214f6b4(void);
    void func_ov030_0214f6c0(void);
    void func_ov030_0214f708(void);
    void func_ov030_0214f7e0(void);
    void func_ov030_0214f8d0(void);
    void func_ov030_0214f98c(void);
    void func_ov030_0214f9d0(void);
    void func_ov030_0214fa7c(void);
    void func_ov030_0214fad8(void);
    void func_ov030_0214fb94(void);
    void func_ov030_0214fbd8(void);
    void func_ov030_0214fc84(void);
    void func_ov030_0214fcb0(void);
    void func_ov030_0214fdd8(void);
    void func_ov030_0214ff40(void);
    void func_ov030_0214ffe8(void);
    void func_ov030_02150110(void);
    void func_ov030_02150214(void);
    void func_ov030_02150258(void);
    void func_ov030_02150388(void);
    void func_ov030_021503c4(void);
    void func_ov030_02150554(void);
    void func_ov030_02150578(void);
    void func_ov030_02150588(void);
    void func_ov030_02150590(void);
};

class ActorProfileUnkWKTR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWKTR();
    ~ActorProfileUnkWKTR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWKTR *GetProfile();
};
