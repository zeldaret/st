//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBAPH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBAPH();

    /* 4C */ virtual ~ActorUnkBAPH() override;

    void func_ov021_020ec168(void);
    void func_ov021_020ec228(void);
    void func_ov021_020ec25c(void);
    void func_ov021_020ec3f4(void);
    void func_ov021_020ec58c(void);
    void func_ov021_020ec5c0(void);
    void func_ov021_020ec9a4(void);
    void func_ov021_020ecb78(void);
    void func_ov021_020ecc48(void);
    void func_ov021_020ecc58(void);
    void func_ov021_020ecc80(void);
    void func_ov021_020eccd0(void);
    void func_ov021_020ed044(void);
    void func_ov021_020ed058(void);
    void func_ov021_020ed06c(void);
    void func_ov021_020ed080(void);
    void func_ov021_020ed0a4(void);
    void func_ov021_020ed0f4(void);
    void func_ov021_020ed3cc(void);
    void func_ov021_020ed4a4(void);
    void func_ov021_020ed684(void);
    void func_ov021_020ed83c(void);
    void func_ov021_020ed8a4(void);
    void func_ov021_020ed950(void);
    void func_ov021_020ed9f4(void);
    void func_ov021_020eda68(void);
    void func_ov021_020edc8c(void);
    void func_ov021_020eddb4(void);
    void func_ov021_020ee12c(void);
    void func_ov021_020ee1d4(void);
    void func_ov021_020ee910(void);
    void func_ov021_020ee9c0(void);
    void func_ov021_020eea50(void);
    void func_ov021_020eeacc(void);
    void func_ov021_020eeb44(void);
    void func_ov021_020eebcc(void);
    void func_ov021_020eed94(void);
    void func_ov021_020eee00(void);
    void func_ov021_020eeecc(void);
    void func_ov021_020eef48(void);
    void func_ov021_020eefd8(void);
    void func_ov021_020eeff4(void);
    void func_ov021_020ef140(void);
    void func_ov021_020ef1b8(void);
    void func_ov021_020ef1f8(void);
    void func_ov021_020ef29c(void);
    void func_ov021_020ef40c(void);
    void func_ov021_020ef484(void);
    void func_ov021_020ef488(void);
    void func_ov021_020ef538(void);
    void func_ov021_020ef5a0(void);
    void func_ov021_020ef5e8(void);
    void func_ov021_020ef738(void);
    void func_ov021_020ef828(void);
    void func_ov021_020ef83c(void);
    void func_ov021_020efb0c(void);
    void func_ov021_020efc5c(void);
    void func_ov021_020efd00(void);
    void func_ov021_020efd34(void);
    void func_ov021_020efdb4(void);
    void func_ov021_020efdd4(void);
    void func_ov021_020efe08(void);
    void func_ov021_020efe34(void);
    void func_ov021_020effec(void);
    void func_ov021_020f00c0(void);
    void func_ov021_020f00d8(void);
    void func_ov021_020f010c(void);
    void func_ov021_020f012c(void);
    void func_ov021_020f0150(void);
    void func_ov021_020f017c(void);
    void func_ov021_020f01a4(void);
    void func_ov021_020f01c0(void);
    void func_ov021_020f01dc(void);
    void func_ov021_020f0264(void);
};

class ActorProfileUnkBAPH : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBAPH();
    ~ActorProfileUnkBAPH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBAPH *GetProfile();
};
