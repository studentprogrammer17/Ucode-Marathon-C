bool mx_isupper(int c);
bool mx_islower(int c);
int mx_tolower(int c);
int mx_toupper(int c);

void mx_reverse_case(char *s);

void mx_reverse_case(char *s)
{
    char *cur = s;
    int size = 0;

    for(; *cur; cur++ ) { size = cur - s; }
    
    char new_s[size];

    for(int i = 0;i <= size;i++)
    {
       if(mx_isupper(s[i]))
       {
        new_s[i] = mx_tolower(s[i]);
       }
       else if(s[i] == ' ')
       {
           new_s[i] = ' ';
       }
       else if(mx_islower(s[i]))
       {
           new_s[i] = mx_toupper(s[i]);
       }
    }
}
