//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkRBMR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkRBMR();

    /* 30 */ virtual ~MapObjectUnkRBMR() override;

    void func_ov090_02174bf8(void);
    void func_ov090_02174c0c(void);
};

class MapObjectProfileUnkRBMR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkRBMR();
    ~MapObjectProfileUnkRBMR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkRBMR *GetProfile();
};
