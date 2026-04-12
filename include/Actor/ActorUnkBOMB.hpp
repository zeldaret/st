//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBOMB_c4 : public Actor_c4 {
public:
    ActorUnkBOMB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBOMB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBOMB();

    /* 4C */ virtual ~ActorUnkBOMB() override;

    void func_ov031_020e1540(void);
    void func_ov031_020e15d0(void);
    void func_ov031_020e1634(void);
    void func_ov031_020e17f4(void);
    void func_ov031_020e1808(void);
    void func_ov031_020e181c(void);
    void func_ov031_020e18a0(void);
    void func_ov031_020e18c4(void);
    void func_ov031_020e1908(void);
    void func_ov031_020e1920(void);
    void func_ov031_020e193c(void);
    void func_ov031_020e1a28(void);
    void func_ov031_020e1af8(void);
    void func_ov031_020e1b1c(void);
    void func_ov031_020e1b7c(void);
    void func_ov031_020e1d18(void);
    void func_ov031_020e1d48(void);
    void func_ov031_020e1d58(void);
    void func_ov031_020e1d74(void);
    void func_ov031_020e1da0(void);
    void func_ov031_020e1ebc(void);
    void func_ov031_020e1ed8(void);
    void func_ov031_020e1f18(void);
    void func_ov031_020e1f88(void);
    void func_ov031_020e1fe0(void);
    void func_ov031_020e1fe4(void);
    void func_ov031_020e2034(void);
    void func_ov031_020e2064(void);
    void func_ov031_020e20d8(void);
    void func_ov031_020e20fc(void);
    void func_ov031_020e2100(void);
    void func_ov031_020e2134(void);
    void func_ov031_020e2220(void);
    void func_ov031_020e2234(void);
    void func_ov031_020e238c(void);
    void func_ov031_020e246c(void);
    void func_ov031_020e24ac(void);
    void func_ov031_020e25bc(void);
    void func_ov031_020e262c(void);
    void func_ov031_020e2680(void);
    void func_ov031_020e2780(void);
    void func_ov031_020e2820(void);
    void func_ov031_020e295c(void);
    void func_ov031_020e2a9c(void);
    void func_ov031_020e2b40(void);
    void func_ov031_020e2c2c(void);
    void func_ov031_020e2d78(void);
    void func_ov031_020e2df4(void);
    void func_ov031_020e2e3c(void);
    void func_ov031_020e328c(void);
    void func_ov031_020e3310(void);
    void func_ov031_020e3340(void);
    void func_ov031_020e337c(void);
    void func_ov031_020e33ac(void);
    void func_ov031_020e33c0(void);
    void func_ov031_020e33dc(void);
    void func_ov031_020e33f8(void);
    void func_ov031_020e3448(void);
};

class ActorProfileUnkBOMB : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkBOMB();
    ~ActorProfileUnkBOMB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBOMB *GetProfile();
};
