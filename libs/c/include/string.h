#ifndef _C_STRING_H
#define _C_STRING_H

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned int size_t;

size_t strlen(const char *str);
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t num);
int strcmp(char *str1, char *str2);
int strncmp(char *str1, char *str2, size_t num);

#ifdef __cplusplus
}
#endif

#endif
