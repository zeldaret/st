//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkASYU : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkASYU();

    /* 4C */ virtual ~ActorUnkASYU() override;

    void func_ov077_02152f84(void);
    void func_ov077_021531bc(void);
    void func_ov077_021531d0(void);
    void func_ov077_021531e4(void);
    void func_ov077_021531f8(void);
    void func_ov077_02153358(void);
    void func_ov077_021534cc(void);
    void func_ov077_0215358c(void);
    void func_ov077_021535d0(void);
    void func_ov077_021539d0(void);
    void func_ov077_02153a1c(void);
    void func_ov077_02153bb0(void);
    void func_ov077_02153d58(void);
    void func_ov077_02153ebc(void);
    void func_ov077_02153fac(void);
    void func_ov077_02154110(void);
    void func_ov077_02154284(void);
    void func_ov077_021545a0(void);
    void func_ov077_02154728(void);
    void func_ov077_02154abc(void);
    void func_ov077_02154b28(void);
    void func_ov077_02154b70(void);
    void func_ov077_02154c00(void);
    void func_ov077_02154f34(void);
    void func_ov077_02155058(void);
    void func_ov077_0215521c(void);
    void func_ov077_02155298(void);
    void func_ov077_02155364(void);
    void func_ov077_02155374(void);
    void func_ov077_02155518(void);
    void func_ov077_02155584(void);
    void func_ov077_02155b98(void);
    void func_ov077_02155c10(void);
    void func_ov077_02155e44(void);
    void func_ov077_02155ed4(void);
    void func_ov077_02155f10(void);
    void func_ov077_02156074(void);
    void func_ov077_0215609c(void);
    void func_ov077_02156134(void);
    void func_ov077_02156190(void);
    void func_ov077_02156208(void);
    void func_ov077_0215629c(void);
    void func_ov077_021562bc(void);
    void func_ov077_021562e4(void);
    void func_ov077_021563c4(void);
    void func_ov077_0215667c(void);
    void func_ov077_021566fc(void);
    void func_ov077_021567c8(void);
    void func_ov077_021568e4(void);
    void func_ov077_021568f8(void);
    void func_ov077_02156970(void);
    void func_ov077_0215698c(void);
    void func_ov077_021569cc(void);
    void func_ov077_02156a0c(void);
    void func_ov077_02156ab0(void);
    void func_ov077_02156b48(void);
    void func_ov077_02156c88(void);
    void func_ov077_02156cb4(void);
    void func_ov077_02156db8(void);
    void func_ov077_02156e64(void);
    void func_ov077_02156e94(void);
    void func_ov077_02156eb8(void);
    void func_ov077_02156edc(void);
    void func_ov077_02156f08(void);
    void func_ov077_02156f14(void);
    void func_ov077_02156f30(void);
    void func_ov077_02156f4c(void);
};

class ActorProfileUnkASYU : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkASYU();
    ~ActorProfileUnkASYU();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkASYU *GetProfile();
};
