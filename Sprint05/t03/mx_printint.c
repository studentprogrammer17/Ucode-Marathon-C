void mx_printchar(char c);

void mx_printint(int n);

void mx_printint(int n)
{   
    if (n < 0)
    {
        n *= -1;
        mx_printchar('-');
    }
    else if (n == 0)
    {  
        mx_printchar('0');
        return;
    }

    char arr[11];

    for (int i = 0; n != 0; n /= 10, i++)
    {
        arr[i] = (char)(n % 10) + 48;
    }

    for (int i = 0; arr[i] != '\0'; i++)
    {
        mx_printchar(arr[i]);
    }
}

