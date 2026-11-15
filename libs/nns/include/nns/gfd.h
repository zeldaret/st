#ifndef _NNS_GFD_H
#define _NNS_GFD_H

#include <nitro/types.h>

#ifdef __cplusplus
extern "C" {
#endif

inline size_t NNSi_GfdGetTexKeyRoundupSize(size_t size) {
    return (size + 0x0F) & ~0x0F;
}

inline u16 NNS_GfdMakeTexKey(s32 param1, s32 param2) {
    //! TODO: to be determined
}

inline u16 NNS_GfdMakePlttKey(s32 param1, s32 param2) {
    //! TODO: to be determined
}

#ifdef __cplusplus
}
#endif

#endif
