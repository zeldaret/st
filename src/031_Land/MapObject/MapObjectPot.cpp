#include "MapObject/MapObjectPot.hpp"
#include "System/SysNew.hpp"

unk32 data_ov031_02118010[0x8];

DECL_PROFILE(MapObjectProfilePot);

MapObject *MapObjectProfilePot::Create() {
    return new(HeapIndex_ITCM) MapObjectPot();
}

MapObjectProfilePot::MapObjectProfilePot() :
    MapObjectProfile_Derived2(MapObjectId_TSUB, MapObjectId_TSUB) {}

MapObjectPot::MapObjectPot() {}

// non-matching
void MapObjectPot::vfunc_04() {}
// non-matching
bool MapObjectPot::vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) {}
// non-matching
void MapObjectPot::vfunc_48() {}
// non-matching
void MapObjectPot::vfunc_14() {}
// non-matching
void MapObjectPot::vfunc_54() {}
// non-matching
void MapObjectPot::vfunc_24() {}
// non-matching
void MapObjectPot::vfunc_3C() {}
// non-matching
void MapObjectPot::vfunc_40() {}

MapObjectPot::~MapObjectPot() {}
MapObjectProfilePot::~MapObjectProfilePot() {}
