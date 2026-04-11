//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkETNS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkETNS();

    /* 4C */ virtual ~MapObjectUnkETNS() override;

    void func_ov028_0214568c(void);
};

class MapObjectProfileUnkETNS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkETNS();
    ~MapObjectProfileUnkETNS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkETNS *GetProfile();
};
