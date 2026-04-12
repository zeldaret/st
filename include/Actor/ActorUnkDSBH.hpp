//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDSBH_c4 : public Actor_c4 {
public:
    ActorUnkDSBH_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDSBH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDSBH();

    /* 4C */ virtual ~ActorUnkDSBH() override;

    void func_ov087_0215c6d0(void);
    void func_ov087_0215c730(void);
    void func_ov087_0215c754(void);
    void func_ov087_0215c79c(void);
    void func_ov087_0215c9fc(void);
    void func_ov087_0215ca7c(void);
    void func_ov087_0215cb90(void);
    void func_ov087_0215cb94(void);
    void func_ov087_0215ce04(void);
    void func_ov087_0215ce90(void);
    void func_ov087_0215d048(void);
    void func_ov087_0215d0ec(void);
    void func_ov087_0215d110(void);
    void func_ov087_0215d184(void);
    void func_ov087_0215d1c0(void);
    void func_ov087_0215d244(void);
    void func_ov087_0215d29c(void);
    void func_ov087_0215d3ec(void);
    void func_ov087_0215dd30(void);
    void func_ov087_0215de20(void);
    void func_ov087_0215df04(void);
    void func_ov087_0215dfc0(void);
    void func_ov087_0215e538(void);
    void func_ov087_0215ec10(void);
    void func_ov087_0215ec9c(void);
    void func_ov087_0215ed24(void);
    void func_ov087_0215ed68(void);
    void func_ov087_0215ef60(void);
    void func_ov087_0215efe0(void);
    void func_ov087_0215f044(void);
    void func_ov087_0215f0b8(void);
    void func_ov087_0215f1bc(void);
    void func_ov087_0215f398(void);
    void func_ov087_0215f3a4(void);
    void func_ov087_0215f728(void);
    void func_ov087_0215f938(void);
    void func_ov087_0215f964(void);
    void func_ov087_0215f9f0(void);
    void func_ov087_0215fa34(void);
    void func_ov087_0215fb3c(void);
    void func_ov087_021601e4(void);
    void func_ov087_021602dc(void);
    void func_ov087_021604e0(void);
    void func_ov087_02160598(void);
    void func_ov087_02160680(void);
    void func_ov087_0216077c(void);
    void func_ov087_021607e4(void);
    void func_ov087_02160818(void);
    void func_ov087_02160960(void);
    void func_ov087_021609c8(void);
    void func_ov087_02160a7c(void);
    void func_ov087_02160aa4(void);
    void func_ov087_02160ac8(void);
    void func_ov087_02160b08(void);
    void func_ov087_02160d4c(void);
    void func_ov087_02161084(void);
    void func_ov087_021610f0(void);
};

class ActorProfileUnkDSBH : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDSBH();
    ~ActorProfileUnkDSBH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDSBH *GetProfile();
};
