//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "nns/g3d/g3d.h"
#include "types.h"

class ActorUnkRMSV_C4 : public Actor_C4 {
public:
    ActorUnkRMSV_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMSV : public Actor { //! INFO: ActorUnkRMSBase ? -> weirdly doesn't match first dtor
public:
    /* 00 (base) */
    /* 94 */ STRUCT_PAD(0x94, 0x158);
    /* 158 */ unk32 mUnk_158;           //! INFO: Some class with a vfunc_34
    /* 15C */ STRUCT_PAD(0x15C, 0x1D4); //! INFO: Force alignment to match ::Create
    /* 1D4 */ unk32 mUnk_1D4;           //! INFO: Some class with a vfunc_34
    /* 1D8 */ STRUCT_PAD(0x1D8, 0x250); //! INFO: Force alignment to match ::Create
    /* 250 */

    ActorUnkRMSV();

    /* 18 */ virtual unk32 vfunc_18(void);
    /* 20 */ virtual void vfunc_20(void);
    /* 24 */ virtual void vfunc_24(void);
    /* 4C */ virtual ~ActorUnkRMSV() override;
    /* 50 */ virtual void vfunc_50(void); // dtor, override?
    /* 54 */ virtual G3d_Model *vfunc_54(void);
    /* 58 */ virtual G3d_Model *vfunc_58(void);

    void func_ov063_0215bd44(void);
    void func_ov063_0215bdec(void);
    void func_ov063_0215bed0(void);
    void func_ov063_0215bee0(void);
};

class ActorProfileUnkRMSV : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSV();
    ~ActorProfileUnkRMSV();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSV *GetProfile();
};
