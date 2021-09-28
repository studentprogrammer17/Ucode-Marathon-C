int mx_sqrt(int x);

int mx_sqrt(int x)
{
    if(x <= 0)
    {
        return 0;
    }
    else
    {
        int result = x / 2;
        for(int i = 0; i < x; i++)
        {
            result = (result + x / result) / 2;
        }
        int check = result * result;
        if(check == x)
        {
            return result;
        }
        else
        {
            return 0;
        }
    }

}

