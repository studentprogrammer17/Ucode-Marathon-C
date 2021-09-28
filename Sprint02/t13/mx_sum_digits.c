int mx_sum_digits(int num);

int mx_sum_digits(int num)
{
   int dq = 0;
   int sum = 0;
 
   if(num < 0)
   {
       num = -num;
   }

   while(num > 0)
   {
        dq = num % 10;
        sum = sum + dq;
        num /= 10;
   }
    return sum;
}
