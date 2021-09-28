#include "duplicate.h"

t_intarr *mx_del_dup_sarr(t_intarr *src)
{
    if(src == NULL){
        return NULL;
    }
    for(int i = 0; i < src->size; i++){

        for(int j = i + 1; j < src->size; j++){

            if(src->arr[i] == src->arr[j]){

                for(int k = j; k < src->size - 1; k++){
                    src->arr[k] = src->arr[k + 1];
                }

                src->size--;

                if(src->arr[i] == src->arr[j]){
                    j--;
                }
            }

        }
    }
    
    int *arr = malloc(src->size);

    t_intarr *newarr = {src};

    newarr->size = src->size;

    t_intarr array = {arr, src->size};

    t_intarr *array2 = &array;

    array2 = mx_copy_int_arr(newarr);

    newarr = NULL;

    arr = NULL;

    src = NULL;

    return array2;
}

