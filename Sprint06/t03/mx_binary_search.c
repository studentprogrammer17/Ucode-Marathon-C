int mx_strcmp(const char *s1,const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count);

int mx_binary_search(char **arr, int size, const char *s, int *count)
{
    int flag = 0;

    int answer = 0;

    int first = 0;

    int last = size - 1;

    int middle = (first + last) / 2;

    int temp_count = 0;

    while(first <= last)
    {
        temp_count++;

        *count = temp_count;

        if(mx_strcmp(arr[middle],s) < 0)
        {
            first = middle + 1;
        }
        
        else if(mx_strcmp(arr[middle],s) == 0)
        {
            flag = 1;
            answer = middle + 1;
            break;
        }

        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }

    if(flag == 1)
    {
        return answer - 1;
    }

    else
    {
        *count = 0;
        return -1;
    }
}

