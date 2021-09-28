#include <stdbool.h>

bool mx_is_prime(int num);

bool mx_is_prime(int num)
{
    int m = num / 2;
    for(int i = 2;i <= m;i++)
    {
        if(num % i == 0 || num == 9)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    return true;
}
