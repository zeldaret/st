//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRFV : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRFV();

    /* 4C */ virtual ~MapObjectUnkTRFV() override;

    void func_ov027_021420d4(void);
    void func_ov027_021421c0(void);
    void func_ov027_021422d0(void);
    void func_ov027_02142308(void);
    void func_ov027_02142320(void);
    void func_ov027_02142360(void);
    void func_ov027_02142380(void);
    void func_ov027_021423a0(void);
};

class MapObjectProfileUnkTRFV : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRFV();
    ~MapObjectProfileUnkTRFV();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRFV *GetProfile();
};
