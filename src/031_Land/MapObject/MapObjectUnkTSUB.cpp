#include "MapObject/MapObjectUnkTSUB.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkTSUB);

MapObject *MapObjectProfileUnkTSUB::Create() {
    return new(HeapIndex_2) MapObjectUnkTSUB();
}

MapObjectProfileUnkTSUB::MapObjectProfileUnkTSUB() :
    MapObjectProfile(MapObjectId_TSUB) {}

MapObjectUnkTSUB::MapObjectUnkTSUB() {}

// non-matching
void MapObjectUnkTSUB::func_ov031_02105088() {}
// non-matching
void MapObjectUnkTSUB::func_ov031_021050b4() {}
// non-matching
void MapObjectUnkTSUB::func_ov031_021051d4() {}
// non-matching
void MapObjectUnkTSUB::func_ov031_021052cc() {}
// non-matching
void MapObjectUnkTSUB::func_ov031_02105310() {}
// non-matching
void MapObjectUnkTSUB::func_ov031_02105348() {}
// non-matching
void MapObjectUnkTSUB::func_ov031_021053b4() {}
// non-matching
void MapObjectUnkTSUB::func_ov031_021053fc() {}

MapObjectUnkTSUB::~MapObjectUnkTSUB() {}
MapObjectProfileUnkTSUB::~MapObjectProfileUnkTSUB() {}
