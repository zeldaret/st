//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTTKB_c4 : public Actor_c4 {
public:
    ActorUnkTTKB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkTTKB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTTKB();

    /* 4C */ virtual ~ActorUnkTTKB() override;

    void func_ov091_0216f51c(void);
    void func_ov091_0216f530(void);
    void func_ov091_0216f65c(void);
    void func_ov091_0216f8f8(void);
    void func_ov091_0216f910(void);
    void func_ov091_0216f954(void);
    void func_ov091_0216fa14(void);
    void func_ov091_0216fb90(void);
    void func_ov091_0216fcbc(void);
    void func_ov091_0216fcf0(void);
    void func_ov091_0216ff68(void);
    void func_ov091_0216ffc4(void);
    void func_ov091_021702c0(void);
    void func_ov091_02170300(void);
    void func_ov091_021706ec(void);
    void func_ov091_02170720(void);
    void func_ov091_021707ac(void);
    void func_ov091_0217085c(void);
    void func_ov091_02170948(void);
    void func_ov091_02170a6c(void);
    void func_ov091_02170b70(void);
    void func_ov091_02170bf8(void);
    void func_ov091_02171320(void);
    void func_ov091_02171324(void);
    void func_ov091_0217138c(void);
    void func_ov091_0217140c(void);
    void func_ov091_0217157c(void);
    void func_ov091_021715cc(void);
    void func_ov091_02171630(void);
    void func_ov091_02171774(void);
    void func_ov091_02171814(void);
    void func_ov091_02171884(void);
    void func_ov091_021718cc(void);
    void func_ov091_021719dc(void);
    void func_ov091_02171aa8(void);
    void func_ov091_02171ba0(void);
    void func_ov091_02171cac(void);
    void func_ov091_02171ff4(void);
    void func_ov091_02172510(void);
    void func_ov091_02172964(void);
    void func_ov091_021729f0(void);
    void func_ov091_02172af0(void);
    void func_ov091_02172ca4(void);
    void func_ov091_02172ce8(void);
    void func_ov091_02172d9c(void);
    void func_ov091_02172e4c(void);
    void func_ov091_02172f6c(void);
    void func_ov091_02172ff0(void);
    void func_ov091_02173134(void);
    void func_ov091_0217317c(void);
    void func_ov091_021731e8(void);
    void func_ov091_02173288(void);
    void func_ov091_021733a4(void);
    void func_ov091_021734b0(void);
    void func_ov091_02173518(void);
    void func_ov091_021735e8(void);
    void func_ov091_021738d0(void);
    void func_ov091_02173bdc(void);
    void func_ov091_02173c3c(void);
    void func_ov091_02173d2c(void);
    void func_ov091_02173e6c(void);
    void func_ov091_02173fa0(void);
    void func_ov091_021740bc(void);
    void func_ov091_02174114(void);
    void func_ov091_02174180(void);
    void func_ov091_02174208(void);
    void func_ov091_021747cc(void);
    void func_ov091_0217482c(void);
    void func_ov091_02174c40(void);
    void func_ov091_02174ce0(void);
    void func_ov091_02174f04(void);
    void func_ov091_02175360(void);
    void func_ov091_02175430(void);
    void func_ov091_02175484(void);
    void func_ov091_021754ec(void);
    void func_ov091_0217551c(void);
    void func_ov091_02175568(void);
    void func_ov091_02175584(void);
    void func_ov091_021755a8(void);
    void func_ov091_0217565c(void);
    void func_ov091_0217568c(void);
    void func_ov091_021756a8(void);
    void func_ov091_021756b4(void);
    void func_ov091_021756ec(void);
    void func_ov091_02175794(void);
    void func_ov091_021757b0(void);
};

class ActorProfileUnkTTKB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTTKB();
    ~ActorProfileUnkTTKB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTTKB *GetProfile();
};
