#pragma once

#include "Map/MapObjectId.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "profile.hpp"
#include "types.h"

class MapObject;

class MapObjectProfile : public SysObject {
public:
    /* 00 (vtable) */

    MapObjectProfile(MapObjectId actorId);

    /* 00 */ virtual MapObject *Create() = 0;
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0c */ virtual void vfunc_0c();
    /* 10 */ virtual void vfunc_10();
    /* 14 */
};

typedef MapObjectProfile *(*GetMapObjectProfile)();
