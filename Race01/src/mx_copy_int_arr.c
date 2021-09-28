#include "minilibmx.h"
long long *mx_copy_int_arr(const long long *src, int size) {
    if(src == NULL || size < 0) return NULL;
    long long *arr;
    arr = (long long*)malloc(sizeof(long long) * size);
    if(arr == NULL) return NULL;
    for(int i = 0; i < size; i++) {
        *(arr + i) = *(src + i);
    }
    return arr;
}