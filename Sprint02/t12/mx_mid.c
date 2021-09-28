int mx_mid(int a,int b,int c);

int mx_mid(int a,int b,int c)
{
    int max = 0;
    int min = 0;

    // max
    if(a >= b && a >= c)
    {
        max = a;
    }
    else if(b >= a && b >= c)
    {
        max = b;
    }
    else if(c >= a && c >= b)
    {
        max = c;
    }
    // min
    if(a <= b && a <= c)
    {
        min = a;
    }
    else if(b <= a && b <= c)
    {
        min = b;
    }
    else if(c <= a && c <= b)
    {
        min = c;
    }

    // check
    if(min == a && max <= b)
    {
        return c;
    }
    if(min == a && max == c)
    {
        return b;
    }
    else
    {
        return a;
    }

   
}
