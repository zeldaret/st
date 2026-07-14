//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTMSN : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTMSN();

    /* 30 */ virtual ~MapObjectUnkTMSN() override;

    void func_ov028_021451e0(void);
    void func_ov028_021451f4(void);
    void func_ov028_02145300(void);
    void func_ov028_02145468(void);
    void func_ov028_02145474(void);
    void func_ov028_02145500(void);
    void func_ov028_02145540(void);
    void func_ov028_02145560(void);
    void func_ov028_021455c4(void);
};

class MapObjectProfileUnkTMSN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTMSN();
    ~MapObjectProfileUnkTMSN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTMSN *GetProfile();
};
