#pragma once

#include "Item/Item.hpp"
#include "MapObject/MapObject.hpp"
#include "Unknown/Common.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRES_74 : public UnkSystem4 {
public:
    /* 00 (base) */
    /* 60 */ bool mUnk_60;
    /* 61 */ unk8 mUnk_61; // pad?
    /* 62 */ unk8 mUnk_62; // pad?
    /* 63 */ unk8 mUnk_63; // pad?
    /* 64 */

    MapObjectUnkTRES_74(unk32 param1);

    // data_ov031_02115844
    /* 00 */ virtual ~MapObjectUnkTRES_74() override {}
    /* 1C */ virtual void vfunc_1C(UnkSystem4_vfunc_1C *param1) override;

    void func_ov000_0209dde0(void);

    void func_ov031_0210306c(void);
};

class MapObjectChestBase : public MapObject {
public:
    /* 000 (base) */
    /* 040 */ unk32 mUnk_040;
    /* 044 */ unk32 mUnk_044;
    /* 048 */ unk32 mUnk_048;
    /* 04C */ unk8 mUnk_04C;
    /* 04D */ unk8 mUnk_04D;
    /* 04E */ unk8 mUnk_04E; // pad?
    /* 04F */ unk8 mUnk_04F; // pad?
    /* 050 */ MapObject_10 mUnk_050;
    /* 074 */ MapObjectUnkTRES_74 mUnk_074;
    /* 0D8 */ ItemId mItemId;
    /* 0DC */ UnkSubStruct19 mUnk_0DC;
    /* 154 */

    MapObjectChestBase(unk32 param1); // func_ov031_0210307c

    /* 00 */ virtual bool vfunc_00() override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18(s8 *param1, s8 param2) override;
    /* 28 */ virtual ItemId vfunc_28() override;
    /* 30 */ virtual ~MapObjectChestBase() override;
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2);
    /* 3C */ virtual unk32 vfunc_3C();
    /* 40 */ virtual bool vfunc_40();
    /* 44 */ virtual bool vfunc_44();
    /* 4C */ virtual void vfunc_4C();
    /* 50 */ virtual void vfunc_50();
    /* 54 */ virtual Vec2p *vfunc_54();
    /* 58 */

    unk32 func_ov031_021037d0();
    bool func_ov031_02103864();
    void func_ov031_02103878();
    void func_ov031_02103f48();
};
