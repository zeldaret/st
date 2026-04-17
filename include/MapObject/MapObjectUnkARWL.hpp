//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkARWL : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkARWL();

    /* 30 */ virtual ~MapObjectUnkARWL() override;

    void func_ov070_02146230(void);
    void func_ov070_02146258(void);
    void func_ov070_021463b0(void);
    void func_ov070_021463c4(void);
    void func_ov070_021465a8(void);
    void func_ov070_02146774(void);
    void func_ov070_021468bc(void);
    void func_ov070_02146998(void);
    void func_ov070_021469e4(void);
    void func_ov070_02146a50(void);
};

class MapObjectProfileUnkARWL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkARWL();
    ~MapObjectProfileUnkARWL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkARWL *GetProfile();
};
