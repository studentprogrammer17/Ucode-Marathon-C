#include <stdio.h>
#include <unistd.h>

void mx_matrix_voice(void);

int main(void)
{
    mx_matrix_voice();
}

void mx_matrix_voice(void)
{
   char  beep = '\a';

   write(1,&beep,1);
}
