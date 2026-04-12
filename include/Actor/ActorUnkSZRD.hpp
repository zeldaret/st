//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSZRD_c4 : public Actor_c4 {
public:
    ActorUnkSZRD_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSZRD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSZRD();

    /* 4C */ virtual ~ActorUnkSZRD() override;

    void func_ov090_0216593c(void);
    void func_ov090_02165954(void);
    void func_ov090_0216597c(void);
    void func_ov090_021659e4(void);
    void func_ov090_02165a08(void);
    void func_ov090_02165a84(void);
    void func_ov090_02165aac(void);
    void func_ov090_02165dec(void);
    void func_ov090_02165e00(void);
    void func_ov090_02165f14(void);
    void func_ov090_021660e8(void);
    void func_ov090_0216618c(void);
    void func_ov090_02166324(void);
    void func_ov090_021663c8(void);
    void func_ov090_021664a8(void);
    void func_ov090_021664f8(void);
    void func_ov090_021665cc(void);
    void func_ov090_021666a8(void);
    void func_ov090_0216686c(void);
    void func_ov090_02166908(void);
    void func_ov090_02166ad8(void);
    void func_ov090_02166b50(void);
    void func_ov090_02166c94(void);
    void func_ov090_02166d04(void);
    void func_ov090_02166f10(void);
    void func_ov090_02166f1c(void);
    void func_ov090_02166f78(void);
    void func_ov090_02167058(void);
    void func_ov090_02167234(void);
    void func_ov090_0216728c(void);
    void func_ov090_0216789c(void);
    void func_ov090_021678a8(void);
    void func_ov090_02167a10(void);
    void func_ov090_02167aa4(void);
    void func_ov090_02167bdc(void);
    void func_ov090_02167f34(void);
    void func_ov090_02167f44(void);
    void func_ov090_02168378(void);
    void func_ov090_0216838c(void);
    void func_ov090_021683c4(void);
    void func_ov090_02168494(void);
    void func_ov090_021684bc(void);
    void func_ov090_02168530(void);
    void func_ov090_0216857c(void);
    void func_ov090_021685a8(void);
    void func_ov090_0216863c(void);
    void func_ov090_02168654(void);
    void func_ov090_02168718(void);
    void func_ov090_021687a8(void);
    void func_ov090_02168938(void);
    void func_ov090_02168a74(void);
    void func_ov090_02168a98(void);
    void func_ov090_02168aa8(void);
    void func_ov090_02168ab0(void);
    void func_ov090_02168ad4(void);
    void func_ov090_02168b00(void);
    void func_ov090_02168b1c(void);
};

class ActorProfileUnkSZRD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSZRD();
    ~ActorProfileUnkSZRD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSZRD *GetProfile();
};
