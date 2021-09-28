#include <stdio.h>
#include <unistd.h>
#include "mx_printchar.c"

void mx_hexadecimal(void);

int main(void)
{
    mx_hexadecimal();
}

void mx_hexadecimal(void)
{
   for(int i = 0;i < 16; i++)
   {
       if(i > 9)
       {
           mx_printchar(i+55);
       }
       else
       {
           mx_printchar(i+48);
       }
   }
}
