#include <stdbool.h>
// t02
bool mx_isspace(char c);

bool mx_isspace(char c)
{
    if((c == ' ') || (c >= 9 && c <= 13))
        return 1;
    else
        return 0;
}

