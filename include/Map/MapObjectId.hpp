#pragma once

#include "types.h"

enum MapObjectId {
#define DEFINE_MAP_OBJECT_TYPE(id, name) MapObjectId_##name = id,
#include "Map/MapObjectTypeTable.inl"
#undef DEFINE_MAP_OBJECT_TYPE
};
