#include "MapObject/MapObjectPot.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfilePot);

MapObject *MapObjectProfilePot::Create() {
    return new(HeapIndex_2) MapObjectPot();
}

MapObjectProfilePot::MapObjectProfilePot() :
    MapObjectProfile(MapObjectId_TSUB) {}

MapObjectPot::MapObjectPot() {}

// non-matching
void MapObjectPot::func_ov031_02105088() {}
// non-matching
void MapObjectPot::func_ov031_021050b4() {}
// non-matching
void MapObjectPot::func_ov031_021051d4() {}
// non-matching
void MapObjectPot::func_ov031_021052cc() {}
// non-matching
void MapObjectPot::func_ov031_02105310() {}
// non-matching
void MapObjectPot::func_ov031_02105348() {}
// non-matching
void MapObjectPot::func_ov031_021053b4() {}
// non-matching
void MapObjectPot::func_ov031_021053fc() {}

MapObjectPot::~MapObjectPot() {}
MapObjectProfilePot::~MapObjectProfilePot() {}
