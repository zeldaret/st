//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFSFR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkFSFR();

    /* 30 */ virtual ~MapObjectUnkFSFR() override;

    void func_ov064_021591c4(void);
    void func_ov064_02159214(void);
};

class MapObjectProfileUnkFSFR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFSFR();
    ~MapObjectProfileUnkFSFR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFSFR *GetProfile();
};
