#ifndef _C_FILE_IO_H
#define _C_FILE_IO_H

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

int fclose(FILE *file);
int fflush(FILE *file);

#ifdef __cplusplus
}
#endif

#endif
