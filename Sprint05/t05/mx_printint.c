void mx_printchar(char c);

void mx_printint(int n);

void mx_printint(int n)
{   
    if(n == 0)
    {  
        mx_printchar('0');
        return;
    }

    else
    {
        char arr[20];
        int i = 0;
        int value = n;

        if (value < 0)
        {
            value = -value;
            mx_printchar('-');
        }

        while(value != 0)
        {
            arr[i++] = value % 10 + '0';
            value /= 10;
        }

        for(int j = i - 1; j >= 0; j--)
        {
            mx_printchar(arr[j]);
        }
    }
}

