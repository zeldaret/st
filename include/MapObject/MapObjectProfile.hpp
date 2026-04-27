#pragma once

#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectProfile_Derived2_20.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_ov000_020b4f84.hpp"
#include "profile.hpp"
#include "types.h"

class MapObject;
class MapObject_20;
class MapObjectProfile_Derived2_20;

class MapObjectProfile : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ unk8 mUnk_04[2];
    /* 06 */ s8 mUnk_06;
    /* 07 */ unk8 mUnk_07;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk16 mUnk_0C;
    /* 0E */ unk8 mUnk_0E;
    /* 0F */ u8 mUnk_0F;
    /* 10 */ MapObjectId mMapObjId;
    /* 14 */ MapObjectId mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk8 mUnk_1C;
    /* 1D */ unk8 mUnk_1D;
    /* 1E */ u16 mUnk_1E;
    /* 20 */

    MapObjectProfile(MapObjectId mapObjId); // func_ov000_0209c828
    ~MapObjectProfile();

    // data_ov000_020b3524
    /* 00 */ virtual MapObject *Create() = 0;
    /* 04 */ virtual MapObjectProfile_Derived2_20 *vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */

    unk32 func_ov000_0209c8e4(MapObject_20 *param1);
    void func_ov000_0209c95c();
    void func_ov000_0209c970();

    static unk32 func_ov000_0209c820();
    static void func_ov000_0209c8ec(MapObjectProfile *thisx);
};

class MapObjectProfile_Derived1 : public MapObjectProfile {
public:
    /* 00 (base) */
    /* 20 */ MapObjectProfile_Derived2_20 *mUnk_20[16];
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk16 mUnk_64;
    /* 66 */ unk16 mUnk_66;
    /* 68 */

    MapObjectProfile_Derived1(MapObjectId mapObjId, unk32 param2, unk32 param3); // func_ov000_0209cb4c

    // data_ov000_020b3540
    /* 04 */ virtual MapObjectProfile_Derived2_20 *vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual ~MapObjectProfile_Derived1();
    /* 1C */ virtual MapObjectProfile_Derived2_20 *vfunc_1C(unk32 param1);

    void func_ov000_0209ccd8(unk32 param1, u32 param2);
};

class MapObjectProfile_Derived2 : public MapObjectProfile {
public:
    /* 00 (base) */
    /* 20 */ MapObjectProfile_Derived2_20 mUnk_20;
    /* D4 */

    MapObjectProfile_Derived2(MapObjectId mapObjId1, MapObjectId mapObjId2); // func_ov000_0209c9a8
    ~MapObjectProfile_Derived2();

    // data_ov000_020b3508
    /* 04 */ virtual MapObjectProfile_Derived2_20 *vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual void vfunc_10() override;
};

class MapObjectProfile_Derived3 : public MapObjectProfile {
public:
    /* 00 (base) */
    /* 20 */ MapObjectProfile_Derived2_20 *mUnk_20;
    /* 24 */

    MapObjectProfile_Derived3(MapObjectId mapObjId1, MapObjectId mapObjId2); // func_ov000_0209ca88
    ~MapObjectProfile_Derived3() {}

    // data_ov000_020b34ec
    /* 04 */ virtual MapObjectProfile_Derived2_20 *vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
};

class MapObjectProfile_Derived4 : public MapObjectProfile_Derived2 {
    /* 00 (base) */
    /* D4 */

    MapObjectProfile_Derived4(MapObjectId mapObjId1, MapObjectId mapObjId2); // func_ov000_0209c9a8
    ~MapObjectProfile_Derived4();

    // data_ov000_020b34d0
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
};

typedef MapObjectProfile *(*GetMapObjectProfile)();
