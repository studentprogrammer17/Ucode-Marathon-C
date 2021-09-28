void mx_sort_arr_int(int*arr, int size);
// t07
void mx_sort_arr_int(int *arr, int size)
{
    int swap = -1;
    int temp = 0;

    while(swap != 0)
    {
        swap = 0;
        for(int i = 0; i < size - 1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap++;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

