//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRST : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkDRST();

    /* 30 */ virtual ~MapObjectUnkDRST() override;

    void func_ov070_02148cf0(void);
    void func_ov070_02148d0c(void);
    void func_ov070_02148d2c(void);
    void func_ov070_02148d3c(void);
    void func_ov070_02148d5c(void);
    void func_ov070_02148df0(void);
    void func_ov070_02148dfc(void);
    void func_ov070_02148ec8(void);
    void func_ov070_02148ef0(void);
    void func_ov070_02148f1c(void);
    void func_ov070_02148f5c(void);
    void func_ov070_02148f88(void);
};

class MapObjectProfileUnkDRST : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRST();
    ~MapObjectProfileUnkDRST();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRST *GetProfile();
};
