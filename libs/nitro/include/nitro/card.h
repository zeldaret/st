#ifndef _NITRO_CARD_H
#define _NITRO_CARD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

#define CARD_BACKUP_TYPE_EEPROM 1
#define CARD_BACKUP_TYPE_FLASH 2
#define CARD_BACKUP_TYPE_FRAM 3

#define CARD_BACKUP_TYPE_EEPROM_4KBITS (0x900 | CARD_BACKUP_TYPE_EEPROM)
#define CARD_BACKUP_TYPE_EEPROM_64KBITS (0xD00 | CARD_BACKUP_TYPE_EEPROM)
#define CARD_BACKUP_TYPE_EEPROM_512KBITS (0x1000 | CARD_BACKUP_TYPE_EEPROM)
#define CARD_BACKUP_TYPE_FLASH_2MBITS (0x1200 | CARD_BACKUP_TYPE_FLASH)
#define CARD_BACKUP_TYPE_FLASH_4MBITS (0x1300 | CARD_BACKUP_TYPE_FLASH)
#define CARD_BACKUP_TYPE_FLASH_8MBITS (0x1400 | CARD_BACKUP_TYPE_FLASH)
#define CARD_BACKUP_TYPE_FRAM_256KBITS (0xF00 | CARD_BACKUP_TYPE_FRAM)

// TODO: Find values for these
#define CARD_RESULT_SUCCESS 0
#define CARD_RESULT_FAILURE
#define CARD_RESULT_INVALID_PARAM
#define CARD_RESULT_UNSUPPORTED
#define CARD_RESULT_TIMEOUT
#define CARD_RESULT_CANCELED
#define CARD_RESULT_NO_RESPONSE
#define CARD_RESULT_ERROR

typedef u32 CARDBackupType;
typedef u32 CARDResult;

void CARD_LockBackup(u16 cardId);
void CARD_UnlockBackup(u16 cardId);
BOOL CARD_IdentifyBackup(CARDBackupType type);
CARDBackupType CARD_GetBackupType();
#define CARD_IsBackupEeprom() (CARD_GetBackupType() & 0xFF) == CARD_BACKUP_TYPE_EEPROM
#define CARD_IsBackupFlash() (CARD_GetBackupType() & 0xFF) == CARD_BACKUP_TYPE_FLASH
#define CARD_IsBackupFram() (CARD_GetBackupType() & 0xFF) == CARD_BACKUP_TYPE_FRAM
BOOL CARD_ReadWriteBackupAsync(u32 offset, void *buf, u32 size, void *, void *, u32, u32, u32, u32);
void CARD_WaitBackupAsync(void);
CARDResult CARD_GetResultCode(void);
BOOL CARD_func_0033();
void CARD_func_0034();

inline BOOL CARD_ReadEepromAsync(u32 offset, void *buf, u32 size, void *param4, void *param5) {
    return CARD_ReadWriteBackupAsync(offset, buf, size, param4, param5, 1, 6, 1, 0);
}
inline BOOL CARD_ReadFlashAsync(u32 offset, void *buf, u32 size, void *param4, void *param5) {
    return CARD_ReadWriteBackupAsync(offset, buf, size, param4, param5, 0, 6, 1, 0);
}
inline BOOL CARD_ReadFramAsync(u32 offset, void *buf, u32 size, void *param4, void *param5) {
    return CARD_ReadWriteBackupAsync(offset, buf, size, param4, param5, 1, 6, 1, 0);
}
inline BOOL CARD_WriteAndVerifyEepromAsync(u32 offset, void *buf, u32 size, void *param4, void *param5) {
    return CARD_ReadWriteBackupAsync(offset, buf, size, param4, param5, 1, 8, 10, 2);
}
inline BOOL CARD_WriteAndVerifyFlashAsync(u32 offset, void *buf, u32 size, void *param4, void *param5) {
    return CARD_ReadWriteBackupAsync(offset, buf, size, param4, param5, 0, 7, 10, 2);
}
inline BOOL CARD_WriteAndVerifyFramAsync(u32 offset, void *buf, u32 size, void *param4, void *param5) {
    return CARD_ReadWriteBackupAsync(offset, buf, size, param4, param5, 1, 8, 10, 2);
}

#ifdef __cplusplus
} // extern "C"
#endif

#endif
