//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFRAI : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkFRAI();

    /* 30 */ virtual ~MapObjectUnkFRAI() override;

    void func_ov040_0212d81c(void);
    void func_ov040_0212d9a4(void);
};

class MapObjectProfileUnkFRAI : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFRAI();
    ~MapObjectProfileUnkFRAI();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFRAI *GetProfile();
};
