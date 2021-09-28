#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdbool.h>

bool mx_isspace(char c);

bool mx_isspace(char c)
{
    if(c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == '\v' || c == '\f')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
