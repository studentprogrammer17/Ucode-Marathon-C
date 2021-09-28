#include <stdbool.h>

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str);

int mx_atoi(const char *str)
{
    int check = 0;
    int plus = 0;
    int num = 0;
    for (int i = 0; str[i]; i++)
    {
        if (!mx_isspace(str[i]))
        {

            if (mx_isdigit(str[i]))
            {
                num = num * 10 + (str[i] - '0');
            }

            else if (mx_isspace(str[i + 1]) && str[i] == '-')
            {
                return 0;
            }

            else
            {
                if (str[i] == '-')
                {
                    if (!str[i + 1])
                    {
                        return 0;
                    }
                    else if (check == 0 && plus == 0)
                    {
                        check = 1;
                    }
                    else
                    {
                        return 0;
                    }
                }
                
                else if (str[i] == '+')
                {
                    if (!str[i + 1])
                    {
                        return 0;
                    }

                    else if (plus == 0 && check == 0)
                    {
                        plus = 1;
                    }

                    else
                    {
                        return 0;
                    }
                }

                else
                {
                    if(check == 1)
                    {
                        return -num;
                    }

                    else
                    {
                        return num;
                    }
                }
            }
        }
   }

   if(check == 1)
   {
       return -num;
   }

   else
   {
       return num;
   }
}

