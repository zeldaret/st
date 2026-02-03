#include <ansi_files.h>
#include <console_io.h>
#include <file_io.h>
#include <stdio.h>

static console_buff stdin_buff;
static console_buff stdout_buff;
static console_buff stderr_buff;

FILE __files[_STATIC_FILES] = {
    {
        0,
        {__must_exist, __read, console_buff_mode, __console_file, 0},
        {__neutral, 0, 0, 0},
        0,
        0,
        {0, 0},
        {0, 0},
        0,
        stdin_buff,
        console_buff_size,
        stdin_buff,
        0,
        0,
        0,
        0,
        NULL,
        __read_console,
        __write_console,
        __close_console,
        NULL,
    },
    {
        1,
        {__must_exist, __write, console_buff_mode, __console_file, 0},
        {__neutral, 0, 0, 0},
        0,
        0,
        {0, 0},
        {0, 0},
        0,
        stdout_buff,
        console_buff_size,
        stdout_buff,
        0,
        0,
        0,
        0,
        NULL,
        __read_console,
        __write_console,
        __close_console,
        NULL,
    },
    {
        2,
        {__must_exist, __write, _IONBF, __console_file, 0},
        {__neutral, 0, 0, 0},
        0,
        0,
        {0, 0},
        {0, 0},
        0,
        stderr_buff,
        console_buff_size,
        stderr_buff,
        0,
        0,
        0,
        0,
        NULL,
        __read_console,
        __write_console,
        __close_console,
        NULL,
    },
};

int __flush_all(void) {
    int result     = 0;
    FILE *file     = &__files[0];
    int file_index = 1;

    do {
        if (file->mode.file_kind != __closed_file) {
            if (fflush(file) != 0) {
                result = -1;
            }
        }
        if (file_index < 3) {
            file = &__files[file_index++];
        } else {
            file = NULL;
        }
    } while (file != NULL);

    return result;
}
