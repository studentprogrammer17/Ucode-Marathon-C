int mx_lcm(int a, int b);

int mx_gcd(int a, int b);

int mx_lcm(int a, int b)
{
    int gcd = mx_gcd(a,b);

    int lcm = a * b;

    if(lcm < 0)
    {
        lcm *= -1;
    }

    return lcm / gcd;
}

