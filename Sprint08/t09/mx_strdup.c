#include "only_smiths.h"

char *mx_strnew(const int size);

int mx_strlen(const char *s);

char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str);

char *mx_strdup(const char *str)
{
    if(str == NULL)
    {
        return NULL;
    }

    char *return_str = NULL;

    int size = mx_strlen(str);
    
    return_str = mx_strnew(size);

    mx_strcpy(return_str,str);

    return return_str;
}

