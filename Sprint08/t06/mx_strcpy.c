#include "create_agent.h"

char *mx_strcpy(char *dst, const char *src);

char *mx_strcpy(char *dst, const char *src)
{
    char *temp_dst = dst;
    
    while(*src)
    {
        *dst++ = *src++;
    }
    *dst = 0;

    return temp_dst;
}

