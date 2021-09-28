char *mx_strcpy(char *dst,const char *src);
// t06
char *mx_strcpy(char *dst,const char *src)
{
    char *temp = dst;

    for(int i = 0;s[i] != '\0';i++)
    {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';

    return temp;
}

