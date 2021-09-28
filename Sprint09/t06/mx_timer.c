#include <time.h>

double mx_timer(void (*f)());

double mx_timer(void (*f)())
{
    clock_t start_t, end_t;

    start_t = clock();

    (*f) ();

    end_t = clock();

    return (double)(end_t - start_t) / CLOCKS_PER_SEC;
}

