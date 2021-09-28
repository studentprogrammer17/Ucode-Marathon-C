#include "minilibmx.h"

char *mx_strcat(char *s1, const char *s2) {
    int n = mx_strlen(s1);
    for(int i = 0; i < mx_strlen(s2); i++) {
        *(s1 + i + n) = *(s2 + i); 
    }
    *(s1 + n + mx_strlen(s2)) = '\0';
    return s1;
}
