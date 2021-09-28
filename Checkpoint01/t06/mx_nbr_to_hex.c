#include <stdlib.h>

char *mx_nbr_to_hex(unsigned long nbr);

char *mx_nbr_to_hex(unsigned long nbr)
{
    unsigned long quotient, remainder;
    int j = 0;
    char *hex = (char*)malloc(50);
 
    quotient = nbr;
 
    while (quotient != 0) {

        remainder = quotient % 16;

        if (remainder < 10) {
            hex[j++] = 48 + remainder;
        }

        else {
            hex[j++] = 55 + remainder;
        }

        quotient = quotient / 16;
    }
    
    int size = 0;
    
    for(int i = 0; hex[i] != '\0'; i++) {
        size++;
    }

    char *result = (char*)malloc(size);

    for(int i = 0; i < size; i++) {
        result[i] = hex[size - i - 1];
    }

    free(hex);

    return result;
}

