int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2);

char *mx_strcat(char *s1, const char *s2)
{
    int size_s1 = mx_strlen(s1);
    int size_s2 = mx_strlen(s2);

    for(int i = size_s1, j = 0; j < size_s2; i++, j++)
    {
        s1[i] = s2[j];
    }
    s1[size_s1 + size_s2] = '\0';

    return s1;
}

