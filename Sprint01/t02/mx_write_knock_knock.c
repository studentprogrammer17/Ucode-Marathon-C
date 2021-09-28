#include <stdio.h>
#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void);

int main(void)
{
  mx_write_knock_knock();
}

void mx_write_knock_knock(void)
{ 
  char *output = "Follow the white rabbit.\nKnock, knock, Neo.\n";
  write(1,output,strlen(output));
}
