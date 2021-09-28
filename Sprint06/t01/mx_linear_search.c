#include <stdio.h>

int mx_strcmp(const char *s1,const char *s2);

int mx_linear_search(char **arr, const char *s);

int mx_linear_search(char **arr, const char *s)
{
    if(arr == NULL || s == NULL)
    {
            return -1;
    }

    for(int i = 0; arr[i] != '\0'; i++)
    {

        if(mx_strcmp(arr[i],s) == 0)
        {
            return i;
        }

    }
    
    return -1;
}

