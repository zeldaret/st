//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkEXIT : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkEXIT();

    /* 4C */ virtual ~MapObjectUnkEXIT() override;

    void func_ov031_021005fc(void);
    void func_ov031_021006d4(void);
    void func_ov031_02100714(void);
};

class MapObjectProfileUnkEXIT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkEXIT();
    ~MapObjectProfileUnkEXIT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkEXIT *GetProfile();
};
