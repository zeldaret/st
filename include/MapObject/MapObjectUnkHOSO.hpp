//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkHOSO : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkHOSO();

    /* 30 */ virtual ~MapObjectUnkHOSO() override;

    void func_ov065_02159d10(void);
    void func_ov065_02159d60(void);
    void func_ov065_02159d68(void);
};

class MapObjectProfileUnkHOSO : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkHOSO();
    ~MapObjectProfileUnkHOSO();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkHOSO *GetProfile();
};
