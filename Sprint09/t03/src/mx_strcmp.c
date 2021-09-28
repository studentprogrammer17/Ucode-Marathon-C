#include "../inc/header.h"

int mx_strcmp(const char *s1,const char *s2)
{
    const char *ptr1 = s1;

    const char *ptr2 = s2;

    char c1, c2;

    do
    {
         c1 = *ptr1++;

         c2 = *ptr2++;

         if (c1 == '\0')
         {
            return c1 - c2;
         }
         
    }while (c1 == c2);

    return c1 - c2;
}

