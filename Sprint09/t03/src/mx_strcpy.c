#include "../inc/header.h"

char *mx_strcpy(char *dst,const char *src)
{
    const char *cur_src = src;
    int size_src = 0;

    for(; *cur_src; cur_src++ ) { size_src = cur_src - src; }

    char *temp = dst;

    for(int i = 0;i < size_src;i++)
    {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';

    return temp;
}
