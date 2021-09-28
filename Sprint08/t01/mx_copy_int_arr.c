#include "duplicate.h"

t_intarr *mx_copy_int_arr(const t_intarr *src)
{

    if(src == NULL){
        return NULL;
    }

    int *dst_arr = (int *)malloc(src->size);

    t_intarr array = {dst_arr, src->size};
    t_intarr *newarr = &array;

    for(int i = 0; i < src->size; i++)
    {
        newarr->arr[i] = src->arr[i];
    }
    src = NULL;
    return newarr;
}

