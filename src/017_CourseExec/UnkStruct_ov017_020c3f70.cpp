#include "Unknown/UnkStruct_ov017_020c3f70.hpp"
#include "Unknown/UnkStruct_02049b80.hpp"

//! TODO: determine type
static u8 data_ov017_020c403c[0x804];

UnkStruct_ov017_020c3f70 StaticInstance<UnkStruct_ov017_020c3f70>::sInstance(data_ov017_020c403c, 0x800, 0x0E);

UnkStruct_ov017_020c3f70::~UnkStruct_ov017_020c3f70() {
    this->func_ov017_020bba94();
}

void UnkStruct_ov017_020c3f70::func_ov017_020bba78() {
    data_02049b80.func_02013fec(0, this);
}

void UnkStruct_ov017_020c3f70::func_ov017_020bba94() {
    data_02049b80.mUnk_0C[0] = 0;
}
