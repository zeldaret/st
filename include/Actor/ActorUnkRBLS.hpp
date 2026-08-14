//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Render/ModelRender.hpp"
#include "global.h"
#include "types.h"

struct UnkStruct_data_ov063_02163740 {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
};

class ActorUnkRBLS_C4 : public Actor_C4 {
public:
    ActorUnkRBLS_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRBLS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ ModelRender mUnk_94;
    /* F4 */ unk32 mUnk_F4;
    /* F8 */ STRUCT_PAD(0xF8, 0x110);
    /* 110 */ UnkSystem5 mUnk_110;
    /* 130 */ void *mUnk_130;
    /* 134 */ STRUCT_PAD(0x134, 0x160);
    /* 160 */

    ActorUnkRBLS();

    /* 18 */ virtual unk32 vfunc_18(void);
    /* 20 */ virtual void vfunc_20(void);
    /* 24 */ virtual void vfunc_24(void);
    /* 2C */ virtual void vfunc_2C(void);

    /* 4C */ virtual ~ActorUnkRBLS() override;

    void func_ov063_0215f3d4(void);
    void func_ov063_0215f500(void);
};

class ActorProfileUnkRBLS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBLS();
    ~ActorProfileUnkRBLS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBLS *GetProfile();
};
