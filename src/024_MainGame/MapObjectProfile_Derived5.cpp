#include "MainGame/UnkTrainSystems.hpp"
#include "Unknown/Common.hpp"

static const char *data_ov024_020d8374[] = {
    "pillar",    "seaPillar", "stopper",    "bubble", "blastLava",  "blastSand",
    "blastSnow", "blastSoil", "blastWater", "super",  "darkPillar", "cannonball",
};

static const char *data_ov024_020d8358[] = {
    "ice", "wood", "iron", "fish", "kokko", "jar", "ore",
};

const char *func_ov024_020d46b4(unk32 param1) {
    return data_ov024_020d8374[param1];
}

MapObjectProfile_Derived5::MapObjectProfile_Derived5(s32 param1) :
    MapObjectProfile_Derived2_20_Base("Train", func_ov024_020d46b4(param1), "model", "anm", 1,
                                      UnkTrainSystem1::func_ov024_020d54a0(param1)) {}

MapObjectProfile_Derived5::MapObjectProfile_Derived5(u32 param1) :
    MapObjectProfile_Derived2_20_Base("Train/mat", data_ov024_020d8358[param1], "model", "", 1, 0) {}

MapObjectProfile_Derived5::~MapObjectProfile_Derived5() {}
