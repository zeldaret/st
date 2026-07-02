#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTSUB : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTSUB();

    /* 30 */ virtual ~MapObjectUnkTSUB() override;

    void func_ov031_02105088();
    void func_ov031_021050b4();
    void func_ov031_021051d4();
    void func_ov031_021052cc();
    void func_ov031_02105310();
    void func_ov031_02105348();
    void func_ov031_021053b4();
    void func_ov031_021053fc();
};

class MapObjectProfileUnkTSUB : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTSUB();
    ~MapObjectProfileUnkTSUB();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTSUB *GetProfile();
};
