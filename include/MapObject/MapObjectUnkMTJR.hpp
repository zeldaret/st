//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMTJR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkMTJR();

    /* 30 */ virtual ~MapObjectUnkMTJR() override;

    void func_ov063_02160ffc(void);
    void func_ov063_02161070(void);
    void func_ov063_021611ac(void);
    void func_ov063_021611c0(void);
    void func_ov063_02161254(void);
    void func_ov063_02161288(void);
    void func_ov063_02161380(void);
};

class MapObjectProfileUnkMTJR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMTJR();
    ~MapObjectProfileUnkMTJR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMTJR *GetProfile();
};
