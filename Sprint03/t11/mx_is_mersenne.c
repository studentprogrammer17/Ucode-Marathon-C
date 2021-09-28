#include <stdbool.h>
bool mx_is_prime(int num);
double mx_pow(double n,unsigned int pow);

bool mx_is_mersenne(int n);

bool mx_is_mersenne(int n)
{
    int i = 0;
    while(true)
    {
        if(mx_pow(2,i) > n + 1)
        {
            return false;
        }
        else if(mx_pow(2,i) == n + 1)
        {
            return true;
        }
        i++;
    }
    return false;
}
