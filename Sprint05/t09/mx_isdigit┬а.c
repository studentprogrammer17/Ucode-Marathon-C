#include <stdbool.h>

bool mx_isdigit(int c);

bool mx_isdigit(int c)
{
    return (c >= 48 && c <= 57);
}

