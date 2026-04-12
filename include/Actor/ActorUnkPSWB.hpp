//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPSWB_c4 : public Actor_c4 {
public:
    ActorUnkPSWB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkPSWB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPSWB();

    /* 4C */ virtual ~ActorUnkPSWB() override;

    void func_ov094_02166454(void);
    void func_ov094_02166680(void);
    void func_ov094_02166694(void);
    void func_ov094_021666ec(void);
    void func_ov094_0216674c(void);
    void func_ov094_02166890(void);
    void func_ov094_021668cc(void);
    void func_ov094_021668e0(void);
    void func_ov094_02166924(void);
    void func_ov094_02166bb4(void);
    void func_ov094_02166bcc(void);
    void func_ov094_02166c10(void);
    void func_ov094_02166c2c(void);
    void func_ov094_02166c88(void);
    void func_ov094_02166e10(void);
    void func_ov094_02166e60(void);
    void func_ov094_02166f94(void);
    void func_ov094_02167024(void);
    void func_ov094_02167224(void);
    void func_ov094_0216723c(void);
    void func_ov094_02167518(void);
    void func_ov094_021675ac(void);
    void func_ov094_02167614(void);
    void func_ov094_02167688(void);
    void func_ov094_021676f0(void);
    void func_ov094_021676f4(void);
    void func_ov094_02167794(void);
    void func_ov094_0216781c(void);
    void func_ov094_0216783c(void);
    void func_ov094_02167844(void);
    void func_ov094_0216784c(void);
    void func_ov094_02167aac(void);
    void func_ov094_02167ab8(void);
    void func_ov094_02167b24(void);
    void func_ov094_02167b64(void);
    void func_ov094_02167bf0(void);
    void func_ov094_02167c54(void);
    void func_ov094_02167d20(void);
    void func_ov094_02167dbc(void);
    void func_ov094_02167e58(void);
    void func_ov094_021681bc(void);
    void func_ov094_0216825c(void);
    void func_ov094_02168310(void);
    void func_ov094_02168348(void);
    void func_ov094_02168364(void);
    void func_ov094_02168388(void);
};

class ActorProfileUnkPSWB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPSWB();
    ~ActorProfileUnkPSWB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPSWB *GetProfile();
};
