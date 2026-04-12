//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCHUC_c4 : public Actor_c4 {
public:
    ActorUnkCHUC_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkCHUC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCHUC();

    /* 4C */ virtual ~ActorUnkCHUC() override;

    void func_ov055_021399a4(void);
    void func_ov055_021399b8(void);
    void func_ov055_021399cc(void);
    void func_ov055_02139aa4(void);
    void func_ov055_02139ac8(void);
    void func_ov055_02139b70(void);
    void func_ov055_02139b8c(void);
    void func_ov055_02139bc4(void);
    void func_ov055_02139eb4(void);
    void func_ov055_02139f28(void);
    void func_ov055_02139f60(void);
    void func_ov055_02139f9c(void);
    void func_ov055_0213a08c(void);
    void func_ov055_0213a0d0(void);
    void func_ov055_0213a194(void);
    void func_ov055_0213a240(void);
    void func_ov055_0213a254(void);
    void func_ov055_0213a2a0(void);
    void func_ov055_0213a364(void);
    void func_ov055_0213a3a4(void);
    void func_ov055_0213a3e0(void);
    void func_ov055_0213a3fc(void);
    void func_ov055_0213a418(void);
    void func_ov055_0213a434(void);
    void func_ov055_0213a4cc(void);
    void func_ov055_0213a724(void);
    void func_ov055_0213a7a0(void);
    void func_ov055_0213a88c(void);
    void func_ov055_0213a8f0(void);
    void func_ov055_0213a938(void);
    void func_ov055_0213a964(void);
    void func_ov055_0213a984(void);
    void func_ov055_0213a9dc(void);
    void func_ov055_0213aa4c(void);
    void func_ov055_0213aa8c(void);
    void func_ov055_0213aaac(void);
    void func_ov055_0213aca8(void);
    void func_ov055_0213ae38(void);
    void func_ov055_0213ae54(void);
    void func_ov055_0213ae98(void);
    void func_ov055_0213af04(void);
    void func_ov055_0213af70(void);
    void func_ov055_0213b03c(void);
    void func_ov055_0213b06c(void);
    void func_ov055_0213b09c(void);
    void func_ov055_0213b0d0(void);
    void func_ov055_0213b17c(void);
    void func_ov055_0213b228(void);
    void func_ov055_0213b24c(void);
    void func_ov055_0213b25c(void);
    void func_ov055_0213b264(void);
    void func_ov055_0213b278(void);
};

class ActorProfileUnkCHUC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCHUC();
    ~ActorProfileUnkCHUC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCHUC *GetProfile();
};
