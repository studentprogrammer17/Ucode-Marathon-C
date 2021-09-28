#include <stdbool.h>

void mx_printchar(char c);

void mx_printint(int n);

int mx_atoi(const char *str);

bool mx_isdigit(int c);

int mx_strlen(const char *s);

int main(int argc, char* argv[])
{
    if(argc == 3)
    {
        int f_arg = mx_atoi(argv[1]);
        
        int s_arg = mx_atoi(argv[2]);

        if(f_arg > s_arg)
        {
            int temp = f_arg;
            f_arg = s_arg;
            s_arg = temp;
        }
        
        for(int i = f_arg; i <= s_arg; i++)
        {
            for(int j = f_arg; j <= s_arg; j++)
            {

                mx_printint(i * j);

                if(j != s_arg)
                {
                    mx_printchar('\t');
                }

            }

            mx_printchar('\n');
        }
        
        return 0;
    }

    else
    {
        return 1;
    }
}

