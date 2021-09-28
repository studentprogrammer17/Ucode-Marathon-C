#include <stdio.h>
#include "mx_strlen.c"
#include "mx_strchr.c"
#include "mx_strncmp.c"

char *mx_strstr(const char *s1, const char *s2);

int main(void)
{
    char s1[] = "0123456789";
    char s2[] = "345";
    printf("%s",mx_strstr(s1,s2));
}

char *mx_strstr(const char *s1, const char *s2)
{
    int size_s2 = mx_strlen(s2);
   
   if(size_s2 == 0)
   {
       return (char *)s1;
   }
   char *p = mx_strchr(s1,s2[0]);
   while(p != 0)
   {
       if(mx_strncmp(p,s2,size_s2 == 0))
       {
           return (char *)p;
       }
       else
       {
           p = mx_strchr(p + 1,s2[0]);
       }
   }
   return 0;
}

