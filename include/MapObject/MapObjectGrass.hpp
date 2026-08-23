#pragma once

#include "Actor/ActorUnkSCCN.hpp"
#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "MapObject_10_Pot.hpp"
#include "global.h"
#include "types.h"

enum MapObjGrassState_ {
    MapObjGrassState_0,
    MapObjGrassState_1,
    MapObjGrassState_2,
    MapObjGrassState_3,
    MapObjGrassState_MAX
};

class MapObjectProfilePot_Base : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */
    /* D4 */ MapObject_10_Pot mUnk_D4;

    MapObjectProfilePot_Base(MapObjectId param1, MapObjectId param2) :
        MapObjectProfile_Derived2(param1, param2) {}
};

class MapObjectGrass : public MapObject {
public:
    /* 00 (base) */
    /* 40 */ VecFx32 mUnk_40[2];
    /* 58 */ u16 mUnk_58;
    /* 5C */ fx32 mUnk_5C;
    /* 60 */ unk16 mUnk_60;
    /* 62 */ unk16 mUnk_62;
    /* 64 */ unk32 mUnk_64;
    /* 68 */

    MapObjectGrass();

    /* 00 */ virtual bool vfunc_00() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 1C */ virtual bool vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) override;
    /* 38 */ virtual bool vfunc_38(MapObjState state, unk32 param2);
    /* 3C */ virtual void vfunc_3C(VecFx32 *param1);

    bool func_ov031_021016b4();
    bool func_ov031_02101778();
    void func_ov031_021018a4(unk16 param1);
    unk32 func_ov031_02101950();
    void func_ov031_02101968(unk32 param1);
    void func_ov031_02101978(unk32 param1, VecFx32 *param2);
};

class MapObjectProfileGrass : public MapObjectProfilePot_Base {
public:
    /* 00 (base) */

    MapObjectProfileGrass();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileGrass *GetProfile();
};
