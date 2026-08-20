#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnkRMSBase.hpp"
#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "Render/ModelRender.hpp"
#include "global.h"
#include "nns/g3d/g3d.h"
#include "types.h"

class UnkStruct_ov063_021632e4 : public UnkStruct_ov000_020b31a8 {
public:
    /* 00 (base) */
    /* 1C */ UnkSystem5 mUnk_1C;
    /* 3C */ void *mUnk_3C;
    /* 40 */

    UnkStruct_ov063_021632e4(ModelRender *param1, unk32 param2) :
        UnkStruct_ov000_020b31a8(&mUnk_1C, param1, param2),
        mUnk_1C(&mUnk_3C, NULL) {
        if (param2 != 0) {
            mUnk_1C.mpModel = mUnk_10;
        }
    };

    /* 30 */ virtual s8 vfunc_30() override;
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override;
    /* 3C */ virtual void vfunc_3C() override;
};

class ActorUnkRMSV : public ActorUnkRMSBase {
public:
    /* 00 (base) */
    /* 158 */ UnkStruct_ov063_021632e4 mUnk_158;
    /* 198 */ STRUCT_PAD(0x198, 0x1D4); //! INFO: Force alignment to match ::Create
    /* 1D4 */ UnkStruct_ov063_021632e4 mUnk_1D4;
    /* 214 */ STRUCT_PAD(0x214, 0x250); //! INFO: Force alignment to match ::Create
    /* 250 */

    ActorUnkRMSV();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(void) override;
    /* 24 */ virtual void vfunc_24(void) override;
    /* 54 */ virtual G3d_Model *vfunc_54(void) override;
    /* 58 */ virtual G3d_Model *vfunc_58(void) override;

    void func_ov063_0215bd44(void);
    void func_ov063_0215bdec(void);
    void func_ov063_0215bed0(void);
    void func_ov063_0215bee0(void);
};

class ActorProfileUnkRMSV : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSV();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSV *GetProfile();
};
