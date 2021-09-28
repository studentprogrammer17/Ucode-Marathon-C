#include <stdbool.h>
void mx_printchar(char c);

bool mx_isspace(char c);

int mx_atoi(const char *str);

void mx_printint(int n);

int main(int argc,char *argv[])
{
    if(argc > 1)
    {

        for(int i = 1; i < argc; i++)
        {

            int num = mx_atoi(argv[i]);

            for(int j = 31; j >= 0; j--)
            {

                int bit = num >> j;

                if(bit & 1)
                {
                    mx_printchar('1');
                }

                else
                {
                    mx_printchar('0');
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

