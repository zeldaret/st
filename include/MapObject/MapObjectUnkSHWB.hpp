//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSHWB : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSHWB();

    /* 30 */ virtual ~MapObjectUnkSHWB() override;

    void func_ov083_0215c8c8(void);
    void func_ov083_0215ca68(void);
    void func_ov083_0215ca74(void);
    void func_ov083_0215ca80(void);
    void func_ov083_0215cb08(void);
    void func_ov083_0215cb20(void);
    void func_ov083_0215cb34(void);
    void func_ov083_0215cc04(void);
};

class MapObjectProfileUnkSHWB : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSHWB();
    ~MapObjectProfileUnkSHWB();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSHWB *GetProfile();
};
