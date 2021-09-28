#include <stdlib.h>

char *mx_strdup(const char *str);

char *mx_strdup(const char *str)
{
    if(str == NULL) {
        return NULL;
    }

    char *return_str = NULL;

    int size = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        size++;
    }

    return_str = (char*)malloc(size + 1);

    for(int i = 0; i < size + 1; i++) {
            *(return_str + i) = '\0';
        }
    
    char *temp_return_str = return_str;
    
    while(*str)
    {
        *return_str++ = *str++;
    }
    *return_str = 0;

    return temp_return_str;
}

