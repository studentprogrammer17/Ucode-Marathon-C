#include "mx_printchar.c"

void mx_printint(int n);

void mx_printint(int n)
{   
    int size = 0;
    int cop_n = n;
    while (cop_n > 0)
    {
        cop_n = cop_n / 10;
        size++;
    }
    char arr[size];
    for (int i = 0; i < size;i++)
    {
        int m; 
        m = n % 10;
        arr[i] = m + 48;
        n = n / 10;
    }
    for (int i = size; i != -1 ; i--)
    {
        mx_printchar(arr[i]);
    }
}
