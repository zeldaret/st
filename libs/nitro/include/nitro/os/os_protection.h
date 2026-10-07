#ifndef _NITRO_OS_PROTECTION_H
#define _NITRO_OS_PROTECTION_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

void OS_SetProtectionRegion0(u32);
void OS_SetProtectionRegion1(u32);
void OS_SetProtectionRegion2(u32);
void OS_SetProtectionRegion3(u32);
void OS_SetProtectionRegion4(u32);
void OS_SetProtectionRegion5(u32);
void OS_SetProtectionRegion6(u32);
void OS_SetProtectionRegion7(u32);
u32 OS_GetProtectionRegion0(void);
u32 OS_GetProtectionRegion1(void);
u32 OS_GetProtectionRegion2(void);
u32 OS_GetProtectionRegion3(void);
u32 OS_GetProtectionRegion4(void);
u32 OS_GetProtectionRegion5(void);
u32 OS_GetProtectionRegion6(void);
u32 OS_GetProtectionRegion7(void);

#ifdef __cplusplus
}
#endif

#endif
