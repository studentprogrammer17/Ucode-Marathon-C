#include <stdbool.h>

double mx_pow(double n,unsigned int pow);

bool mx_is_narcissistic(int num);

bool mx_is_narcissistic(int num)
{
    int t = 0;
    int sum_dig = 0;
    while(num > 0)    
    {   
        t = num % 10;    
        sum_dig += t;    
        num = num / 10;    
    }    
    
    int duplicate = num;
    int sum = 0;
 
    while (duplicate)
    {
        sum += mx_pow(dup % 10, sum_dig);
        duplicate /= 10;
    }
 
    return (num == sum);
}
