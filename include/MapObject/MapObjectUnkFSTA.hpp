//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFSTA : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkFSTA();

    /* 30 */ virtual ~MapObjectUnkFSTA() override;

    void func_ov040_0212d450(void);
    void func_ov040_0212d64c(void);
};

class MapObjectProfileUnkFSTA : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFSTA();
    ~MapObjectProfileUnkFSTA();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFSTA *GetProfile();
};
