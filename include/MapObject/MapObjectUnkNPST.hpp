//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkNPST : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkNPST();

    /* 30 */ virtual ~MapObjectUnkNPST() override;

    void func_ov090_0217397c(void);
    void func_ov090_02173990(void);
    void func_ov090_02173994(void);
    void func_ov090_021739a8(void);
    void func_ov090_021739bc(void);
    void func_ov090_021739d0(void);
    void func_ov090_02173a50(void);
    void func_ov090_02173d60(void);
    void func_ov090_02173e2c(void);
    void func_ov090_02173f5c(void);
    void func_ov090_02174068(void);
    void func_ov090_02174100(void);
    void func_ov090_021741a8(void);
    void func_ov090_02174278(void);
    void func_ov090_021743d0(void);
    void func_ov090_0217443c(void);
    void func_ov090_0217448c(void);
    void func_ov090_02174500(void);
    void func_ov090_02174578(void);
    void func_ov090_02174594(void);
    void func_ov090_021745b0(void);
    void func_ov090_021745e0(void);
    void func_ov090_02174654(void);
};

class MapObjectProfileUnkNPST : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkNPST();
    ~MapObjectProfileUnkNPST();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkNPST *GetProfile();
};
