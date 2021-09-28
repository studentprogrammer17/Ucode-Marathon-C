#include "minilibmx.h"

int mx_atoi(const char *str) {
    int num = 0, flag = 0;
    
    while(mx_isspace(*str)) {
            str++;
        }
    if(*str == '-' || *str == '+') {
        if(*str == '-') flag = 1;
        str++;
    }
    while(mx_isdigit(*str)) {
        num = num * 10 + *str - '0';
        str++;
    }
    if(flag == 1) num = -num;
    return num;
}
