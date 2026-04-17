//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTMFR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTMFR();

    /* 30 */ virtual ~MapObjectUnkTMFR() override;

    void func_ov027_02141ab0(void);
    void func_ov027_02141ac4(void);
    void func_ov027_02141bd0(void);
    void func_ov027_02141cb8(void);
    void func_ov027_02141cc0(void);
    void func_ov027_02141cc8(void);
    void func_ov027_02141ccc(void);
    void func_ov027_02141e2c(void);
    void func_ov027_02141e38(void);
    void func_ov027_02141e44(void);
    void func_ov027_02141ed0(void);
    void func_ov027_02141f10(void);
    void func_ov027_02141f30(void);
    void func_ov027_02141f94(void);
    void func_ov027_02141fc4(void);
};

class MapObjectProfileUnkTMFR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTMFR();
    ~MapObjectProfileUnkTMFR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTMFR *GetProfile();
};
