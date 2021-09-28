#include <stdio.h>
#include <unistd.h>
#include "mx_printchar.c"

void mx_printable(void);

void mx_printable(void)
{
    int i = 126;
    while(i != 31)
    {
        mx_printchar(i);
        i--;
    }
}
