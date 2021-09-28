char *mx_strchr(const char *s, int c);

char *mx_strchr(const char *s, int c)
{
    while(*s++)
    {
        
        if(*s == c)
        {
            return (char *)s;
        }

    }
    return 0;
}

