//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFRSH : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkFRSH();

    /* 30 */ virtual ~MapObjectUnkFRSH() override;

    void func_ov091_02167a90(void);
};

class MapObjectProfileUnkFRSH : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFRSH();
    ~MapObjectProfileUnkFRSH();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFRSH *GetProfile();
};
