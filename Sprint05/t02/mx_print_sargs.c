void mx_printstr(const char *s);

void mx_printchar(char c);

int mx_strlen(const char *s);

int mx_strcmp(const char *s1,const char *s2);

int main(int argc,char* argv[])
{
    if(argc > 1)
    {
        int swap = -1;

        char *temp;

        while(swap != 0)
        {
            swap = 0;
            for(int i = 1; i < argc - 1; i++)
            {

                if(mx_strcmp(argv[i], argv[i + 1]) > 0)
                {
                    swap++;
                    temp = argv[i];
                    argv[i] = argv[i + 1];
                    argv[i + 1] = temp;
                }

            }
        }

        for(int i = 1; i < argc; i++)
        {
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
        return 0;
    }

    else
    {
        return 1;
    }
}

