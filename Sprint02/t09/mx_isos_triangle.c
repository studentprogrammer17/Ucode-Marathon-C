#include "mx_printchar.c"

void mx_isos_triangle(unsigned int length,char c);

void mx_isos_triangle(unsigned int length,char c)
{
   for (unsigned int line = 0; line < length; line++)
    {
        for (unsigned int symb = 0; symb <= line; symb++)
        {
            mx_printchar(c);
        }
        mx_printchar('\n');
    }
}
