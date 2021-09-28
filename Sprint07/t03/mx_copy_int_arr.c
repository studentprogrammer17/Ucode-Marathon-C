#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_copy_int_arr(const int *src, int size)
{

    if(src == NULL)
    {
        return NULL;
    }

    int *dst_arr = (int *)malloc(size);

    for(int i = 0; i < size; i++)
    {
        dst_arr[i] = src[i];
    }

    return dst_arr;
}

