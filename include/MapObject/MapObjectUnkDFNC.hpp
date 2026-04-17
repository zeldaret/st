//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDFNC : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkDFNC();

    /* 30 */ virtual ~MapObjectUnkDFNC() override;

    void func_ov060_02160664(void);
    void func_ov060_021606b4(void);
    void func_ov060_021608c4(void);
    void func_ov060_02160924(void);
    void func_ov060_02160968(void);
};

class MapObjectProfileUnkDFNC : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDFNC();
    ~MapObjectProfileUnkDFNC();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDFNC *GetProfile();
};
