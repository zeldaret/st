//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTSS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSTSS();

    /* 30 */ virtual ~MapObjectUnkSTSS() override;

    void func_ov080_0215e818(void);
    void func_ov080_0215e8c0(void);
    void func_ov080_0215e914(void);
};

class MapObjectProfileUnkSTSS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTSS();
    ~MapObjectProfileUnkSTSS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTSS *GetProfile();
};
