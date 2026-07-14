//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkRBBL : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkRBBL();

    /* 30 */ virtual ~MapObjectUnkRBBL() override;

    void func_ov029_021469ec(void);
    void func_ov029_02146a00(void);
};

class MapObjectProfileUnkRBBL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkRBBL();
    ~MapObjectProfileUnkRBBL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkRBBL *GetProfile();
};
