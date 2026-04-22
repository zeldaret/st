#pragma once

#include "Actor/ActorRef.hpp"
#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "flags.h"
#include "global.h"
#include "types.h"
#include <nitro/math.h>

class MapObjectProfile;

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

class MapObject_10_Base {
public:
    /* 00 (vtable) */
    /* 04 */ u8 mUnk_04;
    /* 05 */ unk8 mUnk_05;
    /* 06 */ unk8 mUnk_06;
    /* 07 */ unk8 mUnk_07;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    MapObject_10_Base(); // func_ov000_0207c018

    // data_ov000_020b2854
    /* 00 */ virtual void vfunc_00()                 = 0;
    /* 04 */ virtual void vfunc_04()                 = 0;
    /* 08 */ virtual void vfunc_08()                 = 0;
    /* 0C */ virtual void vfunc_0C()                 = 0;
    /* 10 */ virtual void vfunc_10(Cylinder *param1) = 0;
    /* 14 */ virtual void vfunc_14()                 = 0;
    /* 18 */ virtual void vfunc_18(Vec3p *param1)    = 0;
    /* 1C */ virtual void vfunc_1C(Vec3p *param1)    = 0;
    /* 20 */
};

class MapObject_10 : public MapObject_10_Base {
public:
    /* 00 (vtable) */
    /* 0C */ Vec3p mUnk_0C;
    /* 18 */ Vec3p mUnk_18;
    /* 24 */

    MapObject_10() {}

    // data_ov031_02113f18
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10(Cylinder *param1);
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(Vec3p *param1);
    /* 1C */ virtual void vfunc_1C(Vec3p *param1);
    /* 20 */
};

class MapObject_20 {
public:
    /* 00 */ u16 mUnk_00[4];
    /* 08 */ u8 mUnk_08[2];
    /* 0A */ u16 mUnk_0A[2];
    /* 0E */ unk16 mUnk_0E;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ s16 mUnk_14;
    /* 16 */ bool mUnk_16;
    /* 16 */ unk8 mUnk_17;
    /* 18 */

    MapObject_20() {}

    void func_ov000_0209c7c8();

    static void func_ov000_0209c790(MapObjectId mapObjId, MapObjectProfile *pProfile);
    static void func_ov000_0209c7ac(MapObjectId mapObjId);
};

class MapObject : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ Vec3p mPos;
    /* 10 */ MapObject_10 *mUnk_10;
    /* 14 */ s16 mUnk_14;
    /* 16 */ s16 mUnk_16;
    /* 18 */ unk8 mUnk_18[2]; // related to Link walking to the map object when touched
    /* 1A */ unk8 mUnk_1A;
    /* 1B */ unk8 mUnk_1B;
    /* 1C */ MapObjFlags mFlags[1];
    /* 1E */ unk16 mUnk_1E;
    /* 20 */ MapObject_20 mUnk_20;
    /* 38 */ unk8 mUnk_38;
    /* 39 */ unk8 mUnk_39;
    /* 3A */ Vec2b mUnk_3A;
    /* 3C */ MapObjectProfile *mpProfile;
    /* 40 */

    // data_ov000_020b3590
    /* 00 */ virtual bool vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(s8 *param1, s8 param2);
    /* 1C */ virtual bool vfunc_1C();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual unk32 vfunc_28();
    /* 2C */ virtual bool vfunc_2C(Vec3p *param1);
    /* 30 */ virtual ~MapObject();
    /* 38 */

    u16 GetDirection() {
        return (u16) (this->mUnk_14 + DEG_TO_ANG(45)) / DEG_TO_ANG(90);
    }

    bool IsOrientedVertically() {
        bool isVertical = true;
        u16 direction   = GetDirection();

        if (direction != 3 && direction != 1) {
            isVertical = false;
        }

        return isVertical;
    }

    MapObject();

    MapObjectId GetMapObjectId();
    void func_01fff590(unk32 param2);

    bool func_ov000_0209d114();
    bool func_ov000_0209d12c();
    bool func_ov000_0209d144(Vec2s *param1, unk32 param2, unk32 param3);
    void func_ov000_0209d274(unk32 param1);
    bool func_ov000_0209d29c(unk32 param1);
    void func_ov000_0209d2c4(unk32 param1, unk32 param2);
    void func_ov000_0209d2f0(unk32 param1, unk32 param2, Vec2b *param3);
    void func_ov000_0209d3b4(unk32 param1, q20 size);
    void func_ov000_0209d434(s8 *param1, UnkStruct_ov019_020d24c8_28_258_00 *param2, unk32 param3);
    void func_ov000_0209d518(unk32 param1, unk32 param2, unk32 param3, u8 param4);
    void func_ov000_0209d5c8(ActorRef ref);
    void func_ov000_0209d614(unk32 param1);
    bool func_ov000_0209d668();
    void func_ov000_0209d6ac(Vec3p *param1);

    void func_ov031_02103878();

    static void func_ov000_0209d0bc(Vec2b *param1, MapObject *thisx);
    static void func_ov000_0209d22c(unk16 *param1, MapObject *thisx, unk32 param2);
    static void func_ov000_0209d54c(void *param1, MapObject *thisx, unk32 param2, Vec3p *param3, unk32 param4, unk32 param5);
};
