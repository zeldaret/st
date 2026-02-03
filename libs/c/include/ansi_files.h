#ifndef _C_ANSI_FILES_H
#define _C_ANSI_FILES_H

#include <file_struc.h>

#ifdef __cplusplus
extern "C" {
#endif

#define console_buff_mode _IOLBF
#define console_buff_size 256

typedef unsigned char console_buff[console_buff_size];

#ifdef __cplusplus
}
#endif

#endif
