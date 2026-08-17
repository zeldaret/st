#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_ov031_02114870.hpp"
#include "global.h"
#include "nns/g3d/g3d.h"
#include "types.h"

class UnkStruct_ov063_021632e4 : public UnkStruct_ov000_020b31a8 {
public:
    /* 00 (base) */
    /* 1C */ UnkSystem5 mUnk_1C;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */

    UnkStruct_ov063_021632e4(ModelRender *param1, unk32 param2) :
        UnkStruct_ov000_020b31a8(&mUnk_1C, param1, param2),
        mUnk_1C(&mUnk_3C, NULL) {
        if (param2 != 0) {
            mUnk_1C.mpModel = mUnk_10;
        }
    };

    /* 00 */ virtual ~UnkStruct_ov063_021632e4() override {};
    /* 30 */ virtual s8 vfunc_30() override;
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override;
    /* 3C */ virtual void vfunc_3C() override;
};

class ActorUnkRMSBase : public UnkStruct_ov031_02114870 {
public:
    /* 00 (base) */
    /* 94 */ ModelRender mUnk_94; // Belongs to the parent class
    /* F4 */ ModelRender mUnk_F4;
    /* 154 */ unk8 mUnk_154;
    /* 155 */ unk8 mUnk_155;
    /* 156 */ STRUCT_PAD(0x156, 0x158);
    /* 158 */

    ActorUnkRMSBase();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 4C */ virtual ~ActorUnkRMSBase() override {};
    /* 58 */ virtual G3d_Model *vfunc_58() = 0;
};

class ActorUnkRMSV_C4 : public Actor_C4 {
public:
    ActorUnkRMSV_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMSV : public ActorUnkRMSBase {
public:
    /* 00 (base) */
    /* 158 */ UnkStruct_ov063_021632e4 mUnk_158; //! INFO: Some class with a vfunc_34
    /* 198 */ STRUCT_PAD(0x198, 0x1D4);          //! INFO: Force alignment to match ::Create
    /* 1D4 */ UnkStruct_ov063_021632e4 mUnk_1D4; //! INFO: Some class with a vfunc_34
    /* 114 */ STRUCT_PAD(0x114, 0x250);          //! INFO: Force alignment to match ::Create
    /* 250 */

    ActorUnkRMSV();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(void) override;
    /* 24 */ virtual void vfunc_24(void) override;
    /* 4C */ virtual ~ActorUnkRMSV() override;
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
    ~ActorProfileUnkRMSV();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSV *GetProfile();
};
