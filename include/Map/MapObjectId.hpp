#pragma once

#include "types.h"

typedef u32 MapObjectId;
enum MapObjectId_ {
    MapObjectId_None = 0,
#define DEFINE_MAP_OBJECT_TYPE(id, name) MapObjectId_##name = id,
#include "Map/MapObjectTable.inl"
#undef DEFINE_MAP_OBJECT_TYPE
};
