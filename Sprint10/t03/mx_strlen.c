#include "file_to_str.h"

int mx_strlen(const char *s)
{
    int size = 0;
    
    while(*s != '\0')
    {
        s++;
        size++;
    }

    return size;
}

