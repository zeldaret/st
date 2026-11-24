#pragma once

#include "System/OverlayManager.hpp"
#include "types.h"

class PlayerLinkActor_A0;

struct UnkStruct_ov000_020b2cec {
    /* 00 */ OverlayIndex ovlToLoad;
    /* 04 */ PTMF<PlayerLinkActor_A0>::PTMFCallback callback;
    /* 0C */
};

extern UnkStruct_ov000_020b2cec data_ov000_020b2cec[];
