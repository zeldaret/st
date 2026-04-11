//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTDBP : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTDBP();

    /* 4C */ virtual ~MapObjectUnkTDBP() override;

    void func_ov092_0216651c(void);
    void func_ov092_02166534(void);
};

class MapObjectProfileUnkTDBP : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTDBP();
    ~MapObjectProfileUnkTDBP();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTDBP *GetProfile();
};
