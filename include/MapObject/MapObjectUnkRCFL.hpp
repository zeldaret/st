//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkRCFL : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkRCFL();

    /* 30 */ virtual ~MapObjectUnkRCFL() override;

    void func_ov033_0211b908(void);
    void func_ov033_0211b938(void);
    void func_ov033_0211b9dc(void);
    void func_ov033_0211bc34(void);
    void func_ov033_0211bcac(void);
    void func_ov033_0211bcc4(void);
    void func_ov033_0211bcdc(void);
    void func_ov033_0211bcf4(void);
    void func_ov033_0211bcfc(void);
    void func_ov033_0211bdac(void);
};

class MapObjectProfileUnkRCFL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkRCFL();
    ~MapObjectProfileUnkRCFL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkRCFL *GetProfile();
};
