double mx_pow_rec(double n, unsigned int pow);

double mx_pow_rec(double n, unsigned int pow)
{
    if (pow == 0)
    {
        return 1;
    }

    else if (n == 0)
    {
        return 0;
    }

    else if (pow % 2 == 0)
    {
        return mx_pow_rec(n, pow / 2) * mx_pow_rec(n, pow / 2);
    }
    
    else
    {
        return n * mx_pow_rec(n, pow / 2) * mx_pow_rec(n, pow / 2);
    }
}