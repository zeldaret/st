//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRBL : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRBL();

    /* 30 */ virtual ~MapObjectUnkTRBL() override;

    void func_ov029_021462dc(void);
    void func_ov029_0214643c(void);
    void func_ov029_02146544(void);
    void func_ov029_021466b0(void);
    void func_ov029_021466e8(void);
    void func_ov029_02146758(void);
    void func_ov029_02146818(void);
};

class MapObjectProfileUnkTRBL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRBL();
    ~MapObjectProfileUnkTRBL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRBL *GetProfile();
};
