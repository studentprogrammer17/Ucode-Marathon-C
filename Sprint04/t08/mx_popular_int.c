int mx_popular_int(const int *arr, int size);

int mx_popular_int(const int *arr, int size)
{
    int popular = 0;
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        int cur_popular = arr[i];
        int cur_count = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr[j] == cur_popular)
            {
                cur_count++;
            }
        }
        if(cur_count > count)
        {
            count = cur_count;
            popular = cur_popular;
        }
    }
    return popular;
}

