//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBBH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFBBH();

    /* 4C */ virtual ~ActorUnkFBBH() override;

    void func_ov054_021387b4(void);
    void func_ov054_021387c8(void);
    void func_ov054_021387fc(void);
    void func_ov054_02138854(void);
    void func_ov054_02138878(void);
    void func_ov054_021388c4(void);
    void func_ov054_021388e0(void);
    void func_ov054_021389c8(void);
    void func_ov054_02138adc(void);
    void func_ov054_02138b14(void);
    void func_ov054_02138b74(void);
    void func_ov054_02138c0c(void);
    void func_ov054_02138ca4(void);
    void func_ov054_02138e5c(void);
    void func_ov054_02138e74(void);
    void func_ov054_02138fc0(void);
    void func_ov054_0213919c(void);
    void func_ov054_0213929c(void);
    void func_ov054_021392ec(void);
    void func_ov054_02139488(void);
    void func_ov054_021394f4(void);
    void func_ov054_02139628(void);
    void func_ov054_02139658(void);
    void func_ov054_021396dc(void);
    void func_ov054_0213970c(void);
    void func_ov054_0213977c(void);
    void func_ov054_021397f0(void);
    void func_ov054_02139940(void);
    void func_ov054_021399b0(void);
    void func_ov054_02139a00(void);
    void func_ov054_02139a70(void);
    void func_ov054_02139ac0(void);
    void func_ov054_02139b3c(void);
    void func_ov054_02139b68(void);
    void func_ov054_02139bd4(void);
    void func_ov054_02139c0c(void);
    void func_ov054_02139c7c(void);
    void func_ov054_02139e04(void);
    void func_ov054_02139e78(void);
    void func_ov054_02139f28(void);
    void func_ov054_02139f9c(void);
    void func_ov054_0213a198(void);
    void func_ov054_0213a210(void);
    void func_ov054_0213a260(void);
    void func_ov054_0213a2e4(void);
    void func_ov054_0213a49c(void);
    void func_ov054_0213a4bc(void);
    void func_ov054_0213a56c(void);
    void func_ov054_0213a640(void);
    void func_ov054_0213a684(void);
    void func_ov054_0213a70c(void);
    void func_ov054_0213a800(void);
    void func_ov054_0213a87c(void);
    void func_ov054_0213ac68(void);
    void func_ov054_0213acf8(void);
    void func_ov054_0213aeb0(void);
    void func_ov054_0213b0f0(void);
    void func_ov054_0213b170(void);
    void func_ov054_0213b1f4(void);
    void func_ov054_0213b408(void);
    void func_ov054_0213b428(void);
    void func_ov054_0213b498(void);
    void func_ov054_0213b4d4(void);
    void func_ov054_0213b55c(void);
    void func_ov054_0213bc30(void);
    void func_ov054_0213bcc8(void);
    void func_ov054_0213bda4(void);
    void func_ov054_0213be2c(void);
    void func_ov054_0213bf0c(void);
    void func_ov054_0213bf24(void);
    void func_ov054_0213bfbc(void);
    void func_ov054_0213c09c(void);
    void func_ov054_0213c0c0(void);
    void func_ov054_0213c108(void);
    void func_ov054_0213c184(void);
};

class ActorProfileUnkFBBH : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFBBH();
    ~ActorProfileUnkFBBH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFBBH *GetProfile();
};
