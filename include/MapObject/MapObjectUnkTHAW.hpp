//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTHAW : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTHAW();

    /* 30 */ virtual ~MapObjectUnkTHAW() override;

    void func_ov094_021755ec(void);
    void func_ov094_021756ac(void);
    void func_ov094_021757a0(void);
    void func_ov094_021757ac(void);
    void func_ov094_0217580c(void);
    void func_ov094_02175834(void);
    void func_ov094_021758b0(void);
    void func_ov094_02175910(void);
    void func_ov094_02175938(void);
};

class MapObjectProfileUnkTHAW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTHAW();
    ~MapObjectProfileUnkTHAW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTHAW *GetProfile();
};
