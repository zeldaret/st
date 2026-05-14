//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRDR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRDR();

    /* 30 */ virtual ~MapObjectUnkTRDR() override;

    void func_ov092_02167eb4(void);
    void func_ov092_02167ecc(void);
    void func_ov092_02167f6c(void);
    void func_ov092_02167fbc(void);
    void func_ov092_02167fc8(void);
};

class MapObjectProfileUnkTRDR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRDR();
    ~MapObjectProfileUnkTRDR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRDR *GetProfile();
};
