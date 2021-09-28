#include <stdlib.h>

char *mx_strnew(const int size);

int mx_strlen(const char *s);

char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str);

char *mx_strcat(char *s1, const char *s2);

char *mx_strjoin(char const *s1, char const *s2);

void mx_strdel(char **str);

char *mx_concat_words(char **words);

char *mx_concat_words(char **words)
{
    if(words == NULL)
    {
        return NULL;
    }

    char *string = NULL;

    while (*words != NULL)
    {

        string = mx_strjoin(string, *words);

        words++;

        if(*words == NULL)
        {
            break;
        }

        string = mx_strjoin(string, " ");
        
    }

    mx_strdel(words);

    return string;
}

