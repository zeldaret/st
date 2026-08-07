//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorUnkZLSL_ZSRS.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFSB_C4 : public Actor_C4 {
public:
    ActorUnkEFSB_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkEFSB_F8 : public ActorUnkZLSL_27CC {
public:
};

class ActorUnkEFSB : public Actor {
public:
    /* 000 (base) */
    /* 094 */ unk32 mUnk_094;
    /* 098 */ ModelRender mUnk_098;
    /* 0A4 */ STRUCT_PAD(0x0A4, 0x0F8);
    /* 0F8 */ ActorUnkEFSB_F8 mUnk_0F8;
    /* 114 */ STRUCT_PAD(0x114, 0x154);
    /* 154 */ ActorUnkEFSB_F8 mUnk_154;
    /* 170 */ STRUCT_PAD(0x170, 0x1B0);
    /* 1B0 */ unk32 mUnk_1B0;

    ActorUnkEFSB();

    /* 4C */ virtual ~ActorUnkEFSB() override;

    void func_ov031_020fb614(void);
    void func_ov031_020fb6cc(void);
    void func_ov031_020fb704(void);
    void func_ov031_020fb718(unk32 param1);
    void func_ov031_020fb720(void);
};

class ActorProfileUnkEFSB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFSB();
    ~ActorProfileUnkEFSB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFSB *GetProfile();
};
