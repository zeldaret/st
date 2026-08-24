#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnkRMSBase.hpp"
#include "Actor/ActorUnkRMSV.hpp"
#include "global.h"
#include "nns/g3d/g3d.h"
#include "types.h"

class ActorUnkRMSD : public ActorUnkRMSBase {
public:
    /* 00 (base) */
    /* 158 */ UnkStruct_ov063_021632e4 mUnk_158;
    /* 198 */ STRUCT_PAD(0x198, 0x1D4); //! INFO: Force alignment to match ::Create
    /* 1D4 */

    ActorUnkRMSD();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(void) override;
    /* 24 */ virtual void vfunc_24(void) override;
    /* 54 */ virtual G3d_Model *vfunc_54(void);
    /* 58 */ virtual G3d_Model *vfunc_58(void);
};

class ActorProfileUnkRMSD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */
    /* D8 */

    ActorProfileUnkRMSD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSD *GetProfile();
};
