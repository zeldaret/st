//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBANI_c4 : public Actor_c4 {
public:
    ActorUnkBANI_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBANI : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBANI();

    /* 4C */ virtual ~ActorUnkBANI() override;

    void func_ov069_02158144(void);
    void func_ov069_02158158(void);
    void func_ov069_021581f4(void);
    void func_ov069_02158218(void);
    void func_ov069_021582d4(void);
    void func_ov069_021582fc(void);
    void func_ov069_02158324(void);
    void func_ov069_02158358(void);
    void func_ov069_021583e4(void);
    void func_ov069_02158638(void);
    void func_ov069_0215871c(void);
    void func_ov069_02158748(void);
    void func_ov069_021587a0(void);
    void func_ov069_02158d00(void);
    void func_ov069_02158d24(void);
    void func_ov069_02158d50(void);
    void func_ov069_02158d6c(void);
};

class ActorProfileUnkBANI : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBANI();
    ~ActorProfileUnkBANI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBANI *GetProfile();
};
