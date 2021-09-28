void mx_swap_char(char *s1,char *s2);
int mx_strlen(const char *s);

void mx_str_reverse(char *s);

void mx_str_reverse(char *s)
{
    int size = mx_strlen(s);

    for(int i = 0,j = size - 1;i < j;i++,j--)
    {
        mx_swap_char(&s[i],&s[j]);
    }
}
