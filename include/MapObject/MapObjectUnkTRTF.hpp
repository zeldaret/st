//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRTF : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRTF();

    /* 30 */ virtual ~MapObjectUnkTRTF() override;

    void func_ov026_0210e398(void);
    void func_ov026_0210e3e4(void);
    void func_ov026_0210e478(void);
};

class MapObjectProfileUnkTRTF : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRTF();
    ~MapObjectProfileUnkTRTF();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRTF *GetProfile();
};
