//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFSFS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkFSFS();

    /* 4C */ virtual ~MapObjectUnkFSFS() override;

    void func_ov062_0215b458(void);
    void func_ov062_0215b4a8(void);
};

class MapObjectProfileUnkFSFS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFSFS();
    ~MapObjectProfileUnkFSFS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFSFS *GetProfile();
};
