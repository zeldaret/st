//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDKTR;

class ActorUnkDKTR_c4 : public Actor_c4 {
public:
    ActorUnkDKTR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDKTR : public Actor_Derived1, public Actor_UnkSystem1 {
public:
    /* 000 (base) */
    /* 0A8 */ Actor_UnkSystem2 *mUnk_0A8;
    /* 0AC */ Actor_UnkSystem2 mUnk_0AC;
    /* 298 */ Actor_UnkStruct1 mUnk_298;
    /* 2B8 */ Actor_9c mUnk_2B8;
    /* 2D8 */ Actor_UnkSystem3_Derived1 mUnk_2D8;
    /* 304 */ unk8 mUnk_304; // bool?
    /* 305 */ unk8 mUnk_305; // pad?
    /* 306 */ unk8 mUnk_306; // pad?
    /* 307 */ unk8 mUnk_307; // pad?
    /* 308 */ Actor_UnkSystem4 mUnk_308;
    /* 318 */ Actor_UnkStruct4 mUnk_318;
    /* 334 */ Actor_UnkStruct5 mUnk_334;
    /* 954 */ Actor_UnkSystem9 mUnk_954;
    /* AEC */ Actor_UnkSystem10 mUnk_AEC;
    /* AF0 */ UnkSystem7_Base mUnk_AF0[1];
    /* AF4 */ STRUCT_PAD(0xAF4, 0xB30);
    /* B30 */ unk32 mUnk_B30;
    /* B34 */ unk32 mUnk_B34;
    /* B38 */ unk16 mUnk_B38;
    /* B3A */ u8 mUnk_B3A;
    /* B3B */ unk8 mUnk_B3B; // bool?
    /* B3C */ unk8 mUnk_B3C; // bool?
    /* B3D */ unk8 mUnk_B3D; // bool?
    /* B3E */ unk8 mUnk_B3E; // bool?
    /* B3F */ unk8 mUnk_B3F; // bool?
    /* B40 */ unk8 mUnk_B40; // bool?
    /* B41 */ unk8 mUnk_B41; // pad?
    /* B42 */ unk8 mUnk_B42; // pad?
    /* B43 */ unk8 mUnk_B43; // pad?
    /* B44 */ unk32 mUnk_B44;
    /* B48 */

    ActorUnkDKTR();

    // data_ov026_02138b10
    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1c() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2c(unk32 param1) override;
    /* 30 */ virtual void vfunc_30() override;
    /* 4C */ virtual ~ActorUnkDKTR() override;
    /* 0C */ virtual void vfunc2_0C() override;
    // /* 5C */ virtual void vfunc_5C();

    void func_ov026_0212b958(void);
    void func_ov026_0212bde0(void);
    void func_ov026_0212bfec(void);
    void func_ov026_0212c134(void);
    void func_ov026_0212c398(void);
    void func_ov026_0212c3c8(void);
    void func_ov026_0212c3f4(void);
    void func_ov026_0212c56c(void);
    void func_ov026_0212c624(void);
    void func_ov026_0212ca18(void);
    void func_ov026_0212cd64(void);
    void func_ov026_0212cdcc(void);
    void func_ov026_0212cec4(void);
    void func_ov026_0212d040(void);
    void func_ov026_0212d12c(void);
    void func_ov026_0212d2ac(void);
    void func_ov026_0212d310(void);
    void func_ov026_0212d324(void);
    void func_ov026_0212d328(void);
    void func_ov026_0212d490(void);
    void func_ov026_0212d534(void);
    void func_ov026_0212d738(void);
    void func_ov026_0212d7e0(void);
    void func_ov026_0212d81c(void);
    void func_ov026_0212d834(void);
    void func_ov026_0212d87c(void);
    void func_ov026_0212d954(void);
    void func_ov026_0212d97c(void);
    void func_ov026_0212da08(void);
    void func_ov026_0212da34(void);
    void func_ov026_0212db5c(void);
    void func_ov026_0212db88(void);
    void func_ov026_0212dc68(void);
    void func_ov026_0212dd0c(void);
    void func_ov026_0212dd80(void);
    void func_ov026_0212dd94(void);
    void func_ov026_0212de00(void);
    void func_ov026_0212e034(void);
    void func_ov026_0212e15c(void);
    void func_ov026_0212e178(void);
    void func_ov026_0212e278(void);
    void func_ov026_0212e2b4(void);
};

class ActorProfileUnkDKTR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */
    /* D4 */

    ActorProfileUnkDKTR();
    ~ActorProfileUnkDKTR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDKTR *GetProfile();
};
