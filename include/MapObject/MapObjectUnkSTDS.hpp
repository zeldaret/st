//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTDS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSTDS();

    /* 30 */ virtual ~MapObjectUnkSTDS() override;

    void func_ov086_0215dfdc(void);
    void func_ov086_0215e094(void);
};

class MapObjectProfileUnkSTDS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTDS();
    ~MapObjectProfileUnkSTDS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTDS *GetProfile();
};
