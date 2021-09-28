#include "minilibmx.h"

char *mx_strtrim(const char *str) {

    if(str == NULL) return NULL;

    while(mx_isspace(*str)) {
        str++;
    }
    int index = 0;
    if(mx_strlen(str) > 0) {
        index = mx_strlen(str) - 1;
    }

    while(mx_isspace(str[index])) {
        index--;
    }

    char *result = mx_strnew(index);
    mx_strncpy(result, str, index + 1);
    result[index + 1] = '\0';
    return result;
}
