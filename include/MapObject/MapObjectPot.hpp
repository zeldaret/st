#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectPot : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectPot();

    /* 30 */ virtual ~MapObjectPot() override;

    void func_ov031_02105088();
    void func_ov031_021050b4();
    void func_ov031_021051d4();
    void func_ov031_021052cc();
    void func_ov031_02105310();
    void func_ov031_02105348();
    void func_ov031_021053b4();
    void func_ov031_021053fc();
};

class MapObjectProfilePot : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfilePot();
    ~MapObjectProfilePot();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfilePot *GetProfile();
};
