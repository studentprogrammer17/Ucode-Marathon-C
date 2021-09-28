#include <unistd.h>
// t01
void mx_printstr(const char *s);

void mx_printstr(const char *s)
{
    int size = 0;
    while(*s != '\0')
    {
        s++;
        size++;
    }

    write(1,s,size);
}

