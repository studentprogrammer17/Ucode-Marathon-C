int mx_factorial_rec(int n);

int INT_MAX = 20;

int mx_factorial_rec(int n)
{
    if (n >= INT_MAX)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    if (n == 0)
    {
        return 0;
    }
    
    return n * mx_factorial_rec(n - 1);

}

