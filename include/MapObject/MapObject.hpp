#pragma once

#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "flags.h"
#include "global.h"
#include "nitro/math.h"
#include "types.h"

typedef u16 MapObjFlags;
enum MapObjFlag_ {
    MapObjFlag_Alive = FLAG(0, 0),
    MapObjFlag_1     = FLAG(0, 1),
    MapObjFlag_2     = FLAG(0, 2),
    MapObjFlag_3     = FLAG(0, 3),
    MapObjFlag_4     = FLAG(0, 4),
    MapObjFlag_5     = FLAG(0, 5),
    MapObjFlag_6     = FLAG(0, 6),
    MapObjFlag_7     = FLAG(0, 7),
    MapObjFlag_8     = FLAG(0, 8),
    MapObjFlag_9     = FLAG(0, 9),
    MapObjFlag_10    = FLAG(0, 10),
    MapObjFlag_11    = FLAG(0, 11),
    MapObjFlag_12    = FLAG(0, 12),
    MapObjFlag_13    = FLAG(0, 13),
    MapObjFlag_14    = FLAG(0, 14),
    MapObjFlag_15    = FLAG(0, 15),
    MapObjFlag_16    = FLAG(0, 16),
    MapObjFlag_17    = FLAG(0, 17),
    MapObjFlag_18    = FLAG(0, 18),
    MapObjFlag_19    = FLAG(0, 19),
    MapObjFlag_20    = FLAG(0, 20),
    MapObjFlag_21    = FLAG(0, 21),
    MapObjFlag_22    = FLAG(0, 22),
    MapObjFlag_23    = FLAG(0, 23),
    MapObjFlag_24    = FLAG(0, 24),
    MapObjFlag_25    = FLAG(0, 25),
    MapObjFlag_26    = FLAG(0, 26),
    MapObjFlag_27    = FLAG(0, 27),
    MapObjFlag_28    = FLAG(0, 28),
    MapObjFlag_29    = FLAG(0, 29),
    MapObjFlag_30    = FLAG(0, 30),
    MapObjFlag_31    = FLAG(0, 31),
};

class MapObject : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ Vec3p mPos;
    /* 10 */ void *mUnk_10;
    /* 14 */ unk16 mUnk_14;
    /* 16 */ unk16 mUnk_16;
    /* 18 */ unk8 mUnk_18; // bool? when set Link walks to the map object when touched
    /* 19 */ unk8 mUnk_19;
    /* 1A */ unk8 mUnk_1A;
    /* 1B */ unk8 mUnk_1B;
    /* 1C */ MapObjFlags mFlags[1];
    /* 1E */ unk16 mUnk_1E;
    /* 20 */ u16 mUnk_20;
    /* 22 */ u16 mUnk_22;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */ unk32 mUnk_30;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ unk8 mUnk_38;
    /* 38 */ unk8 mUnk_39;
    /* 3A */ Vec2b mUnk_3A;
    /* 3C */ MapObjectProfile *mpProfile;
    /* 40 */

    // data_ov000_020b3590
    /* 00 */ virtual bool vfunc_00();
    /* 04 */ virtual bool vfunc_04();
    /* 08 */ virtual unk16 vfunc_08();
    /* 0C */ virtual unk8 vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28();
    /* 2C */ virtual void vfunc_2C();
    /* 30 */ virtual ~MapObject();
    /* 38 */

    MapObject();

    MapObjectId GetMapObjectId();

    void func_ov000_0209d0bc();
    void func_ov000_0209d114();
    void func_ov000_0209d12c();
    void func_ov000_0209d144();
    void func_ov000_0209d22c();
    void func_ov000_0209d274();
    unk32 func_ov000_0209d29c(unk32 param1);
    void func_ov000_0209d2c4(unk32 param1, unk32 param2);
    void func_ov000_0209d2f0();
    void func_ov000_0209d3b4();
    void func_ov000_0209d434();
    void func_ov000_0209d518();
    void func_ov000_0209d54c();
    void func_ov000_0209d5c8();
    void func_ov000_0209d614();
    void func_ov000_0209d668();
    void func_ov000_0209d6ac(Vec3p *param1);

    void func_ov031_02103878();
};
