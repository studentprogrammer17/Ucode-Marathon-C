#include "calculator.h"

int calculate(char **arr) {
    
    enum e_operation op = -1;
    t_operation current;
    int first = mx_atoi(arr[1]), second = mx_atoi(arr[3]);

    if(arr[2][0] == '+') {
        op = ADD;
        current.op = ADD;
        current.f = mx_add;
    }
    else if(arr[2][0] == '-') {
        op = SUB;
        current.op = SUB;
        current.f = mx_sub;
    }
    else if(arr[2][0] == '*') {
        op = MUL;
        current.op = MUL;
        current.f = mx_mul;
    }
    else if(arr[2][0] == '%') {
        op = MOD;
        current.op = MOD;
        current.f = mx_mod;
    }
    else if(arr[2][0] == '/') {
        op = DIV;
        current.op = DIV;
        current.f = mx_div;
    }

    int res = current.f(first, second);

    mx_printint(res);
    mx_printchar('\n');
    
    return 1;
}
