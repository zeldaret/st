//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTBSF : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTBSF();

    /* 30 */ virtual ~MapObjectUnkTBSF() override;

    void func_ov026_0210a4a4(void);
    void func_ov026_0210a4f4(void);
    void func_ov026_0210a500(void);
    void func_ov026_0210a550(void);
    void func_ov026_0210a55c(void);
};

class MapObjectProfileUnkTBSF : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTBSF();
    ~MapObjectProfileUnkTBSF();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTBSF *GetProfile();
};
