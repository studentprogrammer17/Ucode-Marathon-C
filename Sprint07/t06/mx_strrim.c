#include <stdlib.h>

#include <stdbool.h>

char *mx_strnew(const int size);

bool mx_isspace(char c);

int mx_strlen(const char *s);

void mx_strdel(char **str);

char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strtrim(const char *str);

char *mx_strtrim(const char *str)
{
    if(str == NULL)
    {
        return NULL;
    }

    int size = mx_strlen(str);

    char *new_str = mx_strnew(size);

    new_str = mx_strncpy(new_str,str,size);

    int spaces_before = 0;

    for(int i = 0; i < size; i++)
    {
        if(mx_isspace(str[i]))
        {
            spaces_before++;
        }
        else
        {
            break;
        }
    }


    int spaces_after = 0;

    for(int i = size - 1; i > 0; i--)
    {
        if(mx_isspace(str[i]))
        {
            spaces_after++;
        }
        else
        {
            break;
        }
    }

    char *return_str = mx_strnew(size - spaces_after - spaces_before);

    for(int i = spaces_before, j = 0; i < size - spaces_after; i++,j++)
    {
        return_str[j] = new_str[i];
    }

    mx_strdel(&new_str);

    return return_str;
}

