//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Item/Item.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKEYN_c4 : public Actor_c4 {
public:
    ActorUnkKEYN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkKEYN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ STRUCT_PAD(0x94, 0xA0);
    /* A0 */ ItemId mItemId;

    ActorUnkKEYN();

    /* 4C */ virtual ~ActorUnkKEYN() override;

    void func_ov070_0214143c(void);
    void func_ov070_02141618(void);
    void func_ov070_0214162c(void);
    void func_ov070_02141750(void);
    void func_ov070_0214175c(void);
    void func_ov070_02141818(void);
    void func_ov070_021418bc(void);
    void func_ov070_021418e0(void);
    void func_ov070_02141904(void);
    void func_ov070_0214191c(void);
    void func_ov070_02141950(void);
    void func_ov070_02141cd0(void);
    void func_ov070_02141cdc(void);
    void func_ov070_02141d2c(void);
    void func_ov070_02141d8c(void);
    void func_ov070_02141e2c(void);
    void func_ov070_02141e80(void);
    void func_ov070_02141f00(void);
    void func_ov070_02141f3c(void);
    void func_ov070_02141f7c(void);
    void func_ov070_02141fbc(void);
    void func_ov070_02142014(void);
    void func_ov070_021420a4(void);
    void func_ov070_021420d8(void);
    void func_ov070_02142140(void);
    void func_ov070_021421bc(void);
    void func_ov070_021421e8(void);
    void func_ov070_021421ec(void);
    void func_ov070_02142230(void);
    void func_ov070_02142374(void);
    void func_ov070_021425f4(void);
    void func_ov070_0214262c(void);
    void func_ov070_0214266c(void);
    void func_ov070_02142688(void);
    void func_ov070_021426ac(void);
};

class ActorProfileUnkKEYN : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKEYN();
    ~ActorProfileUnkKEYN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKEYN *GetProfile();
};
