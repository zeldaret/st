#pragma once

#include "Actor/ActorBomb.hpp"
#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "global.h"
#include "types.h"

enum MapObjUnkSKDIState_ {
    MapObjUnkSKDIState_0 = 0,
    MapObjUnkSKDIState_1 = 1,
    MapObjUnkSKDIState_2 = 2,
    MapObjUnkSKDIState_3 = 3,
    MapObjUnkSKDIState_MAX
};

class MapObjectUnkSKDI : public MapObject {
public:
    /* 000 (base) */
    /* 040 */ UnkSystem6_Derived2 mUnk_040;
    /* 048 */ unk8 mUnk_048;
    /* 049 */ STRUCT_PAD(0x049, 0x04C);
    /* 04C */ ActorBomb_unk mUnk_04C[0x4];
    /* 07C */ unk32 mUnk_07C;
    /* 080 */ unk32 mUnk_080;
    /* 084 */ u16 mUnk_084;
    /* 086 */ u8 mUnk_086;
    /* 087 */ u8 mUnk_087;
    /* 088 */ u8 mUnk_088;
    /* 089 */ unk8 mUnk_089;
    /* 080 */ STRUCT_PAD(0x08A, 0x08C);
    /* 08C */ UnkStruct_ov031_Items_02 mUnk_08C;
    /* 0A8 */ STRUCT_PAD(0x098, 0x0BC);
    /* 0BC */ unk32 mUnk_0BC;
    /* 0C0 */ STRUCT_PAD(0x0C0, 0x0D4);
    /* 0D4 */ MapObject_10 mUnk_0D4;
    /* 0F8 */ volatile u16 mUnk_0F8;
    /* 0FA */ u16 mUnk_0FA;
    /* 0FC */ unk32 mUnk_0FC;
    /* 100 */

    MapObjectUnkSKDI();

    /* 00 */ virtual bool vfunc_00() override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 1C */ virtual bool vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) override;
    /* 38 */ virtual unk32 vfunc_38();
    /* 3C */ virtual unk32 vfunc_3C();
    /* 40 */ virtual s16 vfunc_40();

    void func_ov031_02106190();
    void func_ov031_021061dc();
    void func_ov031_0210643c(unk32 param1);
    void func_ov031_02106a70();
    void func_ov031_02106678(MapObjState state, unk32 param2);
    void func_ov031_02106cb0(unk32 param1);
};

class MapObjectProfileUnkSKDI : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */
    /* D4 */

    MapObjectProfileUnkSKDI();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSKDI *GetProfile();
};
