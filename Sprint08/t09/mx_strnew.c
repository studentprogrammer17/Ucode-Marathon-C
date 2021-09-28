#include "only_smiths.h"

char *mx_strnew(const int size);

char *mx_strnew(const int size)
{
    if(size > 0) 
    {
        char *str = (char *)malloc(size + 1);

        for(int i = 0; i <= size; i++)
        {
            str[i] = '\0';
        }
        
        return str;
    }
    
    else
    {
        return NULL;
    }
}

