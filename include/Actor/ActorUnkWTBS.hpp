//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWTBS_c4 : public Actor_c4 {
public:
    ActorUnkWTBS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkWTBS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWTBS();

    /* 4C */ virtual ~ActorUnkWTBS() override;

    void func_ov083_02152e00(void);
    void func_ov083_02153280(void);
    void func_ov083_02153294(void);
    void func_ov083_0215348c(void);
    void func_ov083_021534c4(void);
    void func_ov083_02153554(void);
    void func_ov083_0215363c(void);
    void func_ov083_02153664(void);
    void func_ov083_02153ac8(void);
    void func_ov083_02153bb8(void);
    void func_ov083_02153c84(void);
    void func_ov083_02153c94(void);
    void func_ov083_02153d8c(void);
    void func_ov083_02153f6c(void);
    void func_ov083_02153fa4(void);
    void func_ov083_02153fbc(void);
    void func_ov083_02154378(void);
    void func_ov083_02154548(void);
    void func_ov083_021545f4(void);
    void func_ov083_021547dc(void);
    void func_ov083_021547ec(void);
    void func_ov083_021549ec(void);
    void func_ov083_02154a2c(void);
    void func_ov083_02154b44(void);
    void func_ov083_02154b60(void);
    void func_ov083_02154c08(void);
    void func_ov083_02154c64(void);
    void func_ov083_02154cc0(void);
    void func_ov083_02154d98(void);
    void func_ov083_02154dd4(void);
    void func_ov083_02154fa8(void);
    void func_ov083_02154fd0(void);
    void func_ov083_02155030(void);
    void func_ov083_0215508c(void);
    void func_ov083_02155190(void);
    void func_ov083_021551bc(void);
    void func_ov083_021551ec(void);
    void func_ov083_021553bc(void);
    void func_ov083_0215558c(void);
    void func_ov083_021555cc(void);
    void func_ov083_0215567c(void);
    void func_ov083_02155784(void);
    void func_ov083_021557ac(void);
    void func_ov083_02155818(void);
    void func_ov083_021558f4(void);
    void func_ov083_02155958(void);
    void func_ov083_0215598c(void);
    void func_ov083_02155ad8(void);
    void func_ov083_02156508(void);
    void func_ov083_02156530(void);
    void func_ov083_02156630(void);
    void func_ov083_02156ca0(void);
    void func_ov083_02156cc8(void);
    void func_ov083_02156e20(void);
    void func_ov083_02156e9c(void);
    void func_ov083_02156fe4(void);
    void func_ov083_021570e0(void);
    void func_ov083_021570e4(void);
    void func_ov083_0215713c(void);
    void func_ov083_02157160(void);
    void func_ov083_02157214(void);
    void func_ov083_021572f8(void);
    void func_ov083_02157618(void);
    void func_ov083_021576ec(void);
    void func_ov083_021578cc(void);
    void func_ov083_02157a90(void);
    void func_ov083_02157c44(void);
    void func_ov083_02157d1c(void);
    void func_ov083_02157e3c(void);
    void func_ov083_02157f38(void);
    void func_ov083_021581dc(void);
    void func_ov083_02158344(void);
    void func_ov083_0215841c(void);
    void func_ov083_0215852c(void);
    void func_ov083_02158770(void);
    void func_ov083_02158800(void);
    void func_ov083_02158994(void);
    void func_ov083_02158a58(void);
    void func_ov083_02158cbc(void);
    void func_ov083_02158d80(void);
    void func_ov083_02159148(void);
    void func_ov083_02159268(void);
    void func_ov083_021598ec(void);
    void func_ov083_0215997c(void);
    void func_ov083_02159a10(void);
    void func_ov083_02159dbc(void);
    void func_ov083_02159e1c(void);
    void func_ov083_02159e60(void);
    void func_ov083_0215a0d0(void);
    void func_ov083_0215a0f8(void);
    void func_ov083_0215a1a0(void);
    void func_ov083_0215a210(void);
    void func_ov083_0215a280(void);
    void func_ov083_0215a2a8(void);
    void func_ov083_0215a2b8(void);
    void func_ov083_0215a3d0(void);
    void func_ov083_0215a4f0(void);
    void func_ov083_0215a514(void);
    void func_ov083_0215a540(void);
};

class ActorProfileUnkWTBS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWTBS();
    ~ActorProfileUnkWTBS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWTBS *GetProfile();
};
