#include <stdio.h>
#include <unistd.h>
#include "mx_printchar.c"

void mx_print_alphabet(void);

int main(void)
{
     mx_print_alphabet();
}

void mx_print_alphabet(void)
{
    int a = 97;
    int A = 65;
    int change = 0;
    
    while(a <= 122 && A <= 90)
    {
        if(change)
        {
             mx_printchar(a);
        }
        else
        {
            mx_printchar(A);
        }

        change = !change;
        a++;
        A++;
       
    }
}
