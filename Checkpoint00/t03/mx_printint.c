#include <unistd.h>

void mx_printint(int n);
// t03
void mx_printint(int n)
{   
    if (n != 0)
    {
        int m;
        int size = 0;
        int temp_n = n;
        while (temp_n > 0)
        {
            temp_n /= 10;
            size++;
        }
        char arr[size];
        for (int i = 0; i < size; i++)
        {
            m = n % 10;
            arr[i] = m + 48;
            n /= 10;
        }
        for (int i = size; i != -1; i--)
        {
            write(1, &arr[i], 1);
        }
    }
    else
    {
        write(1, "0", 1);
    }
}

