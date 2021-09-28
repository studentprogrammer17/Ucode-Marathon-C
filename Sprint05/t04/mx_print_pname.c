char *mx_strchr(const char *s, int c);

int mx_strlen(const char *s);

void mx_printchar(char c);

void mx_printstr(const char *s);

char *mx_strchr(const char *s, int c);

int main(int argc,char* argv[])
{
    argc = 0;

    char *a = argv[0];

    int slash = 0;

    for(int i = 0;a[i] != '\0'; i++)
    {

        if(a[i] == 47)
        {
            slash = i;
        }

    }

    for(int i = slash + 1;a[i] != '\0'; i++)
    {

        mx_printchar(a[i]);
    }

    return 0;
}

