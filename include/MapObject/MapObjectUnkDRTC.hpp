#pragma once

#include "MapObject/MapObjectProfile.hpp"
#include "MapObject/MapObjectUnkDRCK.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRTC : public MapObjectUnkDRCK {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkDRTC();

    /* 00 */ virtual bool vfunc_00() override;
    /* 30 */ virtual ~MapObjectUnkDRTC() override;
    /* 40 */ virtual void vfunc_40() override;
    /* 44 */ virtual void vfunc_44() override;
    /* 48 */ virtual void vfunc_48() override;
    /* 4C */ virtual void vfunc_4C() override;

    /* 10 */ virtual void vfunc2_10() override;
    /* 18 */ virtual void vfunc2_18() override;
};

class MapObjectProfileUnkDRTC : public MapObjectProfile_Derived1 {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRTC();
    ~MapObjectProfileUnkDRTC();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRTC *GetProfile();
};
