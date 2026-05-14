//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkETSD : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkETSD();

    /* 30 */ virtual ~MapObjectUnkETSD() override;

    void func_ov026_0210edcc(void);
    void func_ov026_0210f02c(void);
    void func_ov026_0210f034(void);
    void func_ov026_0210f098(void);
    void func_ov026_0210f0ac(void);
};

class MapObjectProfileUnkETSD : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkETSD();
    ~MapObjectProfileUnkETSD();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkETSD *GetProfile();
};
