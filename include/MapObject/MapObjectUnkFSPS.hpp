//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFSPS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkFSPS();

    /* 30 */ virtual ~MapObjectUnkFSPS() override;

    void func_ov070_02145200(void);
    void func_ov070_0214520c(void);
    void func_ov070_0214525c(void);
};

class MapObjectProfileUnkFSPS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFSPS();
    ~MapObjectProfileUnkFSPS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFSPS *GetProfile();
};
