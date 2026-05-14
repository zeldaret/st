//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkRBSR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkRBSR();

    /* 30 */ virtual ~MapObjectUnkRBSR() override;

    void func_ov028_02146610(void);
    void func_ov028_02146624(void);
};

class MapObjectProfileUnkRBSR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkRBSR();
    ~MapObjectProfileUnkRBSR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkRBSR *GetProfile();
};
