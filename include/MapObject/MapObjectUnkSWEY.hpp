//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWEY : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSWEY();

    /* 30 */ virtual ~MapObjectUnkSWEY() override;

    void func_ov070_02147690(void);
    void func_ov070_0214784c(void);
    void func_ov070_0214796c(void);
    void func_ov070_02147b48(void);
    void func_ov070_02147c10(void);
    void func_ov070_02147ca8(void);
};

class MapObjectProfileUnkSWEY : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSWEY();
    ~MapObjectProfileUnkSWEY();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSWEY *GetProfile();
};
