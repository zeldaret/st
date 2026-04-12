//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBLRB : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkBLRB();

    /* 30 */ virtual ~MapObjectUnkBLRB() override;

    void func_ov070_021454b8(void);
    void func_ov070_021454cc(void);
    void func_ov070_02145640(void);
    void func_ov070_02145720(void);
    void func_ov070_021457e4(void);
    void func_ov070_02145804(void);
    void func_ov070_021458fc(void);
    void func_ov070_02145bd4(void);
    void func_ov070_02145bfc(void);
};

class MapObjectProfileUnkBLRB : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBLRB();
    ~MapObjectProfileUnkBLRB();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBLRB *GetProfile();
};
