//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRSW : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRSW();

    /* 4C */ virtual ~MapObjectUnkTRSW() override;

    void func_ov034_02120f68(void);
    void func_ov034_02121014(void);
    void func_ov034_021210b4(void);
    void func_ov034_0212121c(void);
    void func_ov034_02121270(void);
    void func_ov034_02121384(void);
    void func_ov034_021213b8(void);
    void func_ov034_0212149c(void);
    void func_ov034_021214fc(void);
    void func_ov034_021215a4(void);
    void func_ov034_021215e8(void);
    void func_ov034_0212162c(void);
    void func_ov034_02121674(void);
};

class MapObjectProfileUnkTRSW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRSW();
    ~MapObjectProfileUnkTRSW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRSW *GetProfile();
};
