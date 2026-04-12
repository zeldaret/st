//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDSBN_c4 : public Actor_c4 {
public:
    ActorUnkDSBN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDSBN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDSBN();

    /* 4C */ virtual ~ActorUnkDSBN() override;

    void func_ov087_02154b1c(void);
    void func_ov087_02154b30(void);
    void func_ov087_02154b44(void);
    void func_ov087_02154b58(void);
    void func_ov087_02154d40(void);
    void func_ov087_02154d64(void);
    void func_ov087_02154da0(void);
    void func_ov087_02154de8(void);
    void func_ov087_02154fbc(void);
    void func_ov087_02155024(void);
    void func_ov087_02156138(void);
    void func_ov087_02156190(void);
    void func_ov087_02156374(void);
    void func_ov087_0215640c(void);
    void func_ov087_0215646c(void);
    void func_ov087_021564a8(void);
    void func_ov087_02156524(void);
    void func_ov087_021565dc(void);
    void func_ov087_02156714(void);
    void func_ov087_02156750(void);
    void func_ov087_02156860(void);
    void func_ov087_021568b0(void);
    void func_ov087_02156a4c(void);
    void func_ov087_02156af4(void);
    void func_ov087_02156bc4(void);
    void func_ov087_02156c2c(void);
    void func_ov087_02156d24(void);
    void func_ov087_02156d70(void);
    void func_ov087_02156eb0(void);
    void func_ov087_02156ed4(void);
    void func_ov087_02156f38(void);
    void func_ov087_02157104(void);
    void func_ov087_02157870(void);
    void func_ov087_021579b0(void);
    void func_ov087_02158190(void);
    void func_ov087_02158284(void);
    void func_ov087_02158310(void);
    void func_ov087_02158520(void);
    void func_ov087_02158638(void);
    void func_ov087_02158770(void);
    void func_ov087_02158848(void);
    void func_ov087_021588f4(void);
    void func_ov087_02158a34(void);
    void func_ov087_02158ad0(void);
    void func_ov087_02158af4(void);
    void func_ov087_02158cf4(void);
    void func_ov087_02158d04(void);
    void func_ov087_02158dbc(void);
    void func_ov087_02158ec4(void);
    void func_ov087_02158f44(void);
    void func_ov087_02158f64(void);
    void func_ov087_0215900c(void);
    void func_ov087_021591d4(void);
    void func_ov087_0215971c(void);
    void func_ov087_0215975c(void);
    void func_ov087_02159a5c(void);
    void func_ov087_02159b98(void);
    void func_ov087_02159f78(void);
    void func_ov087_02159fdc(void);
    void func_ov087_0215a044(void);
    void func_ov087_0215a078(void);
    void func_ov087_0215a944(void);
    void func_ov087_0215acfc(void);
    void func_ov087_0215ad28(void);
    void func_ov087_0215ad40(void);
    void func_ov087_0215addc(void);
    void func_ov087_0215ae84(void);
    void func_ov087_0215af9c(void);
    void func_ov087_0215afac(void);
    void func_ov087_0215afd0(void);
    void func_ov087_0215afec(void);
    void func_ov087_0215b0d0(void);
};

class ActorProfileUnkDSBN : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDSBN();
    ~ActorProfileUnkDSBN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDSBN *GetProfile();
};
