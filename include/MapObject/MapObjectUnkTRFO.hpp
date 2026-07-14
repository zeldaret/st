//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRFO : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRFO();

    /* 30 */ virtual ~MapObjectUnkTRFO() override;

    void func_ov027_021424c4(void);
    void func_ov027_021425b0(void);
    void func_ov027_0214261c(void);
    void func_ov027_02142634(void);
    void func_ov027_02142674(void);
    void func_ov027_02142694(void);
    void func_ov027_021426b4(void);
};

class MapObjectProfileUnkTRFO : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRFO();
    ~MapObjectProfileUnkTRFO();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRFO *GetProfile();
};
