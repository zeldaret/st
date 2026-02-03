#ifndef _C_FILE_POS_H
#define _C_FILE_POS_H

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

int fseek(FILE *stream, unsigned int offset, int whence);
int _fseek(FILE *stream, unsigned int offset, int whence);
int ftell(FILE *stream);
int _ftell(FILE *stream);

#ifdef __cplusplus
};
#endif

#endif
