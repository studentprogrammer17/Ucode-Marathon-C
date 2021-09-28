#include "minilibmx.h"

void mx_printint(int n){
    if(n < 0) {
        mx_printchar('-');
        n = -n;
    }
    if(n == 0) {
        mx_printchar('0');
    } 
    int length = 0;
    char baff[21];
    for(int i = 0; n != 0; i++) {
        baff[i] = n % 10 + '0';
        n /= 10;
        length++;
    }

    for(int i = length - 1; i >= 0; i--) {
        mx_printchar(*(baff + i));
    }
}
