void mx_str_reverse(char* s);
// t04
void mx_str_reverse(char* s)
{
    int size = 0;
    char i = s[0];
    while (i != '\0')
    {
        size++;
        i = s[size];
    }

    for (int i = 0; i < size / 2; i++)
    {
        char temp = s[i];
        s[i] = s[size - 1 - i];
        s[size - 1 - i] = temp;
    }
}

