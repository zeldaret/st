#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "timer.hpp"
#include "types.h"

class ActorUnkNSSW;

class MapObjectUnkSWSW_40 : public ModelRender {
public:
    /* 00 (base) */
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk32 mUnk_64;
    /* 68 */ unk16 mUnk_68;
    /* 6A */ unk16 mUnk_6A;
    /* 6C */

    MapObjectUnkSWSW_40(G3d_Model *pModel);

    // data_ov032_021227ac
    /* 1C */ virtual void vfunc_1C(UnkSystem4_vfunc_1C *param1) override;

    void func_ov032_021210a0(fx32 param1);
};

class MapObjectUnkSWSW : public MapObject {
public:
    /* 000 (base) */
    /* 040 */ MapObjectUnkSWSW_40 mUnk_040;
    /* 0AC */ UnkSystem5 mUnk_0AC;
    /* 0CC */ unk32 mUnk_0CC;
    /* 0E0 */ PAD(0xD0, 0xEC);
    /* 0EC */ VecFx32Cpp mUnk_0EC;
    /* 0F8 */ ActorUnkNSSW *mUnk_0F8;
    /* 0FC */ unk32 mUnk_0FC;
    /* 100 */ Timer mUnk_100;
    /* 104 */ u8 mUnk_104;
    /* 105 */ u8 mUnk_105;
    /* 106 */ PAD(0x106, 0x108);
    /* 108 */ fx32 mUnk_108;
    /* 10C */ unk16 mUnk_10C;
    /* 10E */ Timer mUnk_10E;
    /* 114 */ ActorUnkNSSW *mUnk_114;
    /* 118 */

    MapObjectUnkSWSW();

    /* 00 */ virtual bool Init() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;
    /* 1C */ virtual bool vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) override;
    /* 38 */ virtual void vfunc_38();
    /* 3C */ virtual void vfunc_3C(unk32 param1);

    void func_ov032_02121b90();
    ActorUnkNSSW *func_ov032_02121dc8(VecFx32 *param1);
};

class MapObject_10_SWSW : public MapObject_10 {
public:
    // data_ov032_02122784
};

class MapObjectProfileUnkSWSW_Base : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */
    /* D4 */ MapObject_10_SWSW mUnk_D4;
    /* F8 */

    MapObjectProfileUnkSWSW_Base(MapObjectId id) :
        MapObjectProfile_Derived2(id, id) {}
};

class MapObjectProfileUnkSWSW : public MapObjectProfileUnkSWSW_Base {
public:
    /* 00 (base) */
    /* F8 */

    MapObjectProfileUnkSWSW();

    /* 00 */ virtual MapObject *Create();

    static MapObjectProfileUnkSWSW *GetProfile();
};
