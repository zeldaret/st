#include "types.h"

static s16 sCreditsEndingType = 2;

void SetCreditsEndingType(s16 value) {
    sCreditsEndingType = value;
}

s16 GetCreditsEndingType() {
    return sCreditsEndingType;
}
