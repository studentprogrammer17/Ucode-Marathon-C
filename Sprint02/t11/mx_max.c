int mx_max(int a,int b,int c);

int mx_max(int a,int b,int c)
{
    int max = 0;
   
    if(a > b && a > c)
    {
        max = a;
    }
    else if(b > a && b > c)
    {
        max = b;
    }
    else if(c > a && c > b)
    {
        max = c;
    }

   return max;
}
