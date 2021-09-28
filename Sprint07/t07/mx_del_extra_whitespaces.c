#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

char *mx_strnew(const int size);

bool mx_isspace(char c);

int mx_strlen(const char *s);

void mx_strdel(char **str);

char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strtrim(const char *str);

char *mx_del_extra_whitespaces(const char *str);

char *mx_del_extra_whitespaces(const char *str)
{
    char *new_str = mx_strtrim(str);

    int spaces = 0;

    for(int i = 0; i < mx_strlen(new_str); i++)
    {

        if(mx_isspace(new_str[i]) && !mx_isspace(new_str[i + 1]))
        {
            spaces++;
        }

        else if(!mx_isspace(new_str[i]))
        {
            spaces++;
        }
    }

    char *return_str = mx_strnew(spaces);
    for(int i = 0, j = 0; i < mx_strlen(new_str); i++,j++)
    {
        if(mx_isspace(new_str[i]) && !mx_isspace(new_str[i + 1]))
        {
            return_str[j] = ' ';
        }

        else if(!mx_isspace(new_str[i]))
        {
            return_str[j] = new_str[i];
        }
    }
    mx_strdel(&new_str);

    return return_str;

}


int main(void)
{
    char name[] = "\f  My name...   is \r Neo \t\n  ";
    printf("%s",mx_del_extra_whitespaces(name));
}

