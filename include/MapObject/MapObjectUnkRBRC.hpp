//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkRBRC : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkRBRC();

    /* 30 */ virtual ~MapObjectUnkRBRC() override;

    void func_ov090_021747a4(void);
    void func_ov090_021747b8(void);
};

class MapObjectProfileUnkRBRC : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkRBRC();
    ~MapObjectProfileUnkRBRC();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkRBRC *GetProfile();
};
