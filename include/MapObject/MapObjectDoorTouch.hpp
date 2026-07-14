#pragma once

#include "MapObject/MapObjectDoorClick.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectDoorTouch : public MapObjectDoorClick {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectDoorTouch();

    /* 00 */ virtual bool vfunc_00() override;
    /* 30 */ virtual ~MapObjectDoorTouch() override;
    /* 40 */ virtual void vfunc_40() override;
    /* 44 */ virtual void vfunc_44() override;
    /* 48 */ virtual void vfunc_48() override;
    /* 4C */ virtual void vfunc_4C() override;

    /* 10 */ virtual void vfunc2_10() override;
    /* 18 */ virtual void vfunc2_18() override;
};

class MapObjectProfileDoorTouch : public MapObjectProfile_Derived1 {
public:
    /* 00 (base) */

    MapObjectProfileDoorTouch();
    ~MapObjectProfileDoorTouch();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileDoorTouch *GetProfile();
};
