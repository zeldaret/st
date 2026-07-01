//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnkRMSD.hpp"
#include "global.h"
#include "nns/g3d/g3d.h"
#include "types.h"

struct UnkStruct_data_ov063_02163388 {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
};

class ActorUnkRMSW_C4 : public Actor_C4 {
public:
    ActorUnkRMSW_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMSW : public ActorUnkRMSBase {
public:
    /* 00 (base) */
    /* 158 */ unk32 mUnk_158;           //! INFO: Some class with a vfunc_34
    /* 15C */ STRUCT_PAD(0x15C, 0x1D4); //! INFO: Force alignment to match ::Create
    /* 1D4 */

    ActorUnkRMSW();

    /* 18 */ virtual unk32 vfunc_18(void);
    /* 20 */ virtual void vfunc_20(void);
    /* 24 */ virtual void vfunc_24(void);

    /* 4C */ virtual ~ActorUnkRMSW() override;

    /* 54 */ virtual G3d_Model *vfunc_54(void);
    /* 58 */ virtual G3d_Model *vfunc_58(void);
};

class ActorProfileUnkRMSW : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSW();
    ~ActorProfileUnkRMSW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSW *GetProfile();
};
