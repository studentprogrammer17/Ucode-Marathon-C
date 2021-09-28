#include "file_to_str.h"

char *mx_file_to_str(const char *filename)
{
    char *dst = NULL;
    int file;
    int count = 0;
    char buf;

    file = open(filename, O_RDONLY);
    while (read(file, &buf, 1)){
        count++;
    }
    close(file);

    file = open(filename, O_RDONLY);
    dst = (char*)malloc(count);
    for (int i = 0; read(file, &buf, 1); i++){
        dst[i] = buf;
    }

    close(file);
    return dst;
}

