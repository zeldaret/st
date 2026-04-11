#pragma once

#include "Actor/ActorProfile.hpp"
#include "Actor/ActorRef.hpp"
#include "Map/MapObjectId.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "flags.h"
#include "global.h"
#include "nitro/math.h"
#include "types.h"

class MapObject : public SysObject {
public:
    /* 00 (vtable) */

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual bool vfunc_04();
    /* 08 */ virtual unk16 vfunc_08();
    /* 0c */ virtual unk8 vfunc_0c();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual bool vfunc_18();
    /* 1c */ virtual void vfunc_1c();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28();
    /* 2c */ virtual void vfunc_2c();
    /* 30 */ virtual ~MapObject();
    /* 34 */

    MapObject();
};
