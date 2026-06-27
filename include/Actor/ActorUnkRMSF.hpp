//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "nns/g3d/g3d.h"
#include "types.h"

class ActorUnkRMSF_C4 : public Actor_C4 {
public:
    ActorUnkRMSF_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMSF : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;          // ModelRender
    /* 98 */ STRUCT_PAD(0x98, 0xF4); // Discard when assigning type ModelRenderer
    /* F4 */ unk32 mUnk_F4;          // ModelRender

    ActorUnkRMSF();

    /* 4C */ virtual ~ActorUnkRMSF() override;

    virtual G3d_Model *func_ov063_0215c250(void);
    virtual G3d_Model *func_ov063_0215c290(void);
};

class ActorProfileUnkRMSF : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSF();
    ~ActorProfileUnkRMSF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSF *GetProfile();
};
