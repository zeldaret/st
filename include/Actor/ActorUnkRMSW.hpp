#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnkRMSBase.hpp"
#include "Actor/ActorUnkRMSV.hpp"
#include "global.h"
#include "nns/g3d/g3d.h"
#include "types.h"

struct UnkStruct_data_ov063_02163388 {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ ActorId mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
};

class ActorUnkRMSW : public ActorUnkRMSBase {
public:
    /* 00 (base) */
    /* 158 */ UnkStruct_ov063_021632e4 mUnk_158;
    /* 198 */ STRUCT_PAD(0x198, 0x1D4); //! INFO: Force alignment to match ::Create
    /* 1D4 */

    ActorUnkRMSW();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(void) override;
    /* 24 */ virtual void vfunc_24(void) override;
    /* 54 */ virtual G3d_Model *vfunc_54(void) override;
    /* 58 */ virtual G3d_Model *vfunc_58(void) override;
};

class ActorProfileUnkRMSW : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSW *GetProfile();
};
