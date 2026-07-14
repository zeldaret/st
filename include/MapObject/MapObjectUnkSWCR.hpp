//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWCR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSWCR();

    /* 30 */ virtual ~MapObjectUnkSWCR() override;

    void func_ov063_021614f8(void);
    void func_ov063_0216150c(void);
    void func_ov063_0216151c(void);
    void func_ov063_0216152c(void);
    void func_ov063_0216153c(void);
    void func_ov063_021615c4(void);
    void func_ov063_02161638(void);
    void func_ov063_0216171c(void);
    void func_ov063_021618c8(void);
    void func_ov063_021618f8(void);
    void func_ov063_02161af4(void);
    void func_ov063_02161b08(void);
    void func_ov063_021620c0(void);
};

class MapObjectProfileUnkSWCR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSWCR();
    ~MapObjectProfileUnkSWCR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSWCR *GetProfile();
};
