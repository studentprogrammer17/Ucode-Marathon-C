int mx_factorial_iter(int n);

int INT_MAX = 20;

int mx_factorial_iter(int n)
{
    if (n > 0 && n < INT_MAX)
    {

        int fact = 1;

        while (n > 0)
        {
            fact *= n;
            n -= 1;
        }

        return fact;
    }
    
    else
    {
        return 0;
    }
}

