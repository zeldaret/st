#include <stdio.h>

int fflush(FILE *file) {
    if (file == NULL) {
        return __flush_all();
    }

    if (file->state.error != 0 || file->mode.file_kind == __closed_file) {
        return -1;
    }

    if (file->mode.io_mode == 1) {
        return 0;
    }

    if (file->state.io_state >= 3) {
        file->state.io_state = 2;
    }

    if (file->state.io_state == 2) {
        file->buffer_len = 0;
    }

    if (file->state.io_state != 1) {
        file->state.io_state = 0;
        return 0;
    }

    if (__flush_buffer(file, 0) != 0) {
        file->state.error = 1;
        file->buffer_len  = 0;
        return -1;
    }

    file->state.io_state = 0;
    file->position       = 0;
    file->buffer_len     = 0;
    return 0;
}
