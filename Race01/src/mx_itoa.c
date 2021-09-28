#include "minilibmx.h"

char *mx_itoa(int num) {
    char *result;
    if (num == 0) {
        result = (char *)malloc(sizeof(char) * 2);
        result[1] = '\0';
        result[0] = '0';
        return result;
    }
    int is_positive = 1;
    if (num < 0) {
        is_positive = 0;
        num = -num;
    }

    char buff[22];
    int start_index = 0;
    
    while (num != 0)
    {
        buff[start_index] = num % 10 + '0';
        num /= 10;
        start_index++;
    }

    if (is_positive == 0) {
        buff[start_index] = '-';
        start_index++;
    }
    result = (char *)malloc(sizeof(char) * (start_index + 1));
    result[start_index] = '\0';
    for (int i = start_index - 1; i >= 0; i--) {
        result[start_index - i - 1] = buff[i];
    }
    return result;
}