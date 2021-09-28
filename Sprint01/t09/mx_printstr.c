#include <stdio.h>
#include <unistd.h>
#include "mx_strlen.c"

void mx_printstr(const char *s);

void  mx_printstr(const char *s)
{
    write(1,s,mx_strlen(s));
}
