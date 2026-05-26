#ifndef _NITRO_MB_H
#define _NITRO_MB_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MB_USER_NAME_LENGTH 0 // nocheckin

typedef struct {
    u16 length;
    u16 rssi;
    u16 bssid[3];
    u16 ssidLength;
    u8 ssid[32];
    u16 capaInfo;
    struct {
        u16 basic;
        u16 support;
    } rateSet;
    u16 beaconPeriod;
    u16 dtimPeriod;
    u16 channel;
    u16 cfpPeriod;
    u16 cfpMaxDuration;
} MBParentBssDesc;

typedef struct MBGameRegistry {
    /* 00 */ const char *programPathName;
    /* 04 */ const u16 *title;
    /* 08 */ const u16 *description;
    /* 0c */ const char *iconCharacterDataFile;
    /* 10 */ const char *iconPaletteFile;
    /* 14 */ u32 ggid;
    /* 18 */ u8 numPlayers;
    /* 19 */ u8 unk_19[0x3c - 0x19];
    /* 3c */
} MBGameRegistry;

typedef struct MBUserInfo {
    // nocheckin
    u16 nameLength;
    char name[1];
} MBUserInfo;

inline BOOL MB_IsMultiBootChild(void) {
    return REG_027FFC40 == 0x2;
}
inline const MBParentBssDesc *MB_GetMultiBootParentBssDesc(void) {
    BOOL b = REG_027FFC40 == 2;
    if (b) {
        return (const MBParentBssDesc *) &REG_027FFC42;
    } else {
        return NULL;
    }
}

#ifdef __cplusplus
} // extern "C"
#endif

#endif
