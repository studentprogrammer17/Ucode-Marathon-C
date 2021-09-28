int mx_strcmp(const char *s1,const char *s2);

int mx_strcmp(const char *s1,const char *s2)
{
    const char *cur_s1 = s1;
    int size_s1 = 0;

    const char *cur_s2 = s2;
    int size_s2 = 0;

    for(; *cur_s1; cur_s1++ ) { size_s1 = cur_s1 - s1; }
    for(; *cur_s2; cur_s2++ ) { size_s2 = cur_s2 - s2; }

    if(size_s1 != size_s2)
    {
        return 1;
    }
    else
    {
        for(int i = 0;i < size_s1 + 1;i++)
        {
            if(s1[i] != s2[i])
            {
                return 1;
            }
        
        }
    }
    return 0;
}
