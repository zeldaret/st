//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTMWT : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTMWT();

    /* 30 */ virtual ~MapObjectUnkTMWT() override;

    void func_ov029_021420c0(void);
    void func_ov029_021421a8(void);
    void func_ov029_021421c8(void);
    void func_ov029_021421e8(void);
};

class MapObjectProfileUnkTMWT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTMWT();
    ~MapObjectProfileUnkTMWT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTMWT *GetProfile();
};
