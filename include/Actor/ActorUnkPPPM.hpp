//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPPPM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPPPM();

    /* 4C */ virtual ~ActorUnkPPPM() override;

    void func_ov074_0215eb54(void);
    void func_ov074_0215ec04(void);
    void func_ov074_0215ec78(void);
    void func_ov074_0215ecc0(void);
    void func_ov074_0215ed00(void);
    void func_ov074_0215eec0(void);
    void func_ov074_0215ef20(void);
    void func_ov074_0215f188(void);
    void func_ov074_0215f1b8(void);
    void func_ov074_0215f1bc(void);
    void func_ov074_0215f288(void);
    void func_ov074_0215f434(void);
    void func_ov074_0215f580(void);
    void func_ov074_0215f5e0(void);
    void func_ov074_0215f868(void);
    void func_ov074_0215f8b4(void);
    void func_ov074_0215f8ec(void);
    void func_ov074_0215f92c(void);
    void func_ov074_0215f974(void);
    void func_ov074_0215f9bc(void);
    void func_ov074_0215fad0(void);
    void func_ov074_0215fc00(void);
    void func_ov074_0215fdc0(void);
    void func_ov074_0215fe08(void);
    void func_ov074_0215ff20(void);
    void func_ov074_0215ffa4(void);
    void func_ov074_02160078(void);
    void func_ov074_021601d0(void);
    void func_ov074_02160250(void);
    void func_ov074_02160348(void);
    void func_ov074_021603c0(void);
    void func_ov074_021603d0(void);
    void func_ov074_021604b4(void);
    void func_ov074_02160db4(void);
    void func_ov074_02160e54(void);
    void func_ov074_02160ecc(void);
    void func_ov074_02160f6c(void);
    void func_ov074_02160fec(void);
    void func_ov074_02161324(void);
    void func_ov074_02161474(void);
    void func_ov074_021617bc(void);
    void func_ov074_0216183c(void);
    void func_ov074_02161860(void);
    void func_ov074_02161910(void);
    void func_ov074_02161928(void);
    void func_ov074_0216194c(void);
    void func_ov074_02161968(void);
    void func_ov074_02161984(void);
    void func_ov074_021619a0(void);
    void func_ov074_021619c4(void);
    void func_ov074_021619e8(void);
    void func_ov074_02161a0c(void);
    void func_ov074_02161ac8(void);
    void func_ov074_02161be8(void);
};

class ActorProfileUnkPPPM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPPPM();
    ~ActorProfileUnkPPPM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPPPM *GetProfile();
};
