#include "choice.h"

t_phrase *choice(int pill)
{
    char *res;

    if (pill== MX_RED_PILL)
    {
        res = mx_strdup(MX_SUCCESS_PHRASE);
    }

    else if (pill== MX_BLUE_PILL)
    {
        res = mx_strdup(MX_FAIL_PHRASE);
    }

    else
    {
        res = mx_strdup(MX_UNDEFINED_PHRASE);
    }
    return res;
}

int main(void) 
{
    t_phrase *phrase1 = choice(MX_RED_PILL);
    t_phrase *phrase2 = choice(MX_BLUE_PILL);
    t_phrase *phrase3 = choice((MX_RED_PILL + MX_BLUE_PILL) * 2);

    printf("%s\n", phrase1);
    printf("%s\n", phrase2);
    printf("%s\n", phrase3);
    return 0;
}

