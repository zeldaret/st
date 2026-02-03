#ifndef _C_CONSOLE_IO_H
#define _C_CONSOLE_IO_H

#ifdef __cplusplus
extern "C" {
#endif

extern int __read_console(unsigned int handle, unsigned char *buffer, int *count, void *ref);
extern int __write_console(unsigned int handle, unsigned char *buffer, int *count, void *ref);
extern int __close_console();

#ifdef __cplusplus
}
#endif

#endif
