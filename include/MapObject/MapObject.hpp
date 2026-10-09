#pragma once

#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "Physics/Cylinder.hpp"
#include "RefStruct.hpp"
#include "Render/ModelRender.hpp"
#include "System/SysNew.hpp"
#include "flags.h"
#include "global.h"
#include "math.hpp"
#include "types.h"

class MapObjectProfile;
class UnkStruct_027e09bc_0C;

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
    /* 08 */ u32 mUnk_08;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */

    MapObject_10_Base(); // func_ov000_0207c018

    // data_ov000_020b2854
    /* 00 */ virtual void vfunc_00()                 = 0;
    /* 04 */ virtual void vfunc_04()                 = 0;
    /* 08 */ virtual void vfunc_08()                 = 0;
    /* 0C */ virtual void vfunc_0C()                 = 0;
    /* 10 */ virtual void vfunc_10(Cylinder *param1) = 0;
    /* 14 */ virtual void vfunc_14()                 = 0;
    /* 18 */ virtual void vfunc_18(VecFx32 *param1)  = 0;
    /* 1C */ virtual void vfunc_1C(VecFx32 *param1)  = 0;
    /* 20 */
};

class MapObject_10 : public MapObject_10_Base {
public:
    /* 00 (vtable) */
    /* 18 */ VecFx32 mUnk_18;
    /* 24 */

    MapObject_10() {}

    // data_ov000_020b36b8
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10(Cylinder *param1);
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(VecFx32 *param1);
    /* 1C */ virtual void vfunc_1C(VecFx32 *param1);
    /* 20 */
};

class MapObject_10_Derived1 : public MapObject_10 {
public:
    MapObject_10_Derived1() {}
};

class MapObject_20 {
public:
    /* 00 */ u16 mParams[4]; // parameters
    /* 08 */ u8 mUnk_08[2];
    /* 0A */ u16 mUnk_0A[2];
    /* 0E */ unk16 mUnk_0E;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ s16 mUnk_14;
    /* 16 */ bool mUnk_16;
    /* 17 */ s8 mUnk_17;
    /* 18 */

    void Init();

    static void func_ov000_0209c790(MapObjectId mapObjId, MapObjectProfile *pProfile);
    static void func_ov000_0209c7ac(MapObjectId mapObjId);
};

typedef s16 MapObjState;
#define MapObjState_None -1

class MapObject {
public:
    /* 00 (vtable) */
    /* 04 */ VecFx32 mPos;
    /* 10 */ MapObject_10_Base *mUnk_10;
    /* 14 */ UnkAngleStruct mAngle;
    /* 16 */ MapObjState mState;
    /* 18 */ unk8 mUnk_18[2]; // related to Link walking to the map object when touched
    /* 1A */ unk8 mUnk_1A;
    /* 1B */ unk8 mUnk_1B;
    /* 1C */ MapObjFlags mFlags[1];
    /* 1E */ unk16 mUnk_1E;
    /* 20 */ MapObject_20 mUnk_20; // parameters
    /* 38 */ RefStruct mRef;
    /* 3C */ MapObjectProfile *mpProfile;
    /* 40 */

    // data_ov000_020b3590
    /* 00 */ virtual bool Init();
    /* 04 */ virtual void Setup();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14(unk32 param1);
    /* 18 */ virtual void vfunc_18(s8 *param1);
    /* 1C */ virtual bool vfunc_1C(RefStruct param1, unk32 param2, VecFx32 *param3);
    /* 20 */ virtual void vfunc_20(unk32 param1);
    /* 24 */ virtual void vfunc_24(MapObject *param1, VecFx32 param2);
    /* 28 */ virtual unk32 vfunc_28(unk32 param1, unk32 param2, unk32 param3);
    /* 2C */ virtual bool vfunc_2C(VecFx32 *param1);
    /* 30 */ virtual ~MapObject();
    /* 38 */

    u16 GetDirection() {
        return (u16) (this->mAngle.angle_s + DEG_TO_ANG(45)) / DEG_TO_ANG(90);
    }

    bool IsOrientedVertically() {
        bool isVertical = true;
        u16 direction   = GetDirection();

        if (direction != 3 && direction != 1) {
            isVertical = false;
        }

        return isVertical;
    }

    void Kill(void) {
        UNSET_FLAG(this->mFlags, MapObjFlag_Alive);
    }

    // clang-format off
    /* x & 0x00000001 */ const bool IsAlive() { return GET_FLAG(this->mFlags, MapObjFlag_Alive); }
    /* x & 0x00000002 */ const bool IsFlag1() { return GET_FLAG(this->mFlags, MapObjFlag_1); }
    /* x & 0x00000004 */ const bool IsFlag2() { return GET_FLAG(this->mFlags, MapObjFlag_2); }
    /* x & 0x00000008 */ const bool IsFlag3() { return GET_FLAG(this->mFlags, MapObjFlag_3); }
    /* x & 0x00000010 */ const bool IsFlag4() { return GET_FLAG(this->mFlags, MapObjFlag_4); }
    /* x & 0x00000020 */ const bool IsFlag5() { return GET_FLAG(this->mFlags, MapObjFlag_5); }
    /* x & 0x00000040 */ const bool IsFlag6() { return GET_FLAG(this->mFlags, MapObjFlag_6); }
    /* x & 0x00000080 */ const bool IsFlag7() { return GET_FLAG(this->mFlags, MapObjFlag_7); }
    /* x & 0x00000100 */ const bool IsFlag8() { return GET_FLAG(this->mFlags, MapObjFlag_8); }
    /* x & 0x00000200 */ const bool IsFlag9() { return GET_FLAG(this->mFlags, MapObjFlag_9); }
    /* x & 0x00000400 */ const bool IsFlag10() { return GET_FLAG(this->mFlags, MapObjFlag_10); }
    /* x & 0x00000800 */ const bool IsFlag11() { return GET_FLAG(this->mFlags, MapObjFlag_11); }
    /* x & 0x00001000 */ const bool IsFlag12() { return GET_FLAG(this->mFlags, MapObjFlag_12); }
    /* x & 0x00002000 */ const bool IsFlag13() { return GET_FLAG(this->mFlags, MapObjFlag_13); }
    /* x & 0x00004000 */ const bool IsFlag14() { return GET_FLAG(this->mFlags, MapObjFlag_14); }
    /* x & 0x00008000 */ const bool IsFlag15() { return GET_FLAG(this->mFlags, MapObjFlag_15); }
    /* x & 0x00010000 */ const bool IsFlag16() { return GET_FLAG(this->mFlags, MapObjFlag_16); }
    /* x & 0x00020000 */ const bool IsFlag17() { return GET_FLAG(this->mFlags, MapObjFlag_17); }
    /* x & 0x00040000 */ const bool IsFlag18() { return GET_FLAG(this->mFlags, MapObjFlag_18); }
    /* x & 0x00080000 */ const bool IsFlag19() { return GET_FLAG(this->mFlags, MapObjFlag_19); }
    /* x & 0x00100000 */ const bool IsFlag20() { return GET_FLAG(this->mFlags, MapObjFlag_20); }
    /* x & 0x00200000 */ const bool IsFlag21() { return GET_FLAG(this->mFlags, MapObjFlag_21); }
    /* x & 0x00400000 */ const bool IsFlag22() { return GET_FLAG(this->mFlags, MapObjFlag_22); }
    /* x & 0x00800000 */ const bool IsFlag23() { return GET_FLAG(this->mFlags, MapObjFlag_23); }
    /* x & 0x01000000 */ const bool IsFlag24() { return GET_FLAG(this->mFlags, MapObjFlag_24); }
    /* x & 0x02000000 */ const bool IsFlag25() { return GET_FLAG(this->mFlags, MapObjFlag_25); }
    /* x & 0x04000000 */ const bool IsFlag26() { return GET_FLAG(this->mFlags, MapObjFlag_26); }
    /* x & 0x08000000 */ const bool IsFlag27() { return GET_FLAG(this->mFlags, MapObjFlag_27); }
    /* x & 0x10000000 */ const bool IsFlag28() { return GET_FLAG(this->mFlags, MapObjFlag_28); }
    /* x & 0x20000000 */ const bool IsFlag29() { return GET_FLAG(this->mFlags, MapObjFlag_29); }
    /* x & 0x40000000 */ const bool IsFlag30() { return GET_FLAG(this->mFlags, MapObjFlag_30); }
    /* x & 0x80000000 */ const bool IsFlag31() { return GET_FLAG(this->mFlags, MapObjFlag_31); }
    // clang-format on

    MapObject();

    // itcm
    MapObjectId GetMapObjectId();
    unk32 func_01fff590(unk32 param2);

    // overlay 0
    bool func_ov000_0209d114();
    bool func_ov000_0209d12c();
    bool func_ov000_0209d144(Vec2s *param1, unk32 param2, UnkStruct_027e09bc_0C *param3);
    void func_ov000_0209d274(unk32 param1);
    bool func_ov000_0209d29c(unk32 param1);
    void func_ov000_0209d2c4(unk32 param1, bool param2);
    void func_ov000_0209d2f0(unk32 param1, unk32 param2, Vec2bCpp *param3);
    unk32 func_ov000_0209d3b4(unk32 param1, fx32 size);
    void func_ov000_0209d434(s8 *param1, UnkStruct_ov019_020d24c8_28_258_00 *param2, unk32 param3);
    void func_ov000_0209d518(VecFx32 *param1, unk32 param2, unk32 param3, u8 param4);
    void func_ov000_0209d5c8(RefStruct ref);
    void func_ov000_0209d614(unk32 param1);
    bool func_ov000_0209d668();
    void func_ov000_0209d6ac(VecFx32 *param1);

    static void func_ov000_0209d0bc(Vec2bCpp *param1, MapObject *thisx);
    static void func_ov000_0209d22c(unk16 *param1, MapObject *thisx, unk32 param2);
    static void func_ov000_0209d54c(RefStruct *param1, MapObject *thisx, u16 param2, const VecFx32 *pPos, s16 param3,
                                    u16 param4);
};
