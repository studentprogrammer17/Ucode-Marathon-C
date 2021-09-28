#include <stdbool.h>

void mx_printint(int n);

void mx_printchar(char c);

bool mx_isspace(char c);

bool mx_isdigit(int c);

int mx_atoi(const char *str);

int main(int argc,char* argv[])
{

    int sum_num = 0;
    
    if(argc > 1)
    {
        for(int i = 1; i < argc; i++)
        {

            bool check = false;

            for(int j = 0; argv[i][j]; j++)
            {

                if((!mx_isdigit(argv[i][j])) && argv[i][j] != '+' && argv[i][j] != '-')
                {
                    check = true;
                }
            }

            if(check)
            {
                continue;
            }

            sum_num += mx_atoi(argv[i]);
        }

        mx_printint(sum_num);

        mx_printchar('\n');

        return 1;
    }

    return 0;
}

