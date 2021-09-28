int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2);

char *mx_strcat(char *s1, const char *s2)
{
    char *p = s1 + mx_strlen(s1);

    while(*s2 != '\0')
    {
        *p++ = *s2++;
    }
    *p = '\0';

    return s1;
}

