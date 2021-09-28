int mx_insertion_sort(char **arr, int size);

int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size)
{
   int count = 0;
   for(int i = 1; i < size; i++)
   {
        int j = i - 1;

        char *to_sort = arr[i];

        while(j >= 0 &&  mx_strlen(to_sort) < mx_strlen(arr[j]))
        {
            count++;
            arr[j+1] = arr[j];
            j--;
        }

        arr[j + 1] = to_sort;
    }

    return count;
    
}

