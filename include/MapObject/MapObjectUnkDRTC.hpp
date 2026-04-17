//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRTC : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkDRTC();

    /* 30 */ virtual ~MapObjectUnkDRTC() override;

    void func_ov031_021002fc(void);
    void func_ov031_02100314(void);
    void func_ov031_021003a0(void);
    void func_ov031_021003c8(void);
    void func_ov031_0210040c(void);
    void func_ov031_02100410(void);
    void func_ov031_02100414(void);
};

class MapObjectProfileUnkDRTC : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRTC();
    ~MapObjectProfileUnkDRTC();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRTC *GetProfile();
};
