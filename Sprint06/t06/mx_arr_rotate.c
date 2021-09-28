#include <stdio.h>

void mx_arr_rotate(int *arr, int size, int shift);

int main(void)
{
    int arr[] = {1,2,3,4,5};

    mx_arr_rotate(arr,5,-2);
    
    for(int i = 0;i < 5; i++)
    {
        printf("%d",arr[i]);
    }
}

void mx_arr_rotate(int *arr, int size, int shift)
{
    if(shift > 0)
    {
        int last = 0;

        for(int i = 0; i < shift; i++)
        {
            last = arr[size - 1];

            for(int j = size - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[0] = last;
        }
    }
    if(shift < 0)
    {
        int last = 0;

        for(int i = 0; i < shift; i++)
        {
            last = arr[size - 1];

            for(int j = size; j < 0; j++)
            {
                arr[j] = arr[j - 1];
            }
            arr[0] = last;
        }
    }

}

