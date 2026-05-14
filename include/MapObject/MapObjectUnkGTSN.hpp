//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkGTSN : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkGTSN();

    /* 30 */ virtual ~MapObjectUnkGTSN() override;

    void func_ov079_02156e14(void);
    void func_ov079_02156f24(void);
    void func_ov079_02156f28(void);
};

class MapObjectProfileUnkGTSN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkGTSN();
    ~MapObjectProfileUnkGTSN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkGTSN *GetProfile();
};
