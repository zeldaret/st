#ifndef _NITRO_PM_H
#define _NITRO_PM_H

#ifdef __cplusplus
extern "C" {
#endif

// TODO: These two may swap values
#define PM_TRIGGER_COVER_OPEN 4
#define PM_TRIGGER_CARD 8

#define PM_LCD_POWER_OFF 0
#define PM_LCD_POWER_ON 0x1

void PM_GoSleepMode(u32, u32, u32);

BOOL PM_SetLCDPower(u32 power);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
