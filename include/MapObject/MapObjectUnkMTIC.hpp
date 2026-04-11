//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMTIC : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkMTIC();

    /* 4C */ virtual ~MapObjectUnkMTIC() override;

    void func_ov065_02159f08(void);
    void func_ov065_02159f54(void);
    void func_ov065_02159f58(void);
};

class MapObjectProfileUnkMTIC : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMTIC();
    ~MapObjectProfileUnkMTIC();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMTIC *GetProfile();
};
