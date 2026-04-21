//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKLTR_c4 : public Actor_c4 {
public:
    ActorUnkKLTR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkKLTR : public Actor_Derived1, public Actor_UnkSystem1_Base {
public:
    /* 000 (base) */
    /* 0A4 */ Actor_UnkSystem2 *mUnk_0A4;
    /* 0A8 */ Actor_UnkSystem2 mUnk_0A8;
    /* 294 */ Actor_UnkStruct1 mUnk_294;
    /* 2B4 */ Actor_9c mUnk_2B4;
    /* 2D4 */ Actor_UnkSystem3_Derived1 mUnk_2D4;
    /* 304 */ bool mUnk_300;
    /* 305 */ unk8 mUnk_301; // pad?
    /* 306 */ unk8 mUnk_302; // pad?
    /* 307 */ unk8 mUnk_303; // pad?
    /* 304 */ Actor_UnkSystem4 mUnk_304;
    /* 314 */ Actor_UnkStruct4 mUnk_314;
    /* 318 */ Actor_UnkStruct5 mUnk_330;
    /* 950 */ unk32 mUnk_950;
    /* 954 */ unk32 mUnk_954;
    /* 958 */ Actor_UnkSystem9_2 mUnk_958;
    /* AF0 */ Actor_UnkSystem10_2 mUnk_AF0;
    /* AF4 */ UnkSystem7_Base mUnk_AF4[4];
    /* B04 */ STRUCT_PAD(0xB04, 0xB14);
    /* B14 */ unk32 mUnk_B14;

    ActorUnkKLTR();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1c() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2c(unk32 param1) override;
    /* 30 */ virtual void vfunc_30() override;
    /* 4C */ virtual ~ActorUnkKLTR() override;

    void func_ov026_021116e0(void);
    void func_ov026_02111ac4(void);
    void func_ov026_02111c08(void);
    void func_ov026_02111d50(void);
    void func_ov026_0211202c(void);
    void func_ov026_0211205c(void);
    void func_ov026_02112088(void);
    void func_ov026_0211210c(void);
    void func_ov026_02112328(void);
    bool func_ov026_021127e8(void);
    void func_ov026_02112850(void);
    void func_ov026_02112944(void);
    bool func_ov026_02112bd4(void);
    bool func_ov026_02112ca8(void);
    void func_ov026_02112cbc(void);
    void func_ov026_02112cc0(void);
    void func_ov026_02112e28(void);
    bool func_ov026_02112ecc(void);
    void func_ov026_02112f08(void);
    bool func_ov026_02112fb0(void);
    void func_ov026_02112fec(void);
    bool func_ov026_02112ff8(void);
    void func_ov026_02113040(void);
    bool func_ov026_02113118(void);
    void func_ov026_02113204(void);
    void func_ov026_021132c0(void);
    void func_ov026_02113304(void);
    bool func_ov026_021133b0(void);
    void func_ov026_0211340c(void);
    bool func_ov026_021134c8(void);
    void func_ov026_0211350c(void);
    bool func_ov026_021135b8(void);
    void func_ov026_021135e4(void);
    bool func_ov026_02113704(void);
    void func_ov026_02113718(void);
    void func_ov026_02113784(void);
    void func_ov026_0211391c(void);
    bool func_ov026_02113a40(void);
    void func_ov026_02113a5c(void);
    void func_ov026_02113b5c(void);
    void func_ov026_02113b98(void);
};

class ActorProfileUnkKLTR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKLTR();
    ~ActorProfileUnkKLTR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKLTR *GetProfile();
};
