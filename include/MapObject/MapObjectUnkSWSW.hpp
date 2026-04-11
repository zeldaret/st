//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWSW : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkSWSW();

    /* 4C */ virtual ~MapObjectUnkSWSW() override;

    void func_ov032_02120f78(void);
    void func_ov032_02120fe4(void);
    void func_ov032_021210a0(void);
    void func_ov032_021211c8(void);
    void func_ov032_021211dc(void);
    void func_ov032_0212141c(void);
    void func_ov032_021218d0(void);
    void func_ov032_02121b48(void);
    void func_ov032_02121b90(void);
    void func_ov032_02121c18(void);
    void func_ov032_02121d70(void);
    void func_ov032_02121dc8(void);
    void func_ov032_02121e94(void);
};

class MapObjectProfileUnkSWSW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSWSW();
    ~MapObjectProfileUnkSWSW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSWSW *GetProfile();
};
