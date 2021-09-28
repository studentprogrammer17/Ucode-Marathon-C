int mx_strncmp(const char *s1, const char *s2, int n);

int mx_strncmp(const char *s1, const char *s2, int n)
{
    int check = 0;
    for(int i = 0; i < n; i++)
    {
        check = 0;
        if(s1[i] == s2[i])
        {
            check = 1;
        }
        else
        {
            check = 0;
        }
    }
    if(check == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

