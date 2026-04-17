//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTBSD : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTBSD();

    /* 30 */ virtual ~MapObjectUnkTBSD() override;

    void func_ov092_02167c00(void);
    void func_ov092_02167c58(void);
    void func_ov092_02167c64(void);
    void func_ov092_02167cb4(void);
    void func_ov092_02167cc0(void);
};

class MapObjectProfileUnkTBSD : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTBSD();
    ~MapObjectProfileUnkTBSD();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTBSD *GetProfile();
};
