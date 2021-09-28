#include "mx_printstr.c"


void mx_is_positive(int i);

int main(void)
{
    mx_is_positive(2);
}

void mx_is_positive(int i)
{
    if(i > 0)
    {
        mx_printstr("Positive");
    }
    else if(i < 0)
    {
        mx_printstr("Negative");
    }
    else if(i == 0)
    {
        mx_printstr("zero");
    }
}
