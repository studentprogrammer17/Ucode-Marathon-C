#include "minilibmx.h"
double mx_pow(double n, unsigned int pow) {
    int buff = 0;
    if(pow == 0) return 1;

    if(pow % 2 == 0) {
        buff = mx_pow(n, pow / 2);
        return buff * buff;
    } else {
        return n * mx_pow(n, pow - 1);
    }
}