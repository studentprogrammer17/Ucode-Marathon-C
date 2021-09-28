#include <unistd.h>
// t00
void mx_printable(void);

void mx_printable(void)
{
    int i = 126;
    while (i != 32)
    {
        write(1, &i, 1);
        i--;
    }
    write(1, "\n", 1);
}

