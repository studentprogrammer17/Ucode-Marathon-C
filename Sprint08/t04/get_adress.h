#ifndef GET_ADRESS_H

#define GET_ADRESS_H

#include <stdlib.h>


char *mx_get_address(void *p);

char *mx_nbr_to_hex(unsigned long nbr);

char *mx_strnew(const int size);

int mx_strlen(const char *s);

char *mx_strcpy(char *dst, const char *src);

#endif

